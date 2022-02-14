
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_srq {TYPE_1__* context; int handle; } ;
struct ibv_sge {int dummy; } ;
struct ibv_recv_wr {int num_sge; struct ibv_recv_wr* next; int sg_list; int wr_id; } ;
struct ibv_post_srq_recv_resp {unsigned int bad_wr; } ;
struct ibv_post_srq_recv {unsigned int wr_count; unsigned int sge_count; int wqe_size; int srq_handle; } ;
struct ibv_kern_recv_wr {int num_sge; int wr_id; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int FUNC_0 (struct ibv_post_srq_recv*,int,int ,struct ibv_post_srq_recv_resp*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ibv_post_srq_recv_resp*,int) ;
 struct ibv_post_srq_recv* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct ibv_sge*,int ,int) ;
 int FUNC_4 (int ,struct ibv_post_srq_recv*,int) ;

int FUNC_5(struct ibv_srq *VAR_2, struct ibv_recv_wr *VAR_3,
        struct ibv_recv_wr **VAR_4)
{
 struct ibv_post_srq_recv *VAR_5;
 struct ibv_post_srq_recv_resp VAR_6;
 struct ibv_recv_wr *VAR_7;
 struct ibv_kern_recv_wr *VAR_8, *VAR_9;
 struct ibv_sge *VAR_10;
 unsigned VAR_11 = 0;
 unsigned VAR_12 = 0;
 int VAR_13;
 int VAR_14 = 0;

 for (VAR_7 = VAR_3; VAR_7; VAR_7 = VAR_7->next) {
  VAR_11++;
  VAR_12 += VAR_7->num_sge;
 }

 VAR_13 = sizeof *VAR_5 + VAR_11 * sizeof *VAR_8 + VAR_12 * sizeof *VAR_10;
 VAR_5 = FUNC_2(VAR_13);

 FUNC_0(VAR_5, VAR_13, VAR_0, &VAR_6, sizeof VAR_6);
 VAR_5->srq_handle = VAR_2->handle;
 VAR_5->wr_count = VAR_11;
 VAR_5->sge_count = VAR_12;
 VAR_5->wqe_size = sizeof *VAR_8;

 VAR_8 = (struct ibv_kern_recv_wr *) ((void *) VAR_5 + sizeof *VAR_5);
 VAR_10 = (struct ibv_sge *) (VAR_8 + VAR_11);

 VAR_9 = VAR_8;
 for (VAR_7 = VAR_3; VAR_7; VAR_7 = VAR_7->next) {
  VAR_9->wr_id = VAR_7->wr_id;
  VAR_9->num_sge = VAR_7->num_sge;

  if (VAR_9->num_sge) {
   FUNC_3(VAR_10, VAR_7->sg_list, VAR_9->num_sge * sizeof *VAR_10);
   VAR_10 += VAR_9->num_sge;
  }

  VAR_9++;
 }

 VAR_6.bad_wr = 0;
 if (FUNC_4(VAR_2->context->cmd_fd, VAR_5, VAR_13) != VAR_13)
  VAR_14 = VAR_1;

 (void) FUNC_1(&VAR_6, sizeof VAR_6);

 VAR_11 = VAR_6.bad_wr;
 if (VAR_11) {
  VAR_7 = VAR_3;
  while (--VAR_11)
   VAR_7 = VAR_7->next;
  *VAR_4 = VAR_7;
 } else if (VAR_14)
  *VAR_4 = VAR_3;

 return VAR_14;
}
