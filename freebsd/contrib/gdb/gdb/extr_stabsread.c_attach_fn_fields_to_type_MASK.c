
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct field_info {TYPE_1__* fnlist; } ;
struct TYPE_2__ {int fn_fieldlist; struct TYPE_2__* next; } ;


 int * FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;

__attribute__((used)) static int
FUNC_2 (struct field_info *VAR_0, struct type *VAR_1)
{
  int VAR_2;

  for (VAR_2 = FUNC_1 (VAR_1);
       VAR_0->fnlist != ((void*)0);
       VAR_0->fnlist = VAR_0->fnlist->next)
    {
      --VAR_2;
      FUNC_0 (VAR_1)[VAR_2] = VAR_0->fnlist->fn_fieldlist;
    }
  return 1;
}
