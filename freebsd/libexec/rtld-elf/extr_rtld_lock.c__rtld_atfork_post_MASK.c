
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ls ;
struct TYPE_4__ {int lockstate; } ;
typedef TYPE_1__ RtldLockState ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(int *VAR_2)
{
 RtldLockState VAR_3[2];

 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_3, sizeof(VAR_3));
 VAR_3[0].lockstate = VAR_2[2];
 VAR_3[1].lockstate = VAR_2[0];
 FUNC_1(VAR_0, &VAR_3[1]);
 FUNC_1(VAR_1, &VAR_3[0]);
}
