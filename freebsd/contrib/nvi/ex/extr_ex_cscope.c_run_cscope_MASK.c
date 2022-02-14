
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* dname; int to_fd; int from_fd; void* from_fp; void* to_fp; int pid; } ;
typedef int SCR ;
typedef TYPE_1__ CSC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**,int ,char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,char*,char*,char*) ;
 void* FUNC_5 (int,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int ,char*,char*) ;
 scalar_t__ FUNC_9 (int*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 () ;

__attribute__((used)) static int
FUNC_12(SCR *VAR_6, CSC *VAR_7, char *VAR_8)
{
 int VAR_9[2], VAR_10[2];
 char *VAR_11;





 VAR_9[0] = VAR_9[1] = VAR_10[0] = VAR_10[1] = -1;
 if (FUNC_9(VAR_9) < 0 || FUNC_9(VAR_10) < 0) {
  FUNC_7(VAR_6, VAR_1, "pipe");
  goto err;
 }
 switch (VAR_7->pid = FUNC_11()) {
  char *VAR_12, *VAR_13;
 case -1:
  FUNC_7(VAR_6, VAR_1, "vfork");
err: if (VAR_9[0] != -1)
   (void)FUNC_2(VAR_9[0]);
  if (VAR_9[1] != -1)
   (void)FUNC_2(VAR_9[1]);
  if (VAR_10[0] != -1)
   (void)FUNC_2(VAR_10[0]);
  if (VAR_10[1] != -1)
   (void)FUNC_2(VAR_10[1]);
  return (1);
 case 0:
  (void)FUNC_3(VAR_9[0], VAR_3);
  (void)FUNC_3(VAR_10[1], VAR_4);
  (void)FUNC_3(VAR_10[1], VAR_2);


  (void)FUNC_2(VAR_9[1]);
  (void)FUNC_2(VAR_10[0]);



  if ((VAR_12 = FUNC_10(VAR_7->dname)) == ((void*)0))
   goto nomem;
  if ((VAR_13 = FUNC_10(VAR_8)) == ((void*)0)) {
   FUNC_6(VAR_12);
   goto nomem;
  }
  (void)FUNC_1(&VAR_11, "cd %s && exec cscope -dl -f %s", VAR_12, VAR_13);
  FUNC_6(VAR_13);
  FUNC_6(VAR_12);
  if (VAR_11 == ((void*)0)) {
nomem: FUNC_7(VAR_6, VAR_1, ((void*)0));
   FUNC_0 (1);
  }
  (void)FUNC_4(VAR_5, "sh", "-c", VAR_11, (char *)((void*)0));
  FUNC_8(VAR_6, VAR_1, VAR_11, "execl: %s");
  FUNC_6(VAR_11);
  FUNC_0 (127);

 default:

  (void)FUNC_2(VAR_9[0]);
  (void)FUNC_2(VAR_10[1]);





  VAR_7->to_fd = VAR_9[1];
  VAR_7->to_fp = FUNC_5(VAR_9[1], "w");
  VAR_7->from_fd = VAR_10[0];
  VAR_7->from_fp = FUNC_5(VAR_10[0], "r");
  break;
 }
 return (0);
}
