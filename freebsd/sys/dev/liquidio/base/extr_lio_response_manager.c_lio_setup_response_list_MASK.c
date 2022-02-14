
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lio_tq {int work; int * tq; struct octeon_device* ctxptr; } ;
struct octeon_device {int octeon_id; int cmd_resp_state; struct lio_tq dma_comp_tq; int cmd_resp_wqlock; TYPE_1__* response_list; } ;
struct TYPE_2__ {int pending_req_count; int lock; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ,void*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct octeon_device*,char*) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int * FUNC_6 (char*,int ,int ,int **) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int **,int,int ,char*,int ) ;
 int VAR_7 ;

int
FUNC_9(struct octeon_device *VAR_8)
{
 struct lio_tq *VAR_9;
 int VAR_10, VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  FUNC_0(&VAR_8->response_list[VAR_10].head);
  FUNC_5(&VAR_8->response_list[VAR_10].lock, "response_list_lock",
    ((void*)0), VAR_3);
  FUNC_2(&VAR_8->response_list[VAR_10].pending_req_count,
         0);
 }
 FUNC_5(&VAR_8->cmd_resp_wqlock, "cmd_resp_wqlock", ((void*)0), VAR_3);

 VAR_9 = &VAR_8->dma_comp_tq;
 VAR_9->tq = FUNC_6("lio_dma_comp", VAR_4,
       VAR_7, &VAR_9->tq);
 if (VAR_9->tq == ((void*)0)) {
  FUNC_3(VAR_8, "failed to create wq thread\n");
  return (-VAR_0);
 }

 FUNC_1(VAR_9->tq, &VAR_9->work, 0, VAR_6,
     (void *)VAR_9);
 VAR_9->ctxptr = VAR_8;

 VAR_8->cmd_resp_state = VAR_1;
 FUNC_8(&VAR_9->tq, 1, VAR_5, "lio%d_dma_comp",
    VAR_8->octeon_id);
 FUNC_7(VAR_9->tq, &VAR_9->work, FUNC_4(50));

 return (VAR_11);
}
