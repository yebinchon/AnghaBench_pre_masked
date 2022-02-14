
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int argc; TYPE_1__* cmd; int argv; } ;
struct TYPE_4__ {int usage; } ;
typedef int SCR ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;

int
FUNC_2(SCR *VAR_1, EXCMD *VAR_2)
{
 switch(VAR_2->argc) {
 case 0:
  FUNC_0(VAR_1, VAR_0);
  break;
 default:
  if (FUNC_1(VAR_1, VAR_2->argv, VAR_2->cmd->usage))
   return (1);
  break;
 }
 return (0);
}
