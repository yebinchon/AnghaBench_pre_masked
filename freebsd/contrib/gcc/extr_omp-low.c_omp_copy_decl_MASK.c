
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_6__ {scalar_t__ src_fn; } ;
struct TYPE_5__ {TYPE_4__ cb; struct TYPE_5__* outer; } ;
typedef TYPE_1__ omp_context ;
typedef int copy_body_data ;
typedef scalar_t__ DECL_CONTEXT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_4__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_3, copy_body_data *VAR_4)
{
  omp_context *VAR_5 = (omp_context *) VAR_4;
  tree VAR_6;

  if (FUNC_0 (VAR_3) == VAR_0)
    {
      VAR_6 = FUNC_1 ();
      DECL_CONTEXT (VAR_7) = VAR_1;
      FUNC_3 (&VAR_5->cb, VAR_3, VAR_7);
      return VAR_7;
    }

  while (!FUNC_5 (VAR_5))
    {
      VAR_5 = VAR_5->outer;
      if (VAR_5 == ((void*)0))
 return VAR_3;
      VAR_6 = FUNC_6 (VAR_3, VAR_5);
      if (VAR_6)
 return VAR_6;
    }

  if (FUNC_4 (VAR_3) || FUNC_2 (VAR_3) != VAR_5->cb.src_fn)
    return VAR_3;

  return VAR_2;
}
