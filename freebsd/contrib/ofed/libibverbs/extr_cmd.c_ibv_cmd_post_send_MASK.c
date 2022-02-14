
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct ibv_sge {int dummy; } ;
struct TYPE_19__ {int rkey; int swap; int compare_add; int remote_addr; } ;
struct TYPE_16__ {int rkey; int remote_addr; } ;
struct TYPE_14__ {int remote_qkey; int remote_qpn; TYPE_1__* ah; } ;
struct TYPE_20__ {TYPE_8__ atomic; TYPE_5__ rdma; TYPE_3__ ud; } ;
struct ibv_send_wr {int num_sge; int opcode; struct ibv_send_wr* next; int sg_list; TYPE_9__ wr; int imm_data; int send_flags; int wr_id; } ;
struct ibv_qp {scalar_t__ qp_type; TYPE_10__* context; int handle; } ;
struct ibv_post_send_resp {unsigned int bad_wr; } ;
struct ibv_post_send {unsigned int wr_count; unsigned int sge_count; int wqe_size; int qp_handle; } ;
struct TYPE_17__ {int rkey; int swap; int compare_add; int remote_addr; } ;
struct TYPE_15__ {int rkey; int remote_addr; } ;
struct TYPE_13__ {int remote_qkey; int remote_qpn; int ah; } ;
struct TYPE_18__ {TYPE_6__ atomic; TYPE_4__ rdma; TYPE_2__ ud; } ;
struct ibv_kern_send_wr {int num_sge; int opcode; TYPE_7__ wr; int imm_data; int send_flags; int wr_id; } ;
struct TYPE_12__ {int handle; } ;
struct TYPE_11__ {int cmd_fd; } ;


 int FUNC_0 (struct ibv_post_send*,int,int ,struct ibv_post_send_resp*,int) ;
 scalar_t__ VAR_0 ;





 int VAR_1 ;
 int FUNC_1 (struct ibv_post_send_resp*,int) ;
 struct ibv_post_send* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct ibv_sge*,int ,int) ;
 int FUNC_4 (int ,struct ibv_post_send*,int) ;

int FUNC_5(struct ibv_qp *VAR_3, struct ibv_send_wr *VAR_4,
        struct ibv_send_wr **VAR_5)
{
 struct ibv_post_send *VAR_6;
 struct ibv_post_send_resp VAR_7;
 struct ibv_send_wr *VAR_8;
 struct ibv_kern_send_wr *VAR_9, *VAR_10;
 struct ibv_sge *VAR_11;
 unsigned VAR_12 = 0;
 unsigned VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 0;

 for (VAR_8 = VAR_4; VAR_8; VAR_8 = VAR_8->next) {
  VAR_12++;
  VAR_13 += VAR_8->num_sge;
 }

 VAR_14 = sizeof *VAR_6 + VAR_12 * sizeof *VAR_9 + VAR_13 * sizeof *VAR_11;
 VAR_6 = FUNC_2(VAR_14);

 FUNC_0(VAR_6, VAR_14, VAR_1, &VAR_7, sizeof VAR_7);
 VAR_6->qp_handle = VAR_3->handle;
 VAR_6->wr_count = VAR_12;
 VAR_6->sge_count = VAR_13;
 VAR_6->wqe_size = sizeof *VAR_9;

 VAR_9 = (struct ibv_kern_send_wr *) ((void *) VAR_6 + sizeof *VAR_6);
 VAR_11 = (struct ibv_sge *) (VAR_9 + VAR_12);

 VAR_10 = VAR_9;
 for (VAR_8 = VAR_4; VAR_8; VAR_8 = VAR_8->next) {
  VAR_10->wr_id = VAR_8->wr_id;
  VAR_10->num_sge = VAR_8->num_sge;
  VAR_10->opcode = VAR_8->opcode;
  VAR_10->send_flags = VAR_8->send_flags;
  VAR_10->imm_data = VAR_8->imm_data;
  if (VAR_3->qp_type == VAR_0) {
   VAR_10->wr.ud.ah = VAR_8->wr.ud.ah->handle;
   VAR_10->wr.ud.remote_qpn = VAR_8->wr.ud.remote_qpn;
   VAR_10->wr.ud.remote_qkey = VAR_8->wr.ud.remote_qkey;
  } else {
   switch (VAR_8->opcode) {
   case 129:
   case 128:
   case 130:
    VAR_10->wr.rdma.remote_addr =
     VAR_8->wr.rdma.remote_addr;
    VAR_10->wr.rdma.rkey = VAR_8->wr.rdma.rkey;
    break;
   case 132:
   case 131:
    VAR_10->wr.atomic.remote_addr =
     VAR_8->wr.atomic.remote_addr;
    VAR_10->wr.atomic.compare_add =
     VAR_8->wr.atomic.compare_add;
    VAR_10->wr.atomic.swap = VAR_8->wr.atomic.swap;
    VAR_10->wr.atomic.rkey = VAR_8->wr.atomic.rkey;
    break;
   default:
    break;
   }
  }

  if (VAR_10->num_sge) {
   FUNC_3(VAR_11, VAR_8->sg_list, VAR_10->num_sge * sizeof *VAR_11);
   VAR_11 += VAR_10->num_sge;
  }

  VAR_10++;
 }

 VAR_7.bad_wr = 0;
 if (FUNC_4(VAR_3->context->cmd_fd, VAR_6, VAR_14) != VAR_14)
  VAR_15 = VAR_2;

 (void) FUNC_1(&VAR_7, sizeof VAR_7);

 VAR_12 = VAR_7.bad_wr;
 if (VAR_12) {
  VAR_8 = VAR_4;
  while (--VAR_12)
   VAR_8 = VAR_8->next;
  *VAR_5 = VAR_8;
 } else if (VAR_15)
  *VAR_5 = VAR_4;

 return VAR_15;
}
