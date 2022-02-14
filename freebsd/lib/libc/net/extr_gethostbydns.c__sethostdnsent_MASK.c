
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* res_state ;
struct TYPE_4__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(int VAR_3)
{
 res_state VAR_4;

 VAR_4 = FUNC_0();
 if ((VAR_4->options & VAR_0) == 0 && FUNC_1(VAR_4) == -1)
  return;
 if (VAR_3)
  VAR_4->options |= VAR_1 | VAR_2;
}
