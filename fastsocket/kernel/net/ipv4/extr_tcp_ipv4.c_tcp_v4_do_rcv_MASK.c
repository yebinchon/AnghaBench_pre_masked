
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct sk_buff {scalar_t__ len; int rxhash; } ;


 int FUNC_0 (struct sock*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sock*,struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sock*,struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (struct sock*,struct sk_buff*,int ,scalar_t__) ;
 struct sock* FUNC_11 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sock*,struct sk_buff*) ;
 int FUNC_13 (struct sock*,struct sk_buff*) ;

int FUNC_14(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct sock *VAR_5;
 if (VAR_3->sk_state == VAR_0) {
  FUNC_0(VAR_3);
  if (FUNC_9(VAR_3, VAR_4, FUNC_7(VAR_4), VAR_4->len)) {
   VAR_5 = VAR_3;
   goto reset;
  }
  FUNC_0(VAR_3);
  return 0;
 }

 if (VAR_4->len < FUNC_8(VAR_4) || FUNC_5(VAR_4))
  goto csum_err;

 if (VAR_3->sk_state == VAR_1) {
  struct sock *VAR_6 = FUNC_11(VAR_3, VAR_4);
  if (!VAR_6)
   goto discard;

  if (VAR_6 != VAR_3) {
   FUNC_4(VAR_6, VAR_4->rxhash);
   if (FUNC_6(VAR_3, VAR_6, VAR_4)) {
    VAR_5 = VAR_6;
    goto reset;
   }
   return 0;
  }
 }

 FUNC_0(VAR_3);
 if (FUNC_10(VAR_3, VAR_4, FUNC_7(VAR_4), VAR_4->len)) {
  VAR_5 = VAR_3;
  goto reset;
 }
 FUNC_0(VAR_3);
 return 0;

reset:
 FUNC_13(VAR_5, VAR_4);
discard:
 FUNC_2(VAR_4);





 return 0;

csum_err:
 FUNC_1(FUNC_3(VAR_3), VAR_2);
 goto discard;
}
