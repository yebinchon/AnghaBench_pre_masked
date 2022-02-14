
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_wq {scalar_t__ events_completed; int mutex; int cond; TYPE_1__* context; int handle; } ;
struct ibv_destroy_wq_resp {int response_length; scalar_t__ events_reported; int wq_handle; } ;
struct ibv_destroy_wq {int response_length; scalar_t__ events_reported; int wq_handle; } ;
typedef int resp ;
typedef int cmd ;
struct TYPE_2__ {int cmd_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_destroy_wq_resp*,int,int ,struct ibv_destroy_wq_resp*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct ibv_destroy_wq_resp*,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct ibv_destroy_wq_resp*,int) ;

int FUNC_6(struct ibv_wq *VAR_3)
{
 struct ibv_destroy_wq VAR_4;
 struct ibv_destroy_wq_resp VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 FUNC_0(&VAR_4, sizeof(VAR_4), VAR_0, &VAR_5, sizeof(VAR_5));
 VAR_4.wq_handle = VAR_3->handle;

 if (FUNC_5(VAR_3->context->cmd_fd, &VAR_4, sizeof(VAR_4)) != sizeof(VAR_4))
  return VAR_2;

 if (VAR_5.response_length < sizeof(VAR_5))
  return VAR_1;

 FUNC_3(&VAR_3->mutex);
 while (VAR_3->events_completed != VAR_5.events_reported)
  FUNC_2(&VAR_3->cond, &VAR_3->mutex);
 FUNC_4(&VAR_3->mutex);

 return VAR_6;
}
