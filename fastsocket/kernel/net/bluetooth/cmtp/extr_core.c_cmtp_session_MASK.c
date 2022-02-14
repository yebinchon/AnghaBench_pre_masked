
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_t ;
struct sock {scalar_t__ sk_state; int sk_sleep; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct cmtp_session {int flags; TYPE_1__* sock; int terminate; int num; } ;
struct TYPE_2__ {int file; struct sock* sk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct cmtp_session*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmtp_session*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cmtp_session*) ;
 int FUNC_5 (struct cmtp_session*) ;
 int FUNC_6 (struct cmtp_session*,struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct cmtp_session*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;
 struct sk_buff* FUNC_16 (int *) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(void *VAR_6)
{
 struct cmtp_session *VAR_7 = VAR_6;
 struct sock *VAR_8 = VAR_7->sock->sk;
 struct sk_buff *VAR_9;
 wait_queue_t VAR_10;

 FUNC_0("session %p", VAR_7);

 FUNC_7("kcmtpd_ctr_%d", VAR_7->num);
 FUNC_15(VAR_5, -15);

 FUNC_10(&VAR_10, VAR_5);
 FUNC_2(VAR_8->sk_sleep, &VAR_10);
 while (!FUNC_3(&VAR_7->terminate)) {
  FUNC_14(VAR_2);

  if (VAR_8->sk_state != VAR_0)
   break;

  while ((VAR_9 = FUNC_16(&VAR_8->sk_receive_queue))) {
   FUNC_17(VAR_9);
   FUNC_6(VAR_7, VAR_9);
  }

  FUNC_5(VAR_7);

  FUNC_13();
 }
 FUNC_14(VAR_3);
 FUNC_12(VAR_8->sk_sleep, &VAR_10);

 FUNC_8(&VAR_4);

 if (!(VAR_7->flags & (1 << VAR_1)))
  FUNC_4(VAR_7);

 FUNC_9(VAR_7->sock->file);

 FUNC_1(VAR_7);

 FUNC_18(&VAR_4);

 FUNC_11(VAR_7);
 return 0;
}
