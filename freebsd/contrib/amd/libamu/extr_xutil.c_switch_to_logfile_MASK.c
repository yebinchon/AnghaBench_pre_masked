
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int * VAR_5 ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,char*,...) ;
 int * VAR_6 ;
 int FUNC_9 (char*) ;
 int VAR_7 ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int) ;

int
FUNC_12(char *VAR_8, int VAR_9, int VAR_10)
{
  FILE *VAR_11 = VAR_6;

  if (VAR_8) {




    if (FUNC_1(VAR_8, "/dev/stderr"))
      VAR_11 = VAR_6;
    else if (FUNC_0(VAR_8, "syslog", FUNC_9("syslog"))) {
      FUNC_8(VAR_4, "syslog option not supported, logging unchanged");


    } else {
      (void) FUNC_11(VAR_9);
      if (VAR_10)
 FUNC_2(FUNC_10(VAR_8, 0));
      VAR_11 = FUNC_5(VAR_8, "a");
      FUNC_11(0);
    }
  }




  if (!VAR_11 && VAR_8) {
    FUNC_8(VAR_3, "%s: Can't open logfile: %m", VAR_8);
    return 1;
  }




  if (VAR_5 && VAR_5 != VAR_6)
    (void) FUNC_4(VAR_5);
  VAR_5 = VAR_11;

  if (VAR_8)
    FUNC_8(VAR_2, "switched to logfile \"%s\"", VAR_8);
  else
    FUNC_8(VAR_2, "no logfile defined; using stderr");

  return 0;
}
