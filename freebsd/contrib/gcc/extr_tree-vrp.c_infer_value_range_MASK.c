
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {int succs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,unsigned int*,unsigned int*,int*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9 (tree VAR_4, tree VAR_5, enum tree_code *VAR_6, tree *VAR_7)
{
  *VAR_7 = VAR_2;
  *VAR_6 = VAR_0;



  if (FUNC_2 (VAR_5))
    return 0;



  if (FUNC_8 (VAR_4))
    return 0;





  if (FUNC_7 (VAR_4) && FUNC_0 (FUNC_4 (VAR_4)->succs) == 0)
    return 0;



  if (VAR_3 && FUNC_1 (FUNC_3 (VAR_5)))
    {
      bool VAR_8;
      unsigned VAR_9, VAR_10;

      FUNC_6 (VAR_5, VAR_4, &VAR_9, &VAR_10, &VAR_8);
      if (VAR_10 > 0)
 {
   *VAR_7 = FUNC_5 (FUNC_3 (VAR_5), 0);
   *VAR_6 = VAR_1;
   return 1;
 }
    }

  return 0;
}
