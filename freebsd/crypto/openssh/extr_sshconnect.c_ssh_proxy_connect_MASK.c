
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct ssh {int dummy; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {int user; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_3 ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (char const*,int ,char const*,int ) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int*) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (int ,int ) ;
 int * FUNC_13 (struct ssh*,int,int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct ssh *VAR_6, const char *VAR_7, u_short VAR_8,
    const char *VAR_9)
{
 char *VAR_10;
 int VAR_11[2], VAR_12[2];
 pid_t VAR_13;
 char *VAR_14;

 if ((VAR_14 = FUNC_9("SHELL")) == ((void*)0) || *VAR_14 == '\0')
  VAR_14 = VAR_2;


 if (FUNC_11(VAR_11) < 0 || FUNC_11(VAR_12) < 0)
  FUNC_6("Could not create pipes to communicate with the proxy: %.100s",
      FUNC_14(VAR_3));

 VAR_10 = FUNC_5(VAR_9, VAR_4.user,
     VAR_7, VAR_8);
 FUNC_1("Executing proxy command: %.500s", VAR_10);


 if ((VAR_13 = FUNC_7()) == 0) {
  char *VAR_15[10];


  FUNC_0(VAR_11[1]);
  if (VAR_11[0] != 0) {
   if (FUNC_2(VAR_11[0], 0) < 0)
    FUNC_10("dup2 stdin");
   FUNC_0(VAR_11[0]);
  }
  FUNC_0(VAR_12[0]);
  if (FUNC_2(VAR_12[1], 1) < 0)
   FUNC_10("dup2 stdout");

  FUNC_0(VAR_12[1]);



  VAR_15[0] = VAR_14;
  VAR_15[1] = "-c";
  VAR_15[2] = VAR_10;
  VAR_15[3] = ((void*)0);



  FUNC_12(VAR_0, VAR_1);
  FUNC_3(VAR_15[0], VAR_15);
  FUNC_10(VAR_15[0]);
  FUNC_4(1);
 }

 if (VAR_13 < 0)
  FUNC_6("fork failed: %.100s", FUNC_14(VAR_3));
 else
  VAR_5 = VAR_13;


 FUNC_0(VAR_11[0]);
 FUNC_0(VAR_12[1]);


 FUNC_8(VAR_10);


 if (FUNC_13(VAR_6, VAR_12[0], VAR_11[1]) == ((void*)0))
  return -1;

 return 0;
}
