
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_state; int td_flags; char* td_lockname; char* td_wmesg; int td_oncpu; char* td_name; TYPE_1__* td_proc; void* td_wchan; void* td_blocked; int td_tid; } ;
struct proc {int p_flag; } ;
typedef int state ;
struct TYPE_2__ {int p_comm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct thread volatile*) ;
 scalar_t__ FUNC_1 (struct thread volatile*) ;
 int FUNC_2 (struct thread volatile*) ;
 int FUNC_3 (struct thread volatile*) ;
 int FUNC_4 (struct thread volatile*) ;
 scalar_t__ FUNC_5 (struct thread volatile*) ;
 scalar_t__ FUNC_6 (struct thread volatile*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct proc volatile*) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (char*,int,char*,...) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_11(volatile struct proc *VAR_4, volatile struct thread *VAR_5, int VAR_6)
{
 char VAR_7[9], VAR_8;
 const char *VAR_9;
 void *VAR_10;

 if (VAR_6) {
  FUNC_7("%6d                  ", VAR_5->td_tid);
  switch (VAR_5->td_state) {
  case 129:
   FUNC_9(VAR_7, sizeof(VAR_7), "Run");
   break;
  case 128:
   FUNC_9(VAR_7, sizeof(VAR_7), "RunQ");
   break;
  case 132:
   FUNC_9(VAR_7, sizeof(VAR_7), "CanRun");
   break;
  case 131:
   FUNC_9(VAR_7, sizeof(VAR_7), "Inactv");
   break;
  case 130:
   VAR_7[0] = '\0';
   if (FUNC_5(VAR_5))
    FUNC_10(VAR_7, "L", sizeof(VAR_7));
   if (FUNC_2(VAR_5)) {
    if (VAR_5->td_flags & VAR_2)
     FUNC_10(VAR_7, "S", sizeof(VAR_7));
    else
     FUNC_10(VAR_7, "D", sizeof(VAR_7));
   }
   if (FUNC_4(VAR_5))
    FUNC_10(VAR_7, "W", sizeof(VAR_7));
   if (FUNC_0(VAR_5))
    FUNC_10(VAR_7, "I", sizeof(VAR_7));
   if (FUNC_3(VAR_5))
    FUNC_10(VAR_7, "s", sizeof(VAR_7));
   if (VAR_7[0] != '\0')
    break;
  default:
   FUNC_9(VAR_7, sizeof(VAR_7), "???");
  }
  FUNC_7(" %-6.6s ", VAR_7);
 }
 VAR_8 = ' ';
 if (FUNC_5(VAR_5)) {
  VAR_8 = '*';
  VAR_9 = VAR_5->td_lockname;
  VAR_10 = VAR_5->td_blocked;
 } else if (FUNC_6(VAR_5)) {
  VAR_9 = VAR_5->td_wmesg;
  VAR_10 = VAR_5->td_wchan;
 } else if (FUNC_1(VAR_5)) {
  FUNC_9(VAR_7, sizeof(VAR_7), "CPU %d", VAR_5->td_oncpu);
  VAR_9 = VAR_7;
  VAR_10 = ((void*)0);
 } else {
  VAR_9 = "";
  VAR_10 = ((void*)0);
 }
 FUNC_7("%c%-7.7s ", VAR_8, VAR_9);
 if (VAR_10 == ((void*)0))

  FUNC_7("%18s  ", "");



 else
  FUNC_7("%p  ", VAR_10);
 if (VAR_4->p_flag & VAR_1)
  FUNC_7("[");
 if (VAR_5->td_name[0] != '\0')
  FUNC_7("%s", VAR_5->td_name);
 else
  FUNC_7("%s", VAR_5->td_proc->p_comm);
 if (VAR_4->p_flag & VAR_1)
  FUNC_7("]");
 if (VAR_3 == VAR_0 && VAR_6 == 0) {
  FUNC_7(" ");
  FUNC_8(VAR_4);
 }
 FUNC_7("\n");
}
