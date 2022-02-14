
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_pinfo {struct ipv6_fl_socklist* ipv6_fl_list; } ;
struct ipv6_fl_socklist {struct ipv6_fl_socklist* next; struct ip6_flowlabel* fl; } ;
struct ip6_flowlabel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct ipv6_pinfo *VAR_1, struct ipv6_fl_socklist *VAR_2,
  struct ip6_flowlabel *VAR_3)
{
 FUNC_0(&VAR_0);
 VAR_2->fl = VAR_3;
 VAR_2->next = VAR_1->ipv6_fl_list;
 VAR_1->ipv6_fl_list = VAR_2;
 FUNC_1(&VAR_0);
}
