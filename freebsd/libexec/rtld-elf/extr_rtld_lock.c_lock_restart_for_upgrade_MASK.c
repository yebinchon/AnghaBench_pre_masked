
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lockstate; int env; } ;
typedef TYPE_1__ RtldLockState ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void
FUNC_2(RtldLockState *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;

 switch (VAR_0->lockstate) {
 case 129:
 case 128:
  break;
 case 130:
  FUNC_1(VAR_0->env, 1);
  break;
 default:
  FUNC_0(0);
 }
}
