
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct sk_buff {scalar_t__ protocol; int len; } ;
struct TYPE_2__ {scalar_t__ all; } ;
struct ipv6_pinfo {TYPE_1__ rxopt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sock*,struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_7 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ) ;
 struct ipv6_pinfo* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct ipv6_pinfo *VAR_6 = FUNC_9(VAR_4);
 struct sk_buff *VAR_7 = ((void*)0);
 if (VAR_5->protocol == FUNC_8(VAR_2))
  return FUNC_5(VAR_4, VAR_5);

 if (FUNC_11(VAR_4, VAR_5))
  goto discard;
 if (VAR_6->rxopt.all)




  VAR_7 = FUNC_12(VAR_5, VAR_3);

 if (VAR_4->sk_state == VAR_1) {
  if (FUNC_3(VAR_4, VAR_5, FUNC_2(VAR_5), VAR_5->len))
   goto reset;
  if (VAR_7) {

   FUNC_0(VAR_7);
  }
  return 0;
 }
 if (VAR_4->sk_state == VAR_0) {
  struct sock *VAR_8 = FUNC_7(VAR_4, VAR_5);

  if (VAR_8 == ((void*)0))
   goto discard;





  if (VAR_8 != VAR_4) {
   if (FUNC_1(VAR_4, VAR_8, VAR_5))
    goto reset;
   if (VAR_7 != ((void*)0))
    FUNC_0(VAR_7);
   return 0;
  }
 }

 if (FUNC_4(VAR_4, VAR_5, FUNC_2(VAR_5), VAR_5->len))
  goto reset;
 if (VAR_7) {

  FUNC_0(VAR_7);
 }
 return 0;

reset:
 FUNC_6(VAR_4, VAR_5);
discard:
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_7);
 FUNC_10(VAR_5);
 return 0;
}
