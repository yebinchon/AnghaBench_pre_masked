
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_7 (char *VAR_3, char *VAR_4, int VAR_5)
{
  char VAR_6[128];
  int VAR_7 = 0;
  if (VAR_3 && FUNC_2 (VAR_3, "pc") == 0)
    {
      FUNC_5 (VAR_4, VAR_3);
      VAR_0 = 1;
    }
  else
    {


      if (VAR_3 && FUNC_6 (VAR_3, "tcp", 10) == 0)
 {
   char VAR_8[128];
   VAR_7 = FUNC_1 (VAR_3, " %s %s %d %s", VAR_8, VAR_4, &VAR_5, VAR_6);
   VAR_2 = 1;
   VAR_7--;
 }
      else if (VAR_3)
 {
   VAR_7 = FUNC_1 (VAR_3, " %s %d %s", VAR_4, &VAR_5, VAR_6);
 }

      if (VAR_7 != 1 && VAR_7 != 2)
 {
   FUNC_0 ("Bad arguments.  Usage:\ttarget e7000 <device> <speed>\nor \t\ttarget e7000 <host>[:<port>]\nor \t\ttarget e7000 tcp_remote <host>[:<port>]\nor \t\ttarget e7000 pc\n");



 }



      if (VAR_7 == 1 && FUNC_4 (VAR_4, ':') == 0)
 {


   FUNC_3 (VAR_4, ":23");
 }

      if (!VAR_2 && FUNC_4 (VAR_4, ':'))
 VAR_1 = 1;
    }

  return VAR_7;
}
