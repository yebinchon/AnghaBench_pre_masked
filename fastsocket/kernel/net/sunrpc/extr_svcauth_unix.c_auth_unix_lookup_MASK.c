
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct ip_map {scalar_t__ m_add_change; int h; TYPE_1__* m_client; } ;
struct in6_addr {int dummy; } ;
struct auth_domain {int ref; } ;
struct TYPE_2__ {scalar_t__ addr_changes; struct auth_domain h; } ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 struct ip_map* FUNC_2 (struct net*,char*,struct in6_addr*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

struct auth_domain *FUNC_5(struct net *VAR_1, struct in6_addr *VAR_2)
{
 struct ip_map *VAR_3;
 struct auth_domain *VAR_4;

 VAR_3 = FUNC_2(VAR_1, "nfsd", VAR_2);

 if (!VAR_3)
  return ((void*)0);
 if (FUNC_0(&VAR_0, &VAR_3->h, ((void*)0)))
  return ((void*)0);

 if ((VAR_3->m_client->addr_changes - VAR_3->m_add_change) >0) {
  FUNC_4(&VAR_3->h, &VAR_0);
  VAR_4 = ((void*)0);
 } else {
  VAR_4 = &VAR_3->m_client->h;
  FUNC_3(&VAR_4->ref);
 }
 FUNC_1(&VAR_3->h, &VAR_0);
 return VAR_4;
}
