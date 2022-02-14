
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* context; } ;
struct verbs_xrcd {TYPE_2__ xrcd; int handle; } ;
struct ibv_close_xrcd {int xrcd_handle; } ;
struct TYPE_3__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_close_xrcd*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ibv_close_xrcd*,int) ;

int FUNC_2(struct verbs_xrcd *VAR_2)
{
 struct ibv_close_xrcd VAR_3;

 FUNC_0(&VAR_3, sizeof VAR_3, VAR_0);
 VAR_3.xrcd_handle = VAR_2->handle;

 if (FUNC_1(VAR_2->xrcd.context->cmd_fd, &VAR_3, sizeof VAR_3) != sizeof VAR_3)
  return VAR_1;

 return 0;
}
