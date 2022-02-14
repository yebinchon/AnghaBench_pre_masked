
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_iphdr {int saddr; int daddr; int protocol; } ;
struct ip_vs_conn_param {int dummy; } ;
typedef int _ports ;
typedef int __be16 ;


 int FUNC_0 (int,int ,int *,int ,int *,int ,struct ip_vs_conn_param*) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (struct sk_buff const*,unsigned int,int,int *) ;

__attribute__((used)) static int
FUNC_3(int VAR_0, const struct sk_buff *VAR_1,
       const struct ip_vs_iphdr *VAR_2,
       unsigned int VAR_3, int VAR_4,
       struct ip_vs_conn_param *VAR_5)
{
 __be16 VAR_6[2], *VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_3, sizeof(VAR_6), VAR_6);
 if (VAR_7 == ((void*)0))
  return 1;

 if (FUNC_1(!VAR_4))
  FUNC_0(VAR_0, VAR_2->protocol, &VAR_2->saddr, VAR_7[0],
          &VAR_2->daddr, VAR_7[1], VAR_5);
 else
  FUNC_0(VAR_0, VAR_2->protocol, &VAR_2->daddr, VAR_7[1],
          &VAR_2->saddr, VAR_7[0], VAR_5);
 return 0;
}
