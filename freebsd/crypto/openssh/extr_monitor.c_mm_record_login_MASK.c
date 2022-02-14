
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct passwd {int pw_uid; int pw_name; } ;
typedef int socklen_t ;
typedef int from ;
struct TYPE_5__ {int use_dns; } ;
struct TYPE_4__ {int tty; int pid; } ;
typedef TYPE_1__ Session ;


 struct ssh* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,struct sockaddr*,int*) ;
 int FUNC_3 (struct sockaddr_storage*,int ,int) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_7 (struct ssh*,int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9(Session *VAR_4, struct passwd *VAR_5)
{
 struct ssh *VAR_6 = VAR_0;
 socklen_t VAR_7;
 struct sockaddr_storage VAR_8;





 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_7 = sizeof(VAR_8);
 if (FUNC_4()) {
  if (FUNC_2(FUNC_5(),
      (struct sockaddr *)&VAR_8, &VAR_7) < 0) {
   FUNC_1("getpeername: %.100s", FUNC_8(VAR_1));
   FUNC_0(255);
  }
 }

 FUNC_6(VAR_4->pid, VAR_4->tty, VAR_5->pw_name, VAR_5->pw_uid,
     FUNC_7(VAR_6, VAR_3, VAR_2.use_dns),
     (struct sockaddr *)&VAR_8, VAR_7);
}
