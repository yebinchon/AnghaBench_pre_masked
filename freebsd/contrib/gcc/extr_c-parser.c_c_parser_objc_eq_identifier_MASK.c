
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef int c_parser ;
struct TYPE_2__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static tree
FUNC_4 (c_parser *VAR_3)
{
  tree VAR_4;
  if (FUNC_2 (VAR_3, VAR_0))
    {
      FUNC_1 (VAR_3, "expected %<=%>");
      return VAR_2;
    }

  FUNC_0 (VAR_3);
  if (FUNC_2 (VAR_3, VAR_1))
    {
      FUNC_1 (VAR_3, "expected identifier");
      return VAR_2;
    }
  VAR_4 = FUNC_3 (VAR_3)->value;
  FUNC_0 (VAR_3);
  return VAR_4;
}
