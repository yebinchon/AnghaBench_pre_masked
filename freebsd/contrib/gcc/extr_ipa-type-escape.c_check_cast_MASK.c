
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;






 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8 (tree VAR_2, tree VAR_3)
{
  tree VAR_4 = FUNC_5 (FUNC_2 (VAR_3), 0, 0);
  bool VAR_5, VAR_6;

  VAR_2 = FUNC_5 (VAR_2, 0, 0);
  if (!VAR_4 || !VAR_2 || VAR_4 == VAR_2)
    return;

  VAR_5 =
    FUNC_6 (VAR_2) >= 0;
  VAR_6 =
    FUNC_6 (VAR_4) >= 0;

  if (VAR_5)
    if (VAR_6)
      {






 switch (FUNC_4 (VAR_2, VAR_4))
   {
   case 129:
   case 128:
   case 131:
     break;

   case 130:
     FUNC_7 (VAR_2, VAR_0);
     FUNC_7 (VAR_4, VAR_0);
     break;
   }
      }
    else
      {


 if (FUNC_0 (VAR_3) && !FUNC_3 (VAR_1, FUNC_1 (VAR_3)))
   FUNC_7 (VAR_2, VAR_0);
      }
  else if (VAR_6)
    FUNC_7 (VAR_4, VAR_0);
}
