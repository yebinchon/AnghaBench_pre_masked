
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
typedef int pid_t ;
struct TYPE_3__ {scalar_t__ num; int * list; } ;
typedef TYPE_1__ arglist ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_7 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int,int*,int ) ;

__attribute__((used)) static int
FUNC_12(arglist *VAR_9)
{
 u_int VAR_10;
 int VAR_11;
 pid_t VAR_12;

 if (VAR_9->num == 0)
  FUNC_4("do_local_cmd: no arguments");

 if (VAR_8) {
  FUNC_7(VAR_7, "Executing:");
  for (VAR_10 = 0; VAR_10 < VAR_9->num; VAR_10++)
   FUNC_5(VAR_7, " %s", VAR_9->list[VAR_10]);
  FUNC_7(VAR_7, "\n");
 }
 if ((VAR_12 = FUNC_6()) == -1)
  FUNC_4("do_local_cmd: fork: %s", FUNC_10(VAR_5));

 if (VAR_12 == 0) {
  FUNC_2(VAR_9->list[0], VAR_9->list);
  FUNC_8(VAR_9->list[0]);
  FUNC_3(1);
 }

 VAR_4 = VAR_12;
 FUNC_9(VAR_3, VAR_6);
 FUNC_9(VAR_2, VAR_6);
 FUNC_9(VAR_1, VAR_6);

 while (FUNC_11(VAR_12, &VAR_11, 0) == -1)
  if (VAR_5 != VAR_0)
   FUNC_4("do_local_cmd: waitpid: %s", FUNC_10(VAR_5));

 VAR_4 = -1;

 if (!FUNC_1(VAR_11) || FUNC_0(VAR_11) != 0)
  return (-1);

 return (0);
}
