
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; } ;
struct sock {struct sk_buff_head sk_receive_queue; } ;
struct sk_buff {unsigned int len; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 struct sk_buff* FUNC_9 (struct sk_buff_head*) ;
 int FUNC_10 (struct sk_buff_head*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_15(struct sock *VAR_1)
{
 struct sk_buff_head VAR_2, *VAR_3 = &VAR_1->sk_receive_queue;
 struct sk_buff *VAR_4;
 unsigned int VAR_5;

 FUNC_2(&VAR_2);

 FUNC_12(&VAR_3->lock);
 while ((VAR_4 = FUNC_9(VAR_3)) != ((void*)0) &&
  FUNC_14(VAR_4)) {
  FUNC_1(FUNC_11(VAR_1), VAR_0,
     FUNC_0(VAR_1));
  FUNC_5(VAR_4, VAR_3);
  FUNC_4(&VAR_2, VAR_4);
 }
 VAR_5 = VAR_4 ? VAR_4->len : 0;
 FUNC_13(&VAR_3->lock);

 if (!FUNC_10(&VAR_2)) {
  FUNC_6(VAR_1);
  FUNC_3(&VAR_2);
  FUNC_8(VAR_1);
  FUNC_7(VAR_1);
 }
 return VAR_5;
}
