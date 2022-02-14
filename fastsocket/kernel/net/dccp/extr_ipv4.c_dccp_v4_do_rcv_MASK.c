
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int len; } ;
struct dccp_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sock*,struct sock*,struct sk_buff*) ;
 struct dccp_hdr* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sock*,struct sk_buff*,struct dccp_hdr*,int ) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*,struct dccp_hdr*,int ) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;

int FUNC_7(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct dccp_hdr *VAR_4 = FUNC_1(VAR_3);

 if (VAR_2->sk_state == VAR_1) {
  if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_3->len))
   goto reset;
  return 0;
 }
 if (VAR_2->sk_state == VAR_0) {
  struct sock *VAR_5 = FUNC_5(VAR_2, VAR_3);

  if (VAR_5 == ((void*)0))
   goto discard;

  if (VAR_5 != VAR_2) {
   if (FUNC_0(VAR_2, VAR_5, VAR_3))
    goto reset;
   return 0;
  }
 }

 if (FUNC_3(VAR_2, VAR_3, VAR_4, VAR_3->len))
  goto reset;
 return 0;

reset:
 FUNC_4(VAR_2, VAR_3);
discard:
 FUNC_6(VAR_3);
 return 0;
}
