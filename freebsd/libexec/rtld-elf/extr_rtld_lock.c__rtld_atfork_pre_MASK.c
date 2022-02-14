
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lockstate; } ;
typedef TYPE_1__ RtldLockState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;

void
FUNC_1(int *VAR_2)
{
 RtldLockState VAR_3[2];

 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_1, &VAR_3[0]);
 FUNC_0(VAR_0, &VAR_3[1]);


 VAR_2[0] = VAR_3[1].lockstate;
 VAR_2[2] = VAR_3[0].lockstate;
}
