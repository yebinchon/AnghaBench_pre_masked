
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ l_ui; } ;
typedef TYPE_1__ l_fp ;



__attribute__((used)) static long
FUNC_0(
 l_fp *VAR_0,
 l_fp *VAR_1,
 l_fp *VAR_2
 )
{
 l_fp *VAR_3;

 if (VAR_1->l_ui != 0)
  VAR_3 = VAR_1;
 else if (VAR_2->l_ui != 0)
  VAR_3 = VAR_2;
 else
  return 0;

 if (VAR_0->l_ui < VAR_3->l_ui)
  return -1;
 return (VAR_0->l_ui - VAR_3->l_ui);
}
