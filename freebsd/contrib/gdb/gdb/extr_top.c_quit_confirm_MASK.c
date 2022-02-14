
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_4 ;

int
FUNC_2 (void)
{
  if (! FUNC_0 (VAR_1, VAR_3) && VAR_4)
    {
      char *VAR_5;




      if (VAR_2)
 VAR_5 = "A debugging session is active.\nDo you still want to close the debugger?";
      else if (VAR_0)
 VAR_5 = "The program is running.  Quit anyway (and detach it)? ";
      else
 VAR_5 = "The program is running.  Exit anyway? ";

      if (!FUNC_1 ("%s", VAR_5))
 return 0;
    }

  return 1;
}
