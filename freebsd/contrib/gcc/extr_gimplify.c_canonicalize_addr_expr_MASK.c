
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int (* types_compatible_p ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11 (tree *VAR_6)
{
  tree VAR_7 = *VAR_6;
  tree VAR_8 = FUNC_3 (VAR_7);
  tree VAR_9 = FUNC_2 (VAR_7, 0);
  tree VAR_10 = FUNC_3 (VAR_9);
  tree VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;


  if (!FUNC_0 (VAR_8) || !FUNC_0 (VAR_10))
    return;


  VAR_12 = FUNC_3 (VAR_10);
  if (FUNC_1 (VAR_12) != VAR_2)
    return;


  VAR_11 = FUNC_3 (VAR_8);
  VAR_13 = FUNC_3 (VAR_12);
  if (!VAR_5.types_compatible_p (VAR_13, VAR_11))
    return;


  VAR_15 = FUNC_2 (VAR_9, 0);
  VAR_14 = FUNC_3 (VAR_15);
  if (!VAR_5.types_compatible_p (VAR_14, VAR_12))
    return;


  if (!FUNC_6 (VAR_11)
      || FUNC_1 (FUNC_6 (VAR_11)) != VAR_3
      || !FUNC_4 (VAR_12) || !FUNC_5 (FUNC_4 (VAR_12))
      || FUNC_1 (FUNC_5 (FUNC_4 (VAR_12))) != VAR_3)
    return;


  *VAR_6 = FUNC_8 (VAR_1, VAR_11, VAR_15,
      FUNC_5 (FUNC_4 (VAR_12)),
      VAR_4, VAR_4);
  *VAR_6 = FUNC_7 (VAR_0, VAR_8, *VAR_6);
}
