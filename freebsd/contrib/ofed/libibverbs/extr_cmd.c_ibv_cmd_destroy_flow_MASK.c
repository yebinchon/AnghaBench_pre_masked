
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_flow {TYPE_1__* context; int handle; } ;
struct ibv_destroy_flow {int flow_handle; } ;
typedef int cmd ;
struct TYPE_2__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_destroy_flow*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ibv_flow*) ;
 int FUNC_2 (struct ibv_destroy_flow*,int ,int) ;
 int FUNC_3 (int ,struct ibv_destroy_flow*,int) ;

int FUNC_4(struct ibv_flow *VAR_2)
{
 struct ibv_destroy_flow VAR_3;
 int VAR_4 = 0;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 FUNC_0(&VAR_3, sizeof(VAR_3), VAR_0);
 VAR_3.flow_handle = VAR_2->handle;

 if (FUNC_3(VAR_2->context->cmd_fd, &VAR_3, sizeof(VAR_3)) != sizeof(VAR_3))
  VAR_4 = VAR_1;
 FUNC_1(VAR_2);
 return VAR_4;
}
