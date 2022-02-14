
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_11 (tree VAR_4, int VAR_5)
{
  int VAR_6;

  FUNC_6 (VAR_2);

  for (VAR_6 = 1; VAR_4 != VAR_3;
       VAR_4 = FUNC_0 (VAR_4))
    {
      if (!VAR_6)
 FUNC_10 (VAR_2);
      VAR_6 = 0;
      if (!VAR_4)
 {
   FUNC_5 (VAR_2, "...");
   break;
 }
      FUNC_4 (FUNC_2 (VAR_4), VAR_5);

      if ((VAR_5 & VAR_1) && FUNC_1 (VAR_4))
 {
   FUNC_8 (VAR_2);
   FUNC_9 (VAR_2);
   FUNC_8 (VAR_2);
   FUNC_3 (FUNC_1 (VAR_4), VAR_5 | VAR_0);
 }
    }

  FUNC_7 (VAR_2);
}
