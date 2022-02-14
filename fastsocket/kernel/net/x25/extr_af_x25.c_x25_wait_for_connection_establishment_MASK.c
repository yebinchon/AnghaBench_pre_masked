
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_sleep; TYPE_1__* sk_socket; } ;
struct TYPE_2__ {int state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_5 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_7)
{
 FUNC_0(VAR_6, VAR_5);
 int VAR_8;

 FUNC_2(VAR_7->sk_sleep, &VAR_6);
 for (;;) {
  FUNC_1(VAR_2);
  VAR_8 = -VAR_0;
  if (FUNC_7(VAR_5))
   break;
  VAR_8 = FUNC_8(VAR_7);
  if (VAR_8) {
   VAR_7->sk_socket->state = VAR_1;
   break;
  }
  VAR_8 = 0;
  if (VAR_7->sk_state != VAR_4) {
   FUNC_4(VAR_7);
   FUNC_6();
   FUNC_3(VAR_7);
  } else
   break;
 }
 FUNC_1(VAR_3);
 FUNC_5(VAR_7->sk_sleep, &VAR_6);
 return VAR_8;
}
