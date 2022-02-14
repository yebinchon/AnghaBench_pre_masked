
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,char*,...) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,char*,char*) ;
 char* FUNC_9 (char*) ;
 int VAR_3 ;
 char* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_4)
{
 int VAR_5;
 char *VAR_6;
 pid_t VAR_7;

 if (!*VAR_4)
  VAR_4 = ((void*)0);

 if ((VAR_6 = FUNC_9("SHELL")) == ((void*)0) || *VAR_6 == '\0')
  VAR_6 = VAR_1;

 if ((VAR_7 = FUNC_7()) == -1)
  FUNC_6("Couldn't fork: %s", FUNC_10(VAR_2));

 if (VAR_7 == 0) {

  if (VAR_4) {
   FUNC_3("Executing %s -c \"%s\"", VAR_6, VAR_4);
   FUNC_5(VAR_6, VAR_6, "-c", VAR_4, (char *)((void*)0));
  } else {
   FUNC_3("Executing %s", VAR_6);
   FUNC_5(VAR_6, VAR_6, (char *)((void*)0));
  }
  FUNC_8(VAR_3, "Couldn't execute \"%s\": %s\n", VAR_6,
      FUNC_10(VAR_2));
  FUNC_2(1);
 }
 while (FUNC_11(VAR_7, &VAR_5, 0) == -1)
  if (VAR_2 != VAR_0)
   FUNC_6("Couldn't wait for child: %s", FUNC_10(VAR_2));
 if (!FUNC_1(VAR_5))
  FUNC_4("Shell exited abnormally");
 else if (FUNC_0(VAR_5))
  FUNC_4("Shell exited with status %d", FUNC_0(VAR_5));
}
