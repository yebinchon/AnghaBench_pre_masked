
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int type; scalar_t__ hidden; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

tree
FUNC_2 (tree VAR_4)
{
  int VAR_5;


  if (FUNC_1 (VAR_4))
    return VAR_0;

  if (!VAR_3)
    return VAR_0;

  if (FUNC_0 (VAR_4, VAR_3))
    return VAR_3;

  for (VAR_5 = VAR_1 - 1; VAR_5 > 0; --VAR_5)
    {
      if (VAR_2[VAR_5].hidden)
 break;
      if (FUNC_0 (VAR_4, VAR_2[VAR_5].type))
 return VAR_2[VAR_5].type;
    }

  return VAR_0;
}
