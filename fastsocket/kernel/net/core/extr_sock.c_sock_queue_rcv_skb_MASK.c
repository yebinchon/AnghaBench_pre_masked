
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; } ;
struct sock {scalar_t__ sk_rcvbuf; int (* sk_data_ready ) (struct sock*,int) ;int sk_drops; int sk_rmem_alloc; struct sk_buff_head sk_receive_queue; } ;
struct sk_buff {int len; scalar_t__ dropcount; int * dev; int truesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sk_buff*,struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct sock*,int) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;

int FUNC_10(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 unsigned long VAR_7;
 struct sk_buff_head *VAR_8 = &VAR_3->sk_receive_queue;

 if (FUNC_1(&VAR_3->sk_rmem_alloc) >= VAR_3->sk_rcvbuf) {
  VAR_5 = -VAR_1;
  FUNC_9(VAR_3, VAR_4);
  goto out;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  goto out;

 if (!FUNC_3(VAR_3, VAR_4->truesize)) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_4->dev = ((void*)0);
 FUNC_4(VAR_4, VAR_3);






 VAR_6 = VAR_4->len;

 FUNC_6(&VAR_8->lock, VAR_7);
 VAR_4->dropcount = FUNC_1(&VAR_3->sk_drops);
 FUNC_0(VAR_8, VAR_4);
 FUNC_7(&VAR_8->lock, VAR_7);

 if (!FUNC_5(VAR_3, VAR_2))
  VAR_3->sk_data_ready(VAR_3, VAR_6);
out:
 return VAR_5;
}
