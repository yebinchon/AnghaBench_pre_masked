
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11 (c_parser *VAR_7)
{
  enum tree_code VAR_8 = FUNC_6 (VAR_7);
  tree VAR_9;
  FUNC_8 (VAR_8);
  VAR_5 = 1;
  VAR_9 = FUNC_5 (VAR_7);
  if (FUNC_4 (VAR_7, VAR_1))
    {
      FUNC_2 (VAR_7);
      if (VAR_6)
 FUNC_10 ("extra semicolon in method definition specified");
    }
  if (!FUNC_4 (VAR_7, VAR_0))
    {
      FUNC_3 (VAR_7, "expected %<{%>");
      return;
    }
  VAR_5 = 0;

  FUNC_9 (VAR_9, VAR_4);
  VAR_4 = VAR_2;

  FUNC_0 (FUNC_1 (VAR_7));
  FUNC_7 (VAR_3);
}
