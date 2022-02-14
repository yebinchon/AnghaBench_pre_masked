
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct dccp_hdr {int dccph_dport; int dccph_sport; } ;


 scalar_t__ VAR_0 ;
 struct sock* FUNC_0 (int ,int *,int *,int ,int *,int ,int ) ;
 int FUNC_1 (struct sock*) ;
 struct sock* FUNC_2 (struct sock*,struct sk_buff*,struct request_sock*,struct request_sock**) ;
 int VAR_1 ;
 struct dccp_hdr* FUNC_3 (struct sk_buff*) ;
 struct request_sock* FUNC_4 (struct sock*,struct request_sock***,int ,int *,int *,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int ) ;
 struct ipv6hdr* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_11(struct sock *VAR_2,struct sk_buff *VAR_3)
{
 const struct dccp_hdr *VAR_4 = FUNC_3(VAR_3);
 const struct ipv6hdr *VAR_5 = FUNC_8(VAR_3);
 struct sock *VAR_6;
 struct request_sock **VAR_7;

 struct request_sock *VAR_8 = FUNC_4(VAR_2, &VAR_7,
       VAR_4->dccph_sport,
       &VAR_5->saddr,
       &VAR_5->daddr,
       FUNC_5(VAR_3));
 if (VAR_8 != ((void*)0))
  return FUNC_2(VAR_2, VAR_3, VAR_8, VAR_7);

 VAR_6 = FUNC_0(FUNC_10(VAR_2), &VAR_1,
      &VAR_5->saddr, VAR_4->dccph_sport,
      &VAR_5->daddr, FUNC_9(VAR_4->dccph_dport),
      FUNC_5(VAR_3));
 if (VAR_6 != ((void*)0)) {
  if (VAR_6->sk_state != VAR_0) {
   FUNC_1(VAR_6);
   return VAR_6;
  }
  FUNC_7(FUNC_6(VAR_6));
  return ((void*)0);
 }

 return VAR_2;
}
