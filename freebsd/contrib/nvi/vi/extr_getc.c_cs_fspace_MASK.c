
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cs_flags; int cs_ch; } ;
typedef TYPE_1__ VCS ;
typedef int SCR ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;

int
FUNC_2(SCR *VAR_0, VCS *VAR_1)
{
 if (VAR_1->cs_flags != 0 || !FUNC_0(VAR_1->cs_ch))
  return (0);
 for (;;) {
  if (FUNC_1(VAR_0, VAR_1))
   return (1);
  if (VAR_1->cs_flags != 0 || !FUNC_0(VAR_1->cs_ch))
   break;
 }
 return (0);
}
