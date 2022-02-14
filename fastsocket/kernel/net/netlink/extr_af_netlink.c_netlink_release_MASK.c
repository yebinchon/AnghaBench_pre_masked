
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {size_t sk_protocol; int sk_write_queue; } ;
struct netlink_sock {int * groups; scalar_t__ subscriptions; int module; scalar_t__ pid; int wait; } ;
struct netlink_notify {size_t protocol; scalar_t__ pid; int net; } ;
struct TYPE_2__ {scalar_t__ registered; int * module; int * listeners; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,struct netlink_notify*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct sock*) ;
 int VAR_2 ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct sock*) ;
 TYPE_1__* VAR_3 ;
 struct netlink_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (int ,int *,int) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct socket *VAR_4)
{
 struct sock *VAR_5 = VAR_4->sk;
 struct netlink_sock *VAR_6;

 if (!VAR_5)
  return 0;

 FUNC_7(VAR_5);
 FUNC_14(VAR_5);
 VAR_6 = FUNC_11(VAR_5);






 VAR_4->sk = ((void*)0);
 FUNC_17(&VAR_6->wait);

 FUNC_12(&VAR_5->sk_write_queue);

 if (VAR_6->pid && !VAR_6->subscriptions) {
  struct netlink_notify VAR_7 = {
      .net = FUNC_13(VAR_5),
      .protocol = VAR_5->sk_protocol,
      .pid = VAR_6->pid,
       };
  FUNC_1(&VAR_1,
    VAR_0, &VAR_7);
 }

 FUNC_5(VAR_6->module);

 FUNC_8();
 if (FUNC_6(VAR_5)) {
  FUNC_0(VAR_3[VAR_5->sk_protocol].registered == 0);
  if (--VAR_3[VAR_5->sk_protocol].registered == 0) {
   FUNC_2(VAR_3[VAR_5->sk_protocol].listeners);
   VAR_3[VAR_5->sk_protocol].module = ((void*)0);
   VAR_3[VAR_5->sk_protocol].registered = 0;
  }
 } else if (VAR_6->subscriptions)
  FUNC_10(VAR_5);
 FUNC_9();

 FUNC_2(VAR_6->groups);
 VAR_6->groups = ((void*)0);

 FUNC_3();
 FUNC_15(FUNC_13(VAR_5), &VAR_2, -1);
 FUNC_4();
 FUNC_16(VAR_5);
 return 0;
}
