
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {scalar_t__ escape_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7 (tree VAR_1, tree VAR_2, bool VAR_3)
{

  tree VAR_4 = FUNC_1 (VAR_1, 1);
  tree VAR_5 = FUNC_1 (VAR_2, VAR_3);




  if (FUNC_6 (FUNC_2 (VAR_2))->escape_mask != VAR_0)
      return 0;



  if (FUNC_4 (VAR_4) || FUNC_4 (VAR_5))
    return 0;




  if (FUNC_5 (VAR_2))
     return 0;



  if (FUNC_0 (VAR_1) && FUNC_0 (VAR_2))
    return 0;


  return FUNC_3 (VAR_4, VAR_5);
}
