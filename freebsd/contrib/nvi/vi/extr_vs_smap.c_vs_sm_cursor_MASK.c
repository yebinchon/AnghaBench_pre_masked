
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ lno; scalar_t__ cno; } ;
struct TYPE_10__ {scalar_t__ lno; scalar_t__ c_eboff; } ;
typedef TYPE_1__ SMAP ;
typedef TYPE_2__ SCR ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int *,int *) ;

int
FUNC_2(SCR *VAR_2, SMAP **VAR_3)
{
 SMAP *VAR_4;


 if (VAR_2->lno < VAR_0->lno || VAR_2->lno > VAR_1->lno)
  return (1);


 for (VAR_4 = VAR_0; VAR_4->lno != VAR_2->lno; ++VAR_4);


 for (; VAR_4 <= VAR_1; ++VAR_4) {

  if (VAR_4 != VAR_1 && (VAR_4 + 1)->lno != VAR_4->lno) {
   *VAR_3 = VAR_4;
   return (0);
  }
  if (!FUNC_0(VAR_4) && FUNC_1(VAR_2, VAR_4, ((void*)0), ((void*)0)))
   return (1);
  if (VAR_4->c_eboff >= VAR_2->cno) {
   *VAR_3 = VAR_4;
   return (0);
  }
 }


 return (1);
}
