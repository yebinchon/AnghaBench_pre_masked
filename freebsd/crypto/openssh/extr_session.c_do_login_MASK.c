
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct passwd {int pw_uid; int pw_name; } ;
typedef int socklen_t ;
typedef int pid_t ;
typedef int from ;
struct TYPE_8__ {scalar_t__ use_pam; int use_dns; } ;
struct TYPE_7__ {TYPE_1__* authctxt; int tty; struct passwd* pw; } ;
struct TYPE_6__ {scalar_t__ force_pwchange; } ;
typedef TYPE_2__ Session ;


 scalar_t__ FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int ,struct sockaddr*,int*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct sockaddr_storage*,int ,int) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_12 (struct ssh*,int ,int ) ;
 int FUNC_13 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_14(struct ssh *VAR_4, Session *VAR_5, const char *VAR_6)
{
 socklen_t VAR_7;
 struct sockaddr_storage VAR_8;
 struct passwd * VAR_9 = VAR_5->pw;
 pid_t VAR_10 = FUNC_7();





 FUNC_8(&VAR_8, 0, sizeof(VAR_8));
 VAR_7 = sizeof(VAR_8);
 if (FUNC_9()) {
  if (FUNC_6(FUNC_10(),
      (struct sockaddr *)&VAR_8, &VAR_7) < 0) {
   FUNC_2("getpeername: %.100s", FUNC_13(VAR_0));
   FUNC_1(255);
  }
 }


 if (!VAR_2)
  FUNC_11(VAR_10, VAR_5->tty, VAR_9->pw_name, VAR_9->pw_uid,
      FUNC_12(VAR_4, VAR_3,
      VAR_1.use_dns),
      (struct sockaddr *)&VAR_8, VAR_7);
 if (FUNC_0(VAR_5, VAR_6))
  return;

 FUNC_3();

 FUNC_4();
}
