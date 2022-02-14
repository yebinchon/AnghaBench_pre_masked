
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2 (char *VAR_1, int VAR_2)
{
  if (VAR_1)
    FUNC_0 ("Garbage after \"show remote system-call-allowed\" command: `%s'", VAR_1);
  FUNC_1 ("Calling host system(3) call from target is %sallowed\n",
       VAR_0 ? "" : "not ");
}
