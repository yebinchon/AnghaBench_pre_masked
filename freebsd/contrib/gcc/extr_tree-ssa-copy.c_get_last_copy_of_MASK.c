
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static tree
FUNC_1 (tree VAR_3)
{
  tree VAR_4;
  int VAR_5;
  VAR_4 = VAR_3;
  for (VAR_5 = 0; VAR_5 < 5; VAR_5++)
    {
      tree VAR_6 = VAR_2[FUNC_0 (VAR_4)].value;
      if (VAR_6 == VAR_1 || VAR_6 == VAR_4)
 break;
      VAR_4 = VAR_6;
    }




  return (VAR_5 < 5 ? VAR_4 : VAR_3);
}
