
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int *,int *,int *) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_3 ;
 int FUNC_7 () ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,int,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_10 (char *VAR_5, int VAR_6)
{
  CORE_ADDR VAR_7;
  CORE_ADDR VAR_8;
  CORE_ADDR VAR_9;

  if (VAR_5 == 0)
    FUNC_2 ("The load command takes a file name");

  VAR_5 = FUNC_8 (VAR_5);
  FUNC_3 (VAR_4, VAR_5);

  FUNC_1 ();




  if (FUNC_0 (VAR_2) != 0 && VAR_3)
    {
      if (FUNC_5 ("You may not load a module while the target task is running.\nKill the target task? "))

 FUNC_7 ();
      else
 FUNC_2 ("Load canceled.");
    }

  VAR_0;
  VAR_1++;
  if (FUNC_4 (VAR_5, &VAR_7, &VAR_8, &VAR_9) == -1)
    FUNC_2 ("Load failed on target machine");
  VAR_1--;

  FUNC_9 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);



  FUNC_6 ();
}
