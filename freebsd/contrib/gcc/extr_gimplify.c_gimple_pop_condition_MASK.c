
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int conditions; int conditional_cleanups; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_2 (tree *VAR_2)
{
  int VAR_3 = --(VAR_1->conditions);

  FUNC_1 (VAR_3 >= 0);
  if (VAR_3 == 0)
    {
      FUNC_0 (VAR_1->conditional_cleanups, VAR_2);
      VAR_1->conditional_cleanups = VAR_0;
    }
}
