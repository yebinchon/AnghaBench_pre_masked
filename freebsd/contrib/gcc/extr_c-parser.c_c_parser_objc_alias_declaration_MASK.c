
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
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8 (c_parser *VAR_3)
{
  tree VAR_4, VAR_5;
  FUNC_6 (FUNC_2 (VAR_3, VAR_2));
  FUNC_0 (VAR_3);
  if (FUNC_3 (VAR_3, VAR_0))
    {
      FUNC_1 (VAR_3, "expected identifier");
      FUNC_5 (VAR_3, VAR_1, ((void*)0));
      return;
    }
  VAR_4 = FUNC_4 (VAR_3)->value;
  FUNC_0 (VAR_3);
  if (FUNC_3 (VAR_3, VAR_0))
    {
      FUNC_1 (VAR_3, "expected identifier");
      FUNC_5 (VAR_3, VAR_1, ((void*)0));
      return;
    }
  VAR_5 = FUNC_4 (VAR_3)->value;
  FUNC_0 (VAR_3);
  FUNC_5 (VAR_3, VAR_1, "expected %<;%>");
  FUNC_7 (VAR_4, VAR_5);
}
