
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_destroy_cq_resp {scalar_t__ comp_events_reported; scalar_t__ async_events_reported; } ;
struct ibv_destroy_cq {scalar_t__ reserved; int cq_handle; } ;
struct ibv_cq {scalar_t__ comp_events_completed; scalar_t__ async_events_completed; int mutex; int cond; TYPE_1__* context; int handle; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_destroy_cq*,int,int ,struct ibv_destroy_cq_resp*,int) ;
 int FUNC_1 (struct ibv_destroy_cq_resp*,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct ibv_destroy_cq*,int) ;

int FUNC_6(struct ibv_cq *VAR_2)
{
 struct ibv_destroy_cq VAR_3;
 struct ibv_destroy_cq_resp VAR_4;

 FUNC_0(&VAR_3, sizeof VAR_3, VAR_0, &VAR_4, sizeof VAR_4);
 VAR_3.cq_handle = VAR_2->handle;
 VAR_3.reserved = 0;

 if (FUNC_5(VAR_2->context->cmd_fd, &VAR_3, sizeof VAR_3) != sizeof VAR_3)
  return VAR_1;

 (void) FUNC_1(&VAR_4, sizeof VAR_4);

 FUNC_3(&VAR_2->mutex);
 while (VAR_2->comp_events_completed != VAR_4.comp_events_reported ||
        VAR_2->async_events_completed != VAR_4.async_events_reported)
  FUNC_2(&VAR_2->cond, &VAR_2->mutex);
 FUNC_4(&VAR_2->mutex);

 return 0;
}
