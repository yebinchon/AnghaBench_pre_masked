
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int pid; int status; int cmd; } ;
struct job {int foreground; int nprocs; struct procstat* ps; } ;
struct jmploc {int loc; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 struct jmploc* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct job*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char**,char**,char const*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;

pid_t
FUNC_12(struct job *VAR_7, char **VAR_8, char **VAR_9, const char *VAR_10, int VAR_11, int VAR_12[2])
{
 pid_t VAR_13;
 struct jmploc VAR_14;
 struct jmploc *VAR_15;

 FUNC_0(("vforkexecshell(%%%td, %s, %p) called\n", VAR_7 - VAR_5, VAR_8[0],
     (void *)VAR_12));
 VAR_0;
 FUNC_5();
 VAR_15 = VAR_4;
 VAR_13 = FUNC_11();
 if (VAR_13 == -1) {
  FUNC_0(("Vfork failed, errno=%d\n", VAR_2));
  VAR_1;
  FUNC_4("Cannot fork: %s", FUNC_10(VAR_2));
 }
 if (VAR_13 == 0) {
  FUNC_0(("Child shell %d\n", (int)FUNC_6()));
  if (FUNC_8(VAR_14.loc))
   FUNC_1(VAR_3);
  if (VAR_12 != ((void*)0)) {
   FUNC_2(VAR_12[0]);
   if (VAR_12[1] != 1) {
    FUNC_3(VAR_12[1], 1);
    FUNC_2(VAR_12[1]);
   }
  }
  VAR_4 = &VAR_14;
  FUNC_9(VAR_8, VAR_9, VAR_10, VAR_11);
 }
 VAR_4 = VAR_15;
 if (VAR_7) {
  struct procstat *VAR_16 = &VAR_7->ps[VAR_7->nprocs++];
  VAR_16->pid = VAR_13;
  VAR_16->status = -1;
  VAR_16->cmd = VAR_6;
  VAR_7->foreground = 1;



 }
 VAR_1;
 FUNC_0(("In parent shell:  child = %d\n", (int)VAR_13));
 return VAR_13;
}
