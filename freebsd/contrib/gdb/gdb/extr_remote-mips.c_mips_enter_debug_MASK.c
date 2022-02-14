
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char*,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (void)
{

  VAR_5 = 0;
  VAR_4 = 0;

  if (VAR_3 != VAR_1)
    FUNC_3 ("debug\r", 0);
  else
    FUNC_3 ("db tty0\r", 0);

  FUNC_5 (1);
  FUNC_4 (VAR_2, "\r", sizeof "\r" - 1);





  if (VAR_3 != VAR_1)
    FUNC_1 ("\r");

  {
    char VAR_6[VAR_0 + 1];
    if (FUNC_2 (VAR_6, 1, 3) < 0)
      FUNC_0 ("Failed to initialize (didn't receive packet).");
  }
}
