
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_mr {TYPE_1__* context; int handle; } ;
struct ibv_dereg_mr {int mr_handle; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_dereg_mr*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ibv_dereg_mr*,int) ;

int FUNC_2(struct ibv_mr *VAR_2)
{
 struct ibv_dereg_mr VAR_3;

 FUNC_0(&VAR_3, sizeof VAR_3, VAR_0);
 VAR_3.mr_handle = VAR_2->handle;

 if (FUNC_1(VAR_2->context->cmd_fd, &VAR_3, sizeof VAR_3) != sizeof VAR_3)
  return VAR_1;

 return 0;
}
