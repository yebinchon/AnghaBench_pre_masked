
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ipv6_pinfo {struct ipv6_fl_socklist* ipv6_fl_list; } ;
struct ipv6_fl_socklist {int fl; struct ipv6_fl_socklist* next; } ;


 int FUNC_0 (int ) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct ipv6_fl_socklist*) ;

void FUNC_3(struct sock *VAR_0)
{
 struct ipv6_pinfo *VAR_1 = FUNC_1(VAR_0);
 struct ipv6_fl_socklist *VAR_2;

 while ((VAR_2 = VAR_1->ipv6_fl_list) != ((void*)0)) {
  VAR_1->ipv6_fl_list = VAR_2->next;
  FUNC_0(VAR_2->fl);
  FUNC_2(VAR_2);
 }
}
