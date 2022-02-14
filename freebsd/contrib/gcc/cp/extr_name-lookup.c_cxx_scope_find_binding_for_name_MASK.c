
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
typedef int cxx_scope ;
struct TYPE_6__ {int * previous; int * scope; } ;
typedef TYPE_1__ cxx_binding ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static inline cxx_binding *
FUNC_2 (cxx_scope *VAR_0, tree VAR_1)
{
  cxx_binding *VAR_2 = FUNC_0 (VAR_1);
  if (VAR_2)
    {

      if (VAR_0 == VAR_2->scope && VAR_2->previous == ((void*)0))
 return VAR_2;
      return FUNC_1 (VAR_0, VAR_2);
    }
  return ((void*)0);
}
