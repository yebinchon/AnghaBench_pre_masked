
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (char const*,int ,char const*,int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int*) ;
 int * FUNC_13 (struct ssh*,int,int) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,int *,int ) ;

__attribute__((used)) static int
FUNC_16(struct ssh *VAR_6, const char *VAR_7, u_short VAR_8,
    const char *VAR_9)
{
 char *VAR_10;
 int VAR_11[2], VAR_12;
 pid_t VAR_13;
 char *VAR_14;

 if ((VAR_14 = FUNC_9("SHELL")) == ((void*)0))
  VAR_14 = VAR_3;

 if (FUNC_12(VAR_0, VAR_2, 0, VAR_11) < 0)
  FUNC_6("Could not create socketpair to communicate with "
      "proxy dialer: %.100s", FUNC_14(VAR_4));

 VAR_10 = FUNC_5(VAR_9, VAR_5.user,
     VAR_7, VAR_8);
 FUNC_1("Executing proxy dialer command: %.500s", VAR_10);


 if ((VAR_13 = FUNC_7()) == 0) {
  char *VAR_15[10];

  FUNC_0(VAR_11[1]);

  if (VAR_11[0] != 0) {
   if (FUNC_2(VAR_11[0], 0) < 0)
    FUNC_11("dup2 stdin");
  }
  if (VAR_11[0] != 1) {
   if (FUNC_2(VAR_11[0], 1) < 0)
    FUNC_11("dup2 stdout");
  }
  if (VAR_11[0] >= 2)
   FUNC_0(VAR_11[0]);





  VAR_15[0] = VAR_14;
  VAR_15[1] = "-c";
  VAR_15[2] = VAR_10;
  VAR_15[3] = ((void*)0);





  FUNC_3(VAR_15[0], VAR_15);
  FUNC_11(VAR_15[0]);
  FUNC_4(1);
 }

 if (VAR_13 < 0)
  FUNC_6("fork failed: %.100s", FUNC_14(VAR_4));
 FUNC_0(VAR_11[0]);
 FUNC_8(VAR_10);

 if ((VAR_12 = FUNC_10(VAR_11[1])) == -1)
  FUNC_6("proxy dialer did not pass back a connection");
 FUNC_0(VAR_11[1]);

 while (FUNC_15(VAR_13, ((void*)0), 0) == -1)
  if (VAR_4 != VAR_1)
   FUNC_6("Couldn't wait for child: %s", FUNC_14(VAR_4));


 if (FUNC_13(VAR_6, VAR_12, VAR_12) == ((void*)0))
  return -1;

 return 0;
}
