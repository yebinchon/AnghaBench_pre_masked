
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
typedef int psinfo_t ;
typedef int name ;
struct TYPE_2__ {int pr_pid; } ;




 int * FUNC_0 (struct ps_prochandle*) ;
 int FUNC_1 (struct ps_prochandle*) ;
 TYPE_1__* FUNC_2 (struct ps_prochandle*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (struct ps_prochandle*) ;
 int FUNC_8 (struct ps_prochandle*) ;
 int FUNC_9 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_10(struct ps_prochandle *VAR_2, const char *VAR_3, void *VAR_4)
{




 int VAR_5 = FUNC_7(VAR_2);
 int VAR_6 = FUNC_8(VAR_2);

 char VAR_7[VAR_0];

 if (VAR_3 != ((void*)0)) {
  FUNC_6("pid %d: %s\n", VAR_5, VAR_3);
  return;
 }

 switch (FUNC_1(VAR_2)) {
 case 128:
  if (FUNC_4(VAR_6)) {
   FUNC_6("pid %d terminated by %s\n", VAR_5,
       FUNC_9(FUNC_5(VAR_6),
       VAR_7, sizeof (VAR_7)));
  } else if (FUNC_3(VAR_6) != 0) {
   FUNC_6("pid %d exited with status %d\n",
       VAR_5, FUNC_3(VAR_6));
  } else {
   FUNC_6("pid %d has exited\n", VAR_5);
  }
  VAR_1 = 1;
  break;

 case 129:
  FUNC_6("pid %d exec'd a set-id or unobservable program\n", VAR_5);
  VAR_1 = 1;
  break;
 }
}
