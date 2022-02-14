
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int winsize_out; } ;
struct x25_sock {scalar_t__ state; int intflag; int condition; unsigned short vs; unsigned short va; int vr; int vl; int ack_queue; TYPE_1__ facilities; TYPE_2__* neighbour; int interrupt_out_queue; } ;
struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ extended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 struct x25_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sk_buff*,TYPE_2__*) ;

void FUNC_10(struct sock *VAR_6)
{
 struct sk_buff *VAR_7, *VAR_8;
 unsigned short VAR_9, VAR_10;
 int VAR_11;
 struct x25_sock *VAR_12 = FUNC_7(VAR_6);

 if (VAR_12->state != VAR_5)
  return;




 if (!VAR_12->intflag && FUNC_2(&VAR_12->interrupt_out_queue) != ((void*)0)) {
  VAR_12->intflag = 1;
  VAR_7 = FUNC_1(&VAR_12->interrupt_out_queue);
  FUNC_9(VAR_7, VAR_12->neighbour);
 }

 if (VAR_12->condition & VAR_2)
  return;

 if (!FUNC_2(&VAR_6->sk_write_queue))
  return;

 VAR_11 = VAR_12->neighbour->extended ? VAR_3 : VAR_4;

 VAR_9 = FUNC_2(&VAR_12->ack_queue) ? VAR_12->vs : VAR_12->va;
 VAR_10 = (VAR_12->va + VAR_12->facilities.winsize_out) % VAR_11;

 if (VAR_9 == VAR_10)
  return;

 VAR_12->vs = VAR_9;






 VAR_7 = FUNC_1(&VAR_6->sk_write_queue);

 do {
  if ((VAR_8 = FUNC_0(VAR_7, VAR_0)) == ((void*)0)) {
   FUNC_3(&VAR_6->sk_write_queue, VAR_7);
   break;
  }

  FUNC_5(VAR_8, VAR_6);




  FUNC_6(VAR_6, VAR_8);

  VAR_12->vs = (VAR_12->vs + 1) % VAR_11;




  FUNC_4(&VAR_12->ack_queue, VAR_7);

 } while (VAR_12->vs != VAR_10 &&
   (VAR_7 = FUNC_1(&VAR_6->sk_write_queue)) != ((void*)0));

 VAR_12->vl = VAR_12->vr;
 VAR_12->condition &= ~VAR_1;

 FUNC_8(VAR_6);
}
