
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_tunnel_prl_entry {scalar_t__ addr; struct ip_tunnel_prl_entry* next; } ;
struct ip_tunnel {struct ip_tunnel_prl_entry* prl; } ;
typedef scalar_t__ __be32 ;



__attribute__((used)) static struct ip_tunnel_prl_entry *
FUNC_0(struct ip_tunnel *VAR_0, __be32 VAR_1)
{
 struct ip_tunnel_prl_entry *VAR_2 = (struct ip_tunnel_prl_entry *)((void*)0);

 for (VAR_2 = VAR_0->prl; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->addr == VAR_1)
   break;
 return VAR_2;

}
