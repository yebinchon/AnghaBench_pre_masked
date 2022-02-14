
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ipv6_pinfo {struct ipv6_fl_socklist* ipv6_fl_list; } ;
struct ipv6_fl_socklist {struct ip6_flowlabel* fl; struct ipv6_fl_socklist* next; } ;
struct ip6_flowlabel {int users; int lastuse; int label; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct ip6_flowlabel * FUNC_4(struct sock *VAR_3, __be32 VAR_4)
{
 struct ipv6_fl_socklist *VAR_5;
 struct ipv6_pinfo *VAR_6 = FUNC_1(VAR_3);

 VAR_4 &= VAR_0;

 FUNC_2(&VAR_1);
 for (VAR_5=VAR_6->ipv6_fl_list; VAR_5; VAR_5 = VAR_5->next) {
  struct ip6_flowlabel *VAR_7 = VAR_5->fl;
  if (VAR_7->label == VAR_4) {
   VAR_7->lastuse = VAR_2;
   FUNC_0(&VAR_7->users);
   FUNC_3(&VAR_1);
   return VAR_7;
  }
 }
 FUNC_3(&VAR_1);
 return ((void*)0);
}
