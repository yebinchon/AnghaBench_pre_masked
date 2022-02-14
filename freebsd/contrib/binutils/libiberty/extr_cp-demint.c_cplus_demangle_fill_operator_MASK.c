
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* op; } ;
struct TYPE_5__ {TYPE_1__ s_operator; } ;
struct demangle_component {TYPE_2__ u; int type; } ;
struct TYPE_6__ {int len; int args; int * name; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 int FUNC_1 (char const*) ;

int
FUNC_2 (struct demangle_component *VAR_2,
                              const char *VAR_3, int VAR_4)
{
  int VAR_5;
  unsigned int VAR_6;

  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
    return 0;
  VAR_5 = FUNC_1 (VAR_3);
  for (VAR_6 = 0; VAR_1[VAR_6].name != ((void*)0); ++VAR_6)
    {
      if (VAR_5 == VAR_1[VAR_6].len
   && VAR_4 == VAR_1[VAR_6].args
   && FUNC_0 (VAR_3, VAR_1[VAR_6].name) == 0)
 {
   VAR_2->type = VAR_0;
   VAR_2->u.s_operator.op = &VAR_1[VAR_6];
   return 1;
 }
    }
  return 0;
}
