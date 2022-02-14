
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_3__ {int * value; } ;
typedef TYPE_1__ cxx_binding ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 int * VAR_1 ;

tree
FUNC_3 (tree VAR_2, tree VAR_3)
{
  cxx_binding *VAR_4;

  if (VAR_3 == ((void*)0))
    VAR_3 = VAR_1;
  else

    VAR_3 = FUNC_1 (VAR_3);

  VAR_4 = FUNC_2 (FUNC_0 (VAR_3), VAR_2);

  return VAR_4 ? VAR_4->value : VAR_0;
}
