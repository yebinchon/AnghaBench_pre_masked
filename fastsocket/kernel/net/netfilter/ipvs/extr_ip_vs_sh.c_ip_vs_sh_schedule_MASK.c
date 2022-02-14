
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_sh_bucket {int dummy; } ;
struct ip_vs_service {int af; scalar_t__ sched_data; } ;
struct ip_vs_iphdr {int saddr; } ;
struct ip_vs_dest {int flags; int port; int addr; int weight; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,struct ip_vs_iphdr*) ;
 struct ip_vs_dest* FUNC_6 (int ,struct ip_vs_sh_bucket*,int *) ;
 scalar_t__ FUNC_7 (struct ip_vs_dest*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff const*) ;

__attribute__((used)) static struct ip_vs_dest *
FUNC_10(struct ip_vs_service *VAR_1, const struct sk_buff *VAR_2)
{
 struct ip_vs_dest *VAR_3;
 struct ip_vs_sh_bucket *VAR_4;
 struct ip_vs_iphdr VAR_5;

 FUNC_5(VAR_1->af, FUNC_9(VAR_2), &VAR_5);

 FUNC_0(6, "ip_vs_sh_schedule(): Scheduling...\n");

 VAR_4 = (struct ip_vs_sh_bucket *)VAR_1->sched_data;
 VAR_3 = FUNC_6(VAR_1->af, VAR_4, &VAR_5.saddr);
 if (!VAR_3
     || !(VAR_3->flags & VAR_0)
     || FUNC_4(&VAR_3->weight) <= 0
     || FUNC_7(VAR_3)) {
  FUNC_3("SH: no destination available\n");
  return ((void*)0);
 }

 FUNC_2(6, "SH: source IP address %s --> server %s:%d\n",
        FUNC_1(VAR_1->af, &VAR_5.saddr),
        FUNC_1(VAR_1->af, &VAR_3->addr),
        FUNC_8(VAR_3->port));

 return VAR_3;
}
