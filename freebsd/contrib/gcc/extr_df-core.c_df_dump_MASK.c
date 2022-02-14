
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bitmap_size; } ;
struct TYPE_5__ {int bitmap_size; } ;
struct df {int num_problems_defined; TYPE_4__** problems_in_order; TYPE_2__ use_info; TYPE_1__ def_info; } ;
struct TYPE_8__ {TYPE_3__* problem; } ;
struct TYPE_7__ {int (* dump_fun ) (TYPE_4__*,int *) ;} ;
typedef int FILE ;


 char* FUNC_0 () ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (TYPE_4__*,int *) ;

void
FUNC_3 (struct df *VAR_0, FILE *VAR_1)
{
  int VAR_2;

  if (!VAR_0 || !VAR_1)
    return;

  FUNC_1 (VAR_1, "\n\n%s\n", FUNC_0 ());
  FUNC_1 (VAR_1, "\nDataflow summary:\n");
  FUNC_1 (VAR_1, "def_info->bitmap_size = %d, use_info->bitmap_size = %d\n",
    VAR_0->def_info.bitmap_size, VAR_0->use_info.bitmap_size);

  for (VAR_2 = 0; VAR_2 < VAR_0->num_problems_defined; VAR_2++)
    VAR_0->problems_in_order[VAR_2]->problem->dump_fun (VAR_0->problems_in_order[VAR_2], VAR_1);

  FUNC_1 (VAR_1, "\n");
}
