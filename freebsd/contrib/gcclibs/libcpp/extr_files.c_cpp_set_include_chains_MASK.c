
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int quote_ignores_source_dir; TYPE_2__* bracket_include; TYPE_2__* quote_include; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_7__ {int name; int len; int * name_map; struct TYPE_7__* next; } ;
typedef TYPE_2__ cpp_dir ;


 int FUNC_0 (int ) ;

void
FUNC_1 (cpp_reader *VAR_0, cpp_dir *VAR_1, cpp_dir *VAR_2,
   int VAR_3)
{
  VAR_0->quote_include = VAR_1;
  VAR_0->bracket_include = VAR_1;
  VAR_0->quote_ignores_source_dir = VAR_3;

  for (; VAR_1; VAR_1 = VAR_1->next)
    {
      VAR_1->name_map = ((void*)0);
      VAR_1->len = FUNC_0 (VAR_1->name);
      if (VAR_1 == VAR_2)
 VAR_0->bracket_include = VAR_2;
    }
}
