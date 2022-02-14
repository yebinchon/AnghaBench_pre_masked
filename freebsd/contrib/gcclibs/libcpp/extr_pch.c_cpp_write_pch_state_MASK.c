
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int counter; scalar_t__ deps; } ;
typedef TYPE_1__ cpp_reader ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int *,int,int,int *) ;

int
FUNC_5 (cpp_reader *VAR_1, FILE *VAR_2)
{
  if (!VAR_1->deps)
    VAR_1->deps = FUNC_2 ();

  if (FUNC_3 (VAR_1->deps, VAR_2) != 0)
    {
      FUNC_1 (VAR_1, VAR_0, "while writing precompiled header");
      return -1;
    }

  if (! FUNC_0 (VAR_1, VAR_2))
    {
      FUNC_1 (VAR_1, VAR_0, "while writing precompiled header");
      return -1;
    }




  if (FUNC_4 (&VAR_1->counter, sizeof (VAR_1->counter), 1, VAR_2) != 1)
    {
      FUNC_1 (VAR_1, VAR_0, "while writing precompiled header");
      return -1;
    }

  return 0;
}
