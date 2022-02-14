
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {scalar_t__ (* signed_type ) (scalar_t__) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_8 (tree VAR_5, int VAR_6, int VAR_7, tree VAR_8)
{
  tree VAR_9 = FUNC_1 (VAR_5);
  int VAR_10 = FUNC_0 (FUNC_2 (VAR_9));
  tree VAR_11;

  if (VAR_6 == VAR_10 || VAR_7)
    return VAR_5;




  VAR_11 = FUNC_4 (VAR_3, VAR_5, FUNC_6 (VAR_6 - 1), 0);
  VAR_11 = FUNC_4 (VAR_0, VAR_11, FUNC_6 (1), 0);







  if (FUNC_3 (VAR_9))
    VAR_11 = FUNC_5 (VAR_4.types.signed_type (VAR_9), VAR_11);

  VAR_11 = FUNC_4 (VAR_2, VAR_11, FUNC_6 (VAR_10 - 1), 0);
  VAR_11 = FUNC_4 (VAR_3, VAR_11, FUNC_6 (VAR_10 - VAR_6 - 1), 0);
  if (VAR_8 != 0)
    VAR_11 = FUNC_4 (VAR_0, VAR_11,
   FUNC_5 (FUNC_1 (VAR_5), VAR_8), 0);

  if (FUNC_3 (VAR_9))
    VAR_11 = FUNC_5 (VAR_9, VAR_11);

  return FUNC_5 (VAR_9, FUNC_4 (VAR_1, VAR_5, VAR_11, 0));
}
