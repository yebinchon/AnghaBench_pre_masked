
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_wc {int dlid_path_bits; int sl; int slid; int pkey_index; int wc_flags; int src_qp; int qp_num; int imm_data; int byte_len; int vendor_err; int opcode; int status; int wr_id; } ;
struct ibv_poll_cq_resp {int count; TYPE_2__* wc; } ;
struct ibv_poll_cq {int ne; int cq_handle; } ;
struct ibv_kern_wc {int dummy; } ;
struct ibv_cq {TYPE_1__* context; int handle; } ;
struct TYPE_4__ {int dlid_path_bits; int sl; int slid; int pkey_index; int wc_flags; int src_qp; int qp_num; int imm_data; int byte_len; int vendor_err; int opcode; int status; int wr_id; } ;
struct TYPE_3__ {int cmd_fd; } ;


 int FUNC_0 (struct ibv_poll_cq*,int,int ,struct ibv_poll_cq_resp*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ibv_poll_cq_resp*,int) ;
 int FUNC_2 (struct ibv_poll_cq_resp*) ;
 struct ibv_poll_cq_resp* FUNC_3 (int) ;
 int FUNC_4 (int ,struct ibv_poll_cq*,int) ;

int FUNC_5(struct ibv_cq *VAR_1, int VAR_2, struct ibv_wc *VAR_3)
{
 struct ibv_poll_cq VAR_4;
 struct ibv_poll_cq_resp *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = sizeof *VAR_5 + VAR_2 * sizeof(struct ibv_kern_wc);
 VAR_5 = FUNC_3(VAR_7);
 if (!VAR_5)
  return -1;

 FUNC_0(&VAR_4, sizeof VAR_4, VAR_0, VAR_5, VAR_7);
 VAR_4.cq_handle = VAR_1->handle;
 VAR_4.ne = VAR_2;

 if (FUNC_4(VAR_1->context->cmd_fd, &VAR_4, sizeof VAR_4) != sizeof VAR_4) {
  VAR_8 = -1;
  goto out;
 }

 (void) FUNC_1(VAR_5, VAR_7);

 for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++) {
  VAR_3[VAR_6].wr_id = VAR_5->wc[VAR_6].wr_id;
  VAR_3[VAR_6].status = VAR_5->wc[VAR_6].status;
  VAR_3[VAR_6].opcode = VAR_5->wc[VAR_6].opcode;
  VAR_3[VAR_6].vendor_err = VAR_5->wc[VAR_6].vendor_err;
  VAR_3[VAR_6].byte_len = VAR_5->wc[VAR_6].byte_len;
  VAR_3[VAR_6].imm_data = VAR_5->wc[VAR_6].imm_data;
  VAR_3[VAR_6].qp_num = VAR_5->wc[VAR_6].qp_num;
  VAR_3[VAR_6].src_qp = VAR_5->wc[VAR_6].src_qp;
  VAR_3[VAR_6].wc_flags = VAR_5->wc[VAR_6].wc_flags;
  VAR_3[VAR_6].pkey_index = VAR_5->wc[VAR_6].pkey_index;
  VAR_3[VAR_6].slid = VAR_5->wc[VAR_6].slid;
  VAR_3[VAR_6].sl = VAR_5->wc[VAR_6].sl;
  VAR_3[VAR_6].dlid_path_bits = VAR_5->wc[VAR_6].dlid_path_bits;
 }

 VAR_8 = VAR_5->count;

out:
 FUNC_2(VAR_5);
 return VAR_8;
}
