
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cs_flags; int cs_ch; } ;
typedef TYPE_1__ VCS ;
typedef int SCR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;

int
FUNC_2(SCR *VAR_2, VCS *VAR_3)
{
 for (;;) {
  if (FUNC_1(VAR_2, VAR_3))
   return (1);
  if (VAR_3->cs_flags == VAR_1 || VAR_3->cs_flags == VAR_0 ||
      (VAR_3->cs_flags == 0 && FUNC_0(VAR_3->cs_ch)))
   continue;
  break;
 }
 return (0);
}
