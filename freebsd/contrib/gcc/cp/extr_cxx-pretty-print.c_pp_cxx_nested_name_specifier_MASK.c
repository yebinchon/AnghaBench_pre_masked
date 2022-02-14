
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_6__ {int * enclosing_scope; } ;
typedef TYPE_1__ cxx_pretty_printer ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_6 (cxx_pretty_printer *VAR_0, tree VAR_1)
{
  if (VAR_1 != ((void*)0) && VAR_1 != VAR_0->enclosing_scope)
    {
      tree VAR_2 = FUNC_2 (VAR_1) ? FUNC_1 (VAR_1) : FUNC_0 (VAR_1);
      FUNC_6 (VAR_0, VAR_2);
      FUNC_4 (VAR_0, VAR_2, VAR_1);
      FUNC_5 (VAR_0, VAR_1);
      FUNC_3 (VAR_0);
    }
}
