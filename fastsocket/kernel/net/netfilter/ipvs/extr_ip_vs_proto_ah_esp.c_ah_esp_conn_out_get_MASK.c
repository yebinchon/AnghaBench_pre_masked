
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_protocol {int name; } ;
struct ip_vs_iphdr {int daddr; int saddr; } ;
struct ip_vs_conn_param {int dummy; } ;
struct ip_vs_conn {int dummy; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,char*,char*,int ,int ,int ) ;
 int FUNC_2 (int,struct ip_vs_iphdr const*,int,struct ip_vs_conn_param*) ;
 struct ip_vs_conn* FUNC_3 (struct ip_vs_conn_param*) ;

__attribute__((used)) static struct ip_vs_conn *
FUNC_4(int VAR_0, const struct sk_buff *VAR_1,
      struct ip_vs_protocol *VAR_2,
      const struct ip_vs_iphdr *VAR_3,
      unsigned int VAR_4,
      int VAR_5)
{
 struct ip_vs_conn *VAR_6;
 struct ip_vs_conn_param VAR_7;

 FUNC_2(VAR_0, VAR_3, VAR_5, &VAR_7);
 VAR_6 = FUNC_3(&VAR_7);
 if (!VAR_6) {
  FUNC_1(12, "Unknown ISAKMP entry for inout packet "
         "%s%s %s->%s\n",
         VAR_5 ? "ICMP+" : "",
         VAR_2->name,
         FUNC_0(VAR_0, &VAR_3->saddr),
         FUNC_0(VAR_0, &VAR_3->daddr));
 }

 return VAR_6;
}
