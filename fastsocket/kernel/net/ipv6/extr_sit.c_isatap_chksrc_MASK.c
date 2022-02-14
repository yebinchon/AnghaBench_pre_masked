
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int ndisc_nodetype; } ;
struct iphdr {scalar_t__ saddr; } ;
struct ip_tunnel_prl_entry {int flags; } ;
struct ip_tunnel {int dev; } ;
struct in6_addr {scalar_t__* s6_addr32; } ;
struct TYPE_2__ {struct in6_addr saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ip_tunnel_prl_entry* FUNC_0 (struct ip_tunnel*,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 scalar_t__ FUNC_2 (struct in6_addr*,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_5, struct iphdr *VAR_6, struct ip_tunnel *VAR_7)
{
 struct ip_tunnel_prl_entry *VAR_8;
 int VAR_9 = 1;

 FUNC_4(&VAR_4);
 VAR_8 = FUNC_0(VAR_7, VAR_6->saddr);
 if (VAR_8) {
  if (VAR_8->flags & VAR_3)
   VAR_5->ndisc_nodetype = VAR_0;
  else
   VAR_5->ndisc_nodetype = VAR_2;
 } else {
  struct in6_addr *VAR_10 = &FUNC_3(VAR_5)->saddr;
  if (FUNC_1(VAR_10) &&
      (VAR_10->s6_addr32[3] == VAR_6->saddr) &&
      FUNC_2(VAR_10, VAR_7->dev))
   VAR_5->ndisc_nodetype = VAR_1;
  else
   VAR_9 = 0;
 }
 FUNC_5(&VAR_4);
 return VAR_9;
}
