
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int type; scalar_t__ hidden; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

bool
FUNC_1 (tree VAR_3)
{
  int VAR_4;



  for (VAR_4 = VAR_0; VAR_4 > 0; --VAR_4)
    {
      tree VAR_5;
      if (VAR_4 == VAR_0)
 VAR_5 = VAR_2;
      else
 {
   if (VAR_1[VAR_4].hidden)
     break;
   VAR_5 = VAR_1[VAR_4].type;
 }
      if (!VAR_5)
 continue;
      if (FUNC_0 (VAR_5, VAR_3))
 return 1;
    }
  return 0;
}
