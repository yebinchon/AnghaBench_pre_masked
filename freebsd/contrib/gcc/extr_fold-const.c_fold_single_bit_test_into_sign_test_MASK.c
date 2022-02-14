
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_3__ {scalar_t__ (* signed_type ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static tree
FUNC_13 (enum tree_code VAR_7, tree VAR_8, tree VAR_9,
         tree VAR_10)
{

  if ((VAR_7 == VAR_4 || VAR_7 == VAR_1)
      && FUNC_1 (VAR_8) == VAR_0 && FUNC_10 (VAR_9)
      && FUNC_9 (FUNC_2 (VAR_8, 1)))
    {


      tree VAR_11 = FUNC_11 (FUNC_2 (VAR_8, 0), FUNC_2 (VAR_8, 1));

      if (VAR_11 != VAR_5


   && FUNC_5 (FUNC_3 (VAR_11))
      == FUNC_0 (FUNC_4 (FUNC_3 (VAR_11))))
 {
   tree VAR_12 = VAR_6.types.signed_type (FUNC_3 (VAR_11));
   return FUNC_7 (VAR_7 == VAR_1 ? VAR_2 : VAR_3,
         VAR_10, FUNC_8 (VAR_12, VAR_11),
         FUNC_6 (VAR_12, 0));
 }
    }

  return VAR_5;
}
