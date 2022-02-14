
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minimal_symbol {int dummy; } ;
struct TYPE_2__ {char* name; scalar_t__ begin; scalar_t__ end; } ;


 void* FUNC_0 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_1 (char*,int *,int *) ;
 TYPE_1__* VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  unsigned int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {

    struct minimal_symbol *VAR_3;


    VAR_3 = FUNC_1 (VAR_0[VAR_2].name, ((void*)0), ((void*)0));
    if ((VAR_3 == ((void*)0)) && (VAR_0[VAR_2].name[0] == '_')) {
      VAR_3 = FUNC_1 (VAR_0[VAR_2].name + 1, ((void*)0), ((void*)0));
    }
    if (VAR_3 == ((void*)0)) {
      VAR_0[VAR_2].begin = 0;
      VAR_0[VAR_2].end = 0;
      continue;
    }

    VAR_0[VAR_2].begin = FUNC_0 (VAR_3);
    do {
      VAR_0[VAR_2].end = FUNC_0 (++VAR_3);
    } while (VAR_0[VAR_2].begin == VAR_0[VAR_2].end);
  }
}
