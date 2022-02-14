
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_iphdr {int dummy; } ;
struct ip_vs_conn_param {int dummy; } ;
struct ip_vs_conn {int dummy; } ;


 scalar_t__ FUNC_0 (int,struct sk_buff const*,struct ip_vs_iphdr const*,unsigned int,int,struct ip_vs_conn_param*) ;
 struct ip_vs_conn* FUNC_1 (struct ip_vs_conn_param*) ;

struct ip_vs_conn *
FUNC_2(int VAR_0, const struct sk_buff *VAR_1,
   struct ip_vs_protocol *VAR_2,
   const struct ip_vs_iphdr *VAR_3,
   unsigned int VAR_4, int VAR_5)
{
 struct ip_vs_conn_param VAR_6;

 if (FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5, &VAR_6))
  return ((void*)0);

 return FUNC_1(&VAR_6);
}
