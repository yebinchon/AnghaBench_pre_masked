
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dest; scalar_t__ syn; } ;
struct sk_buff {int mark; } ;
struct ip_vs_service {int dummy; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_iphdr {int daddr; int protocol; int len; } ;
struct ip_vs_conn {int dummy; } ;
typedef int _tcph ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct ip_vs_iphdr*) ;
 int FUNC_1 (struct ip_vs_service*,struct sk_buff*,struct ip_vs_protocol*) ;
 struct ip_vs_conn* FUNC_2 (struct ip_vs_service*,struct sk_buff*) ;
 struct ip_vs_service* FUNC_3 (int,int ,int ,int *,int ) ;
 int FUNC_4 (struct ip_vs_service*) ;
 scalar_t__ FUNC_5 () ;
 struct tcphdr* FUNC_6 (struct sk_buff*,int ,int,struct tcphdr*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_8(int VAR_1, struct sk_buff *VAR_2, struct ip_vs_protocol *VAR_3,
    int *VAR_4, struct ip_vs_conn **VAR_5)
{
 struct ip_vs_service *VAR_6;
 struct tcphdr VAR_7, *VAR_8;
 struct ip_vs_iphdr VAR_9;

 FUNC_0(VAR_1, FUNC_7(VAR_2), &VAR_9);

 VAR_8 = FUNC_6(VAR_2, VAR_9.len, sizeof(VAR_7), &VAR_7);
 if (VAR_8 == ((void*)0)) {
  *VAR_4 = VAR_0;
  return 0;
 }

 if (VAR_8->syn &&
     (VAR_6 = FUNC_3(VAR_1, VAR_2->mark, VAR_9.protocol, &VAR_9.daddr,
         VAR_8->dest))) {
  if (FUNC_5()) {




   FUNC_4(VAR_6);
   *VAR_4 = VAR_0;
   return 0;
  }





  *VAR_5 = FUNC_2(VAR_6, VAR_2);
  if (!*VAR_5) {
   *VAR_4 = FUNC_1(VAR_6, VAR_2, VAR_3);
   return 0;
  }
  FUNC_4(VAR_6);
 }
 return 1;
}
