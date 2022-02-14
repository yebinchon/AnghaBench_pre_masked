
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct siginfo {int si_uid; int si_pid; int si_value; int si_code; int si_errno; int si_signo; } ;
struct TYPE_4__ {int sigev_notify; int sigev_signo; int sigev_value; } ;
struct TYPE_3__ {int mq_curmsgs; } ;
struct mqueue_inode_info {int wait_q; int * notify_owner; int notify_cookie; int notify_sock; TYPE_2__ notify; TYPE_1__ attr; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct siginfo*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mqueue_inode_info *VAR_3)
{





 if (VAR_3->notify_owner &&
     VAR_3->attr.mq_curmsgs == 1) {
  struct siginfo VAR_4;
  switch (VAR_3->notify.sigev_notify) {
  case 130:
   break;
  case 129:


   VAR_4.si_signo = VAR_3->notify.sigev_signo;
   VAR_4.si_errno = 0;
   VAR_4.si_code = VAR_1;
   VAR_4.si_value = VAR_3->notify.sigev_value;
   VAR_4.si_pid = FUNC_6(VAR_2,
      FUNC_3(VAR_3->notify_owner));
   VAR_4.si_uid = FUNC_0();

   FUNC_1(VAR_3->notify.sigev_signo,
          &VAR_4, VAR_3->notify_owner);
   break;
  case 128:
   FUNC_5(VAR_3->notify_cookie, VAR_0);
   FUNC_2(VAR_3->notify_sock, VAR_3->notify_cookie);
   break;
  }

  FUNC_4(VAR_3->notify_owner);
  VAR_3->notify_owner = ((void*)0);
 }
 FUNC_7(&VAR_3->wait_q);
}
