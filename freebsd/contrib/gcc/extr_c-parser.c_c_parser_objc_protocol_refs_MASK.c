
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_9 (c_parser *VAR_5)
{
  tree VAR_6 = VAR_4;
  FUNC_8 (FUNC_3 (VAR_5, VAR_2));
  FUNC_1 (VAR_5);


  while (1)
    {
      tree VAR_7;
      if (FUNC_4 (VAR_5, VAR_3))
 {
   FUNC_2 (VAR_5, "expected identifier");
   break;
 }
      VAR_7 = FUNC_5 (VAR_5)->value;
      VAR_6 = FUNC_7 (VAR_6, FUNC_0 (VAR_4, VAR_7));
      FUNC_1 (VAR_5);
      if (FUNC_3 (VAR_5, VAR_0))
 FUNC_1 (VAR_5);
      else
 break;
    }
  FUNC_6 (VAR_5, VAR_1, "expected %<>%>");
  return VAR_6;
}
