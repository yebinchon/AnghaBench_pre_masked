
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int cxx_scope ;
struct TYPE_5__ {int * scope; struct TYPE_5__* previous; } ;
typedef TYPE_1__ cxx_binding ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline cxx_binding *
FUNC_2 (cxx_scope *VAR_1, cxx_binding *VAR_2)
{
  FUNC_1 (VAR_0);

  for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->previous)
    if (VAR_2->scope == VAR_1)
      FUNC_0 (VAR_0, VAR_2);

  FUNC_0 (VAR_0, (cxx_binding *)0);
}
