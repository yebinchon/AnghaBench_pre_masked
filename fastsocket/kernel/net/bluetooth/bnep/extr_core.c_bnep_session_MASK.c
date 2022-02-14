
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_t ;
struct sock {scalar_t__ sk_state; int sk_sleep; int sk_err; int sk_write_queue; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct net_device {int name; } ;
struct bnep_session {TYPE_1__* sock; int killed; struct net_device* dev; } ;
struct TYPE_2__ {int file; struct sock* sk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnep_session*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bnep_session*,struct sk_buff*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct bnep_session*,struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;
 struct sk_buff* FUNC_16 (int *) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(void *VAR_6)
{
 struct bnep_session *VAR_7 = VAR_6;
 struct net_device *VAR_8 = VAR_7->dev;
 struct sock *VAR_9 = VAR_7->sock->sk;
 struct sk_buff *VAR_10;
 wait_queue_t VAR_11;

 FUNC_0("");

 FUNC_6("kbnepd %s", VAR_8->name);
 FUNC_15(VAR_5, -15);

 FUNC_10(&VAR_11, VAR_5);
 FUNC_2(VAR_9->sk_sleep, &VAR_11);
 while (!FUNC_3(&VAR_7->killed)) {
  FUNC_14(VAR_2);


  while ((VAR_10 = FUNC_16(&VAR_9->sk_receive_queue))) {
   FUNC_17(VAR_10);
   FUNC_4(VAR_7, VAR_10);
  }

  if (VAR_9->sk_state != VAR_0)
   break;


  while ((VAR_10 = FUNC_16(&VAR_9->sk_write_queue)))
   if (FUNC_5(VAR_7, VAR_10))
    break;
  FUNC_11(VAR_8);

  FUNC_13();
 }
 FUNC_14(VAR_3);
 FUNC_12(VAR_9->sk_sleep, &VAR_11);


 FUNC_7(&VAR_4);


 FUNC_18(VAR_8);


 VAR_7->sock->sk->sk_err = VAR_1;

 FUNC_20(VAR_7->sock->sk->sk_sleep);


 FUNC_8(VAR_7->sock->file);

 FUNC_1(VAR_7);

 FUNC_19(&VAR_4);
 FUNC_9(VAR_8);
 return 0;
}
