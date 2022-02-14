
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct objfile {char* name; } ;
struct dwarf2_cu {struct type** ftypes; TYPE_1__* language_defn; } ;
struct TYPE_2__ {struct type* (* la_fund_type ) (struct objfile*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*) ;
 struct type* FUNC_1 (struct objfile*,int) ;

__attribute__((used)) static struct type *
FUNC_2 (struct objfile *VAR_1, int VAR_2,
    struct dwarf2_cu *VAR_3)
{
  if (VAR_2 < 0 || VAR_2 >= VAR_0)
    {
      FUNC_0 ("Dwarf Error: internal error - invalid fundamental type id %d [in module %s]",
      VAR_2, VAR_1->name);
    }





  if (VAR_3->ftypes[VAR_2] == ((void*)0))
    {
      VAR_3->ftypes[VAR_2] = VAR_3->language_defn->la_fund_type (VAR_1, VAR_2);
    }

  return (VAR_3->ftypes[VAR_2]);
}
