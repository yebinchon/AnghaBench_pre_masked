
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_req_notify_cq {int solicited; int cq_handle; } ;
struct ibv_cq {TYPE_1__* context; int handle; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int FUNC_0 (struct ibv_req_notify_cq*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ibv_req_notify_cq*,int) ;

int FUNC_2(struct ibv_cq *VAR_2, int VAR_3)
{
 struct ibv_req_notify_cq VAR_4;

 FUNC_0(&VAR_4, sizeof VAR_4, VAR_0);
 VAR_4.cq_handle = VAR_2->handle;
 VAR_4.solicited = !!VAR_3;

 if (FUNC_1(VAR_2->context->cmd_fd, &VAR_4, sizeof VAR_4) != sizeof VAR_4)
  return VAR_1;

 return 0;
}
