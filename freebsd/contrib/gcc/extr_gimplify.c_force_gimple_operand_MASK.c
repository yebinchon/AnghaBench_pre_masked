
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef scalar_t__ (* gimple_predicate ) (scalar_t__) ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;
struct TYPE_2__ {scalar_t__ temps; int into_ssa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int *,scalar_t__ (*) (scalar_t__),int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 scalar_t__ VAR_6 ;

tree
FUNC_10 (tree VAR_7, tree *VAR_8, bool VAR_9, tree VAR_10)
{
  tree VAR_11;
  enum gimplify_status VAR_12;
  gimple_predicate VAR_13;

  *VAR_8 = VAR_2;

  if (FUNC_7 (VAR_7))
    return VAR_7;

  VAR_13 = VAR_9 ? FUNC_7 : FUNC_6;

  FUNC_9 ();
  VAR_4->into_ssa = VAR_5;

  if (VAR_10)
    VAR_7 = FUNC_3 (VAR_1, FUNC_1 (VAR_10), VAR_10, VAR_7);

  VAR_12 = FUNC_5 (&VAR_7, VAR_8, ((void*)0),
         VAR_13, VAR_3);
  FUNC_4 (VAR_12 != VAR_0);

  if (VAR_6)
    {
      for (VAR_11 = VAR_4->temps; VAR_11 ; VAR_11 = FUNC_0 (VAR_11))
 FUNC_2 (VAR_11);
    }

  FUNC_8 (((void*)0));

  return VAR_7;
}
