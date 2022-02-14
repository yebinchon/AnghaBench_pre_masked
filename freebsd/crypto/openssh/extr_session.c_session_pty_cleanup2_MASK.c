
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ttyfd; scalar_t__ pid; int ptymaster; int tty; TYPE_1__* pw; int self; } ;
struct TYPE_4__ {int pw_name; } ;
typedef TYPE_2__ Session ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 char* FUNC_6 (int ) ;

void
FUNC_7(Session *VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  FUNC_2("session_pty_cleanup: no session");
  return;
 }
 if (VAR_1->ttyfd == -1)
  return;

 FUNC_1("session_pty_cleanup: session %d release %s", VAR_1->self, VAR_1->tty);


 if (VAR_1->pid != 0)
  FUNC_5(VAR_1->pid, VAR_1->tty, VAR_1->pw->pw_name);


 if (FUNC_3() == 0)
  FUNC_4(VAR_1->tty);






 if (VAR_1->ptymaster != -1 && FUNC_0(VAR_1->ptymaster) < 0)
  FUNC_2("close(s->ptymaster/%d): %s",
      VAR_1->ptymaster, FUNC_6(VAR_0));


 VAR_1->ttyfd = -1;
}
