
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_4__ {int is_nested; struct TYPE_4__* outer; } ;
typedef TYPE_1__ omp_context ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static tree
FUNC_3 (tree VAR_0, omp_context *VAR_1)
{
  tree VAR_2;
  omp_context *VAR_3;

  FUNC_0 (VAR_1->is_nested);

  for (VAR_3 = VAR_1->outer, VAR_2 = ((void*)0); VAR_3 && VAR_2 == ((void*)0); VAR_3 = VAR_3->outer)
    VAR_2 = FUNC_2 (VAR_0, VAR_3);

  FUNC_0 (VAR_2 || FUNC_1 (VAR_0));

  return VAR_2 ? VAR_2 : VAR_0;
}
