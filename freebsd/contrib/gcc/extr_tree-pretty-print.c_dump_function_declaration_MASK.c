
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int pretty_printer ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,int,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *,char) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void
FUNC_8 (pretty_printer *VAR_2, tree VAR_3,
      int VAR_4, int VAR_5)
{
  bool VAR_6 = 0;
  tree VAR_7;

  FUNC_6 (VAR_2);
  FUNC_5 (VAR_2, '(');



  VAR_7 = FUNC_3 (VAR_3);
  while (VAR_7 && FUNC_0 (VAR_7) && VAR_7 != VAR_1)
    {
      VAR_6 = 1;
      FUNC_4 (VAR_2, FUNC_2 (VAR_7), VAR_4, VAR_5, 0);
      VAR_7 = FUNC_0 (VAR_7);
      if (FUNC_0 (VAR_7) && FUNC_1 (FUNC_0 (VAR_7)) == VAR_0)
 {
   FUNC_5 (VAR_2, ',');
   FUNC_6 (VAR_2);
 }
    }

  if (!VAR_6)
    FUNC_7 (VAR_2, "void");

  FUNC_5 (VAR_2, ')');
}
