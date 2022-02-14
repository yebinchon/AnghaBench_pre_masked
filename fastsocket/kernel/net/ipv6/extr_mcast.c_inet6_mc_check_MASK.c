
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ipv6_pinfo {struct ipv6_mc_socklist* ipv6_mc_list; } ;
struct ipv6_mc_socklist {scalar_t__ sfmode; int sflock; struct ip6_sf_socklist* sflist; int addr; struct ipv6_mc_socklist* next; } ;
struct ip6_sf_socklist {int sl_count; int * sl_addr; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int *,struct in6_addr const*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct sock *VAR_3, const struct in6_addr *VAR_4,
     const struct in6_addr *VAR_5)
{
 struct ipv6_pinfo *VAR_6 = FUNC_0(VAR_3);
 struct ipv6_mc_socklist *VAR_7;
 struct ip6_sf_socklist *VAR_8;
 int VAR_9 = 1;

 FUNC_2(&VAR_2);
 for (VAR_7 = VAR_6->ipv6_mc_list; VAR_7; VAR_7 = VAR_7->next) {
  if (FUNC_1(&VAR_7->addr, VAR_4))
   break;
 }
 if (!VAR_7) {
  FUNC_3(&VAR_2);
  return 1;
 }
 FUNC_2(&VAR_7->sflock);
 VAR_8 = VAR_7->sflist;
 if (!VAR_8) {
  VAR_9 = VAR_7->sfmode == VAR_0;
 } else {
  int VAR_10;

  for (VAR_10=0; VAR_10<VAR_8->sl_count; VAR_10++) {
   if (FUNC_1(&VAR_8->sl_addr[VAR_10], VAR_5))
    break;
  }
  if (VAR_7->sfmode == VAR_1 && VAR_10 >= VAR_8->sl_count)
   VAR_9 = 0;
  if (VAR_7->sfmode == VAR_0 && VAR_10 < VAR_8->sl_count)
   VAR_9 = 0;
 }
 FUNC_3(&VAR_7->sflock);
 FUNC_3(&VAR_2);

 return VAR_9;
}
