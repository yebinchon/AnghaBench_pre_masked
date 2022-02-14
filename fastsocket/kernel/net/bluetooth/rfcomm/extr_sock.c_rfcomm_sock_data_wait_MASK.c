
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_shutdown; int sk_sleep; TYPE_1__* sk_socket; scalar_t__ sk_err; int sk_receive_queue; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_4 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int *) ;
 long FUNC_7 (long) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;

__attribute__((used)) static long FUNC_12(struct sock *VAR_6, long VAR_7)
{
 FUNC_0(VAR_5, VAR_4);

 FUNC_2(VAR_6->sk_sleep, &VAR_5);
 for (;;) {
  FUNC_9(VAR_2);

  if (!FUNC_11(&VAR_6->sk_receive_queue) ||
      VAR_6->sk_err ||
      (VAR_6->sk_shutdown & VAR_0) ||
      FUNC_10(VAR_4) ||
      !VAR_7)
   break;

  FUNC_8(VAR_1, &VAR_6->sk_socket->flags);
  FUNC_5(VAR_6);
  VAR_7 = FUNC_7(VAR_7);
  FUNC_4(VAR_6);
  FUNC_3(VAR_1, &VAR_6->sk_socket->flags);
 }

 FUNC_1(VAR_3);
 FUNC_6(VAR_6->sk_sleep, &VAR_5);
 return VAR_7;
}
