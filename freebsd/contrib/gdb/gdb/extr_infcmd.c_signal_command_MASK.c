
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int,int ) ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_4, int VAR_5)
{
  enum target_signal VAR_6;

  FUNC_1 ();
  VAR_0;

  if (!VAR_4)
    FUNC_2 ("signal number");




  VAR_6 = FUNC_7 (VAR_4);

  if (VAR_6 == VAR_2)
    {

      int VAR_7 = FUNC_3 (VAR_4);

      if (VAR_7 == 0)
 VAR_6 = VAR_1;
      else
 VAR_6 = FUNC_6 (VAR_7);
    }

  if (VAR_5)
    {
      if (VAR_6 == VAR_1)
 FUNC_4 ("Continuing with no signal.\n");
      else
 FUNC_4 ("Continuing with signal %s.\n",
    FUNC_8 (VAR_6));
    }

  FUNC_0 ();




  FUNC_5 (VAR_6 == VAR_1 ? (CORE_ADDR) -1 : VAR_3, VAR_6, 0);
}
