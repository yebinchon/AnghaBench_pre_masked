
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_srq {scalar_t__ events_completed; int mutex; int cond; TYPE_1__* context; int handle; } ;
struct ibv_destroy_srq_resp {scalar_t__ events_reported; } ;
struct ibv_destroy_srq {scalar_t__ reserved; int srq_handle; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_destroy_srq*,int,int ,struct ibv_destroy_srq_resp*,int) ;
 int FUNC_1 (struct ibv_destroy_srq_resp*,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct ibv_destroy_srq*,int) ;

int FUNC_6(struct ibv_srq *VAR_2)
{
 struct ibv_destroy_srq VAR_3;
 struct ibv_destroy_srq_resp VAR_4;

 FUNC_0(&VAR_3, sizeof VAR_3, VAR_0, &VAR_4, sizeof VAR_4);
 VAR_3.srq_handle = VAR_2->handle;
 VAR_3.reserved = 0;

 if (FUNC_5(VAR_2->context->cmd_fd, &VAR_3, sizeof VAR_3) != sizeof VAR_3)
  return VAR_1;

 (void) FUNC_1(&VAR_4, sizeof VAR_4);

 FUNC_3(&VAR_2->mutex);
 while (VAR_2->events_completed != VAR_4.events_reported)
  FUNC_2(&VAR_2->cond, &VAR_2->mutex);
 FUNC_4(&VAR_2->mutex);

 return 0;
}
