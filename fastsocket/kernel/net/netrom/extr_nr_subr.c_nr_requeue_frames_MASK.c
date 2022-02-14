
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int ack_queue; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff*,int *) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;

void FUNC_4(struct sock *VAR_0)
{
 struct sk_buff *VAR_1, *VAR_2 = ((void*)0);

 while ((VAR_1 = FUNC_2(&FUNC_0(VAR_0)->ack_queue)) != ((void*)0)) {
  if (VAR_2 == ((void*)0))
   FUNC_3(&VAR_0->sk_write_queue, VAR_1);
  else
   FUNC_1(VAR_2, VAR_1, &VAR_0->sk_write_queue);
  VAR_2 = VAR_1;
 }
}
