
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_4__ {struct TYPE_4__* outer; scalar_t__ is_nested; } ;
typedef TYPE_1__ omp_context ;


 int * FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static tree
FUNC_1 (tree VAR_0, omp_context *VAR_1)
{
  tree VAR_2 = ((void*)0);
  omp_context *VAR_3;

  if (VAR_1->is_nested)
    for (VAR_3 = VAR_1->outer, VAR_2 = ((void*)0); VAR_3 && VAR_2 == ((void*)0); VAR_3 = VAR_3->outer)
      VAR_2 = FUNC_0 (VAR_0, VAR_3);

  return VAR_2 ? VAR_2 : VAR_0;
}
