
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_4__ {TYPE_1__* head; } ;
struct TYPE_3__ {int expr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int *) ;

__attribute__((used)) static bool
FUNC_9 (tree *VAR_3)
{
  tree VAR_4 = *VAR_3;
  tree VAR_5;

  if (!((FUNC_1 (VAR_4) == VAR_1
  || FUNC_1 (VAR_4) == VAR_0)
 && FUNC_1 (FUNC_2 (VAR_4, 0)) == VAR_2
 && !FUNC_5 (FUNC_2 (VAR_4, 0))))
    return 0;

  VAR_5 = FUNC_6 (FUNC_1 (VAR_4), FUNC_3 (VAR_4),
    FUNC_4 (FUNC_2 (VAR_4, 0))->head->expr);
  if (!VAR_5)
    return 0;



  FUNC_0 (VAR_5);



  if (!(FUNC_1 (VAR_5) == VAR_2
 || FUNC_7 (VAR_5)))
    VAR_5 = FUNC_8 (VAR_5, ((void*)0));

  if (VAR_5 && VAR_5 != VAR_4)
    {
      *VAR_3 = VAR_5;
      return 1;
    }
  return 0;
}
