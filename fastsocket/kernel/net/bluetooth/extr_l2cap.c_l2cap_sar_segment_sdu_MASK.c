
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int * sk_send_head; } ;
struct sk_buff_head {int * next; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
struct l2cap_pinfo {size_t max_pdu_size; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sock*,struct msghdr*,size_t,int ,size_t) ;
 struct l2cap_pinfo* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sk_buff_head*) ;
 int FUNC_8 (struct sk_buff_head*,int ) ;

__attribute__((used)) static inline int FUNC_9(struct sock *VAR_3, struct msghdr *VAR_4, size_t VAR_5)
{
 struct l2cap_pinfo *VAR_6 = FUNC_6(VAR_3);
 struct sk_buff *VAR_7;
 struct sk_buff_head VAR_8;
 u16 VAR_9;
 size_t VAR_10 = 0;

 FUNC_3(&VAR_8);
 VAR_9 = VAR_2;
 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_6->max_pdu_size, VAR_9, VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_4(&VAR_8, VAR_7);
 VAR_5 -= VAR_6->max_pdu_size;
 VAR_10 +=VAR_6->max_pdu_size;
 VAR_9 = 0;

 while (VAR_5 > 0) {
  size_t VAR_11;

  if (VAR_5 > VAR_6->max_pdu_size) {
   VAR_9 |= VAR_0;
   VAR_11 = VAR_6->max_pdu_size;
  } else {
   VAR_9 |= VAR_1;
   VAR_11 = VAR_5;
  }

  VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_11, VAR_9, 0);
  if (FUNC_0(VAR_7)) {
   FUNC_7(&VAR_8);
   return FUNC_1(VAR_7);
  }

  FUNC_4(&VAR_8, VAR_7);
  VAR_5 -= VAR_11;
  VAR_10 += VAR_11;
  VAR_9 = 0;
 }
 FUNC_8(&VAR_8, FUNC_2(VAR_3));
 if (VAR_3->sk_send_head == ((void*)0))
  VAR_3->sk_send_head = VAR_8.next;

 return VAR_10;
}
