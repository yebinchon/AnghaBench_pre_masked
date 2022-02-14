
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_6, int VAR_7)
{
  enum target_signal VAR_8;
  FUNC_2 ();

  if (VAR_6)
    {

      VAR_8 = FUNC_5 (VAR_6);
      if (VAR_8 == VAR_5)
 {

   VAR_8 =
     FUNC_4 (FUNC_0 (VAR_6));
 }
      FUNC_3 (VAR_8);
      return;
    }

  FUNC_1 ("\n");

  for (VAR_8 = VAR_3;
       (int) VAR_8 < (int) VAR_4;
       VAR_8 = (enum target_signal) ((int) VAR_8 + 1))
    {
      VAR_0;

      if (VAR_8 != VAR_5
   && VAR_8 != VAR_2 && VAR_8 != VAR_1)
 FUNC_3 (VAR_8);
    }

  FUNC_1 ("\nUse the \"handle\" command to change these tables.\n");
}
