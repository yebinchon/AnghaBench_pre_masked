
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* funct_state ;
struct TYPE_4__ {scalar_t__ pure_const_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (funct_state VAR_8, tree VAR_9, bool VAR_10)
{
  if ((FUNC_2 (VAR_9) == VAR_1) || (FUNC_2 (VAR_9) == VAR_2))
    return;



  if (FUNC_4 (VAR_9))
    {
      VAR_8->pure_const_state = VAR_5;
      return;
    }

  while (FUNC_2 (VAR_9) == VAR_7
  || FUNC_2 (VAR_9) == VAR_3
  || FUNC_6 (VAR_9))
    {
      if (FUNC_2 (VAR_9) == VAR_0)
 FUNC_5 (VAR_8, FUNC_3 (VAR_9, 1), 0);
      VAR_9 = FUNC_3 (VAR_9, 0);
    }



  if (FUNC_0 (VAR_9))
    {
      FUNC_7 (VAR_8, FUNC_3 (VAR_9, 0), 0);





      if (VAR_10)
 {
   VAR_8->pure_const_state = VAR_5;
   return;
 }
      else if (VAR_8->pure_const_state == VAR_4)
 VAR_8->pure_const_state = VAR_6;
    }

  if (FUNC_1 (VAR_9))
    FUNC_5 (VAR_8, VAR_9, VAR_10);
}
