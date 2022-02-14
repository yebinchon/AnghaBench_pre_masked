
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_shutdown; int sk_sleep; TYPE_1__* sk_socket; scalar_t__ sk_err; int sk_receive_queue; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 long FUNC_4 (long) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int VAR_4 ;

__attribute__((used)) static long FUNC_10(struct sock *VAR_5, long VAR_6)
{
 FUNC_0(VAR_4);

 FUNC_8(VAR_5);

 for (;;) {
  FUNC_3(VAR_5->sk_sleep, &VAR_4, VAR_2);

  if (!FUNC_7(&VAR_5->sk_receive_queue) ||
      VAR_5->sk_err ||
      (VAR_5->sk_shutdown & VAR_0) ||
      FUNC_6(VAR_3) ||
      !VAR_6)
   break;

  FUNC_5(VAR_1, &VAR_5->sk_socket->flags);
  FUNC_9(VAR_5);
  VAR_6 = FUNC_4(VAR_6);
  FUNC_8(VAR_5);
  FUNC_1(VAR_1, &VAR_5->sk_socket->flags);
 }

 FUNC_2(VAR_5->sk_sleep, &VAR_4);
 FUNC_9(VAR_5);
 return VAR_6;
}
