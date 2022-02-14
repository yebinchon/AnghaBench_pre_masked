
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct macros {int level; int ** macro; } ;
struct TYPE_7__ {TYPE_1__* el_read; } ;
struct TYPE_6__ {struct macros macros; } ;
typedef TYPE_2__ EditLine ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int const*) ;

void
FUNC_3(EditLine *VAR_1, const wchar_t *VAR_2)
{
 struct macros *VAR_3 = &VAR_1->el_read->macros;

 if (VAR_2 != ((void*)0) && VAR_3->level + 1 < VAR_0) {
  VAR_3->level++;
  if ((VAR_3->macro[VAR_3->level] = FUNC_2(VAR_2)) != ((void*)0))
   return;
  VAR_3->level--;
 }
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
