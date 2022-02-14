
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {char* filename; int f; TYPE_1__* stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {char* type; char* flavor; char* parents; scalar_t__ num_parents; } ;


 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (void *VAR_0)
{
  struct pr_handle *VAR_1 = (struct pr_handle *) VAR_0;

  FUNC_0 (VAR_1->f, "%s\t%s\t0;\"\tkind:c\ttype:%s", VAR_1->stack->type,
    VAR_1->filename, VAR_1->stack->flavor);
  if (VAR_1->stack->num_parents)
    {
      FUNC_0 (VAR_1->f, "\tinherits:%s", VAR_1->stack->parents);
      FUNC_2 (VAR_1->stack->parents);
    }
  FUNC_1 ('\n', VAR_1->f);

  return FUNC_3 (VAR_0);
}
