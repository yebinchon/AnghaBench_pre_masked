
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_sleep; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 long FUNC_6 (long) ;
 scalar_t__ FUNC_7 (int ) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (long) ;
 int VAR_5 ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct sock *VAR_6, long *VAR_7)
{
 FUNC_0(VAR_5);
 struct sk_buff *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 FUNC_4(VAR_6->sk_sleep, &VAR_5, VAR_2);
 for(;;) {
  FUNC_5(VAR_6);
  VAR_8 = FUNC_8(&VAR_6->sk_receive_queue);
  if (VAR_8 == ((void*)0)) {
   *VAR_7 = FUNC_6(*VAR_7);
   VAR_8 = FUNC_8(&VAR_6->sk_receive_queue);
  }
  FUNC_3(VAR_6);
  if (VAR_8 != ((void*)0))
   break;
  VAR_9 = -VAR_1;
  if (VAR_6->sk_state != VAR_3)
   break;
  VAR_9 = FUNC_9(*VAR_7);
  if (FUNC_7(VAR_4))
   break;
  VAR_9 = -VAR_0;
  if (!*VAR_7)
   break;
  FUNC_4(VAR_6->sk_sleep, &VAR_5, VAR_2);
 }
 FUNC_2(VAR_6->sk_sleep, &VAR_5);

 return VAR_8 == ((void*)0) ? FUNC_1(VAR_9) : VAR_8;
}
