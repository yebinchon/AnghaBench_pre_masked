
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_rcvbuf; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_2__ {int backlog_skb_q; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_4, struct sk_buff *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 struct sk_buff *VAR_10;

 VAR_7 = VAR_6;
 while (VAR_7) {
  if (VAR_7 >= VAR_4->sk_rcvbuf / 4)
   VAR_8 = VAR_4->sk_rcvbuf / 4;
  else
   VAR_8 = VAR_7;

  VAR_10 = FUNC_1(VAR_8, VAR_2 | VAR_3);
  if (!VAR_10)
   return -VAR_1;


  FUNC_3(FUNC_0(VAR_10), FUNC_0(VAR_5), VAR_0);


  FUNC_3(VAR_10->data, VAR_5->data + VAR_9, VAR_8);
  VAR_9 += VAR_8;
  VAR_7 -= VAR_8;

  FUNC_6(VAR_10);
  FUNC_5(VAR_10);
  VAR_10->len = VAR_8;

  FUNC_4(&FUNC_2(VAR_4)->backlog_skb_q, VAR_10);
 }

 return 0;
}
