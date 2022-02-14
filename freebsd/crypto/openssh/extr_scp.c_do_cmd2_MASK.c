
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_4__ {int list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*,int ,char*,char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int,int*,int ) ;

int
FUNC_11(char *VAR_7, char *VAR_8, int VAR_9, char *VAR_10, int VAR_11, int VAR_12)
{
 pid_t VAR_13;
 int VAR_14;

 if (VAR_6)
  FUNC_5(VAR_5,
      "Executing: 2nd program %s host %s, user %s, command %s\n",
      VAR_3, VAR_7,
      VAR_8 ? VAR_8 : "(unspecified)", VAR_10);

 if (VAR_9 == -1)
  VAR_9 = VAR_4;


 VAR_13 = FUNC_6();
 if (VAR_13 == 0) {
  FUNC_1(VAR_11, 0);
  FUNC_1(VAR_12, 1);

  FUNC_8(&VAR_1, 0, "%s", VAR_3);
  if (VAR_9 != -1) {
   FUNC_0(&VAR_1, "-p");
   FUNC_0(&VAR_1, "%d", VAR_9);
  }
  if (VAR_8 != ((void*)0)) {
   FUNC_0(&VAR_1, "-l");
   FUNC_0(&VAR_1, "%s", VAR_8);
  }
  FUNC_0(&VAR_1, "--");
  FUNC_0(&VAR_1, "%s", VAR_7);
  FUNC_0(&VAR_1, "%s", VAR_10);

  FUNC_2(VAR_3, VAR_1.list);
  FUNC_7(VAR_3);
  FUNC_3(1);
 } else if (VAR_13 == -1) {
  FUNC_4("fork: %s", FUNC_9(VAR_2));
 }
 while (FUNC_10(VAR_13, &VAR_14, 0) == -1)
  if (VAR_2 != VAR_0)
   FUNC_4("do_cmd2: waitpid: %s", FUNC_9(VAR_2));
 return 0;
}
