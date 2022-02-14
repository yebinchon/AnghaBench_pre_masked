
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_shutdown; int sk_sleep; int sk_receive_queue; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_5 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int *) ;
 long FUNC_6 (long) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_7, long VAR_8)
{
 FUNC_0(VAR_6, VAR_5);
 int VAR_9 = 0;

 FUNC_2(VAR_7->sk_sleep, &VAR_6);
 for (;;) {
  FUNC_1(VAR_3);
  if (VAR_7->sk_shutdown & VAR_2)
   break;
  VAR_9 = -VAR_1;
  if (FUNC_7(VAR_5))
   break;
  VAR_9 = -VAR_0;
  if (!VAR_8)
   break;
  VAR_9 = 0;
  if (FUNC_8(&VAR_7->sk_receive_queue)) {
   FUNC_4(VAR_7);
   VAR_8 = FUNC_6(VAR_8);
   FUNC_3(VAR_7);
  } else
   break;
 }
 FUNC_1(VAR_4);
 FUNC_5(VAR_7->sk_sleep, &VAR_6);
 return VAR_9;
}
