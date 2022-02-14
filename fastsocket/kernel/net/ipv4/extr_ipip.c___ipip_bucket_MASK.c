
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipip_net {struct ip_tunnel*** tunnels; } ;
struct TYPE_2__ {scalar_t__ saddr; scalar_t__ daddr; } ;
struct ip_tunnel_parm {TYPE_1__ iph; } ;
struct ip_tunnel {int dummy; } ;
typedef scalar_t__ __be32 ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct ip_tunnel **FUNC_1(struct ipip_net *VAR_0,
  struct ip_tunnel_parm *VAR_1)
{
 __be32 VAR_2 = VAR_1->iph.daddr;
 __be32 VAR_3 = VAR_1->iph.saddr;
 unsigned VAR_4 = 0;
 int VAR_5 = 0;

 if (VAR_2) {
  VAR_5 |= 2;
  VAR_4 ^= FUNC_0(VAR_2);
 }
 if (VAR_3) {
  VAR_5 |= 1;
  VAR_4 ^= FUNC_0(VAR_3);
 }
 return &VAR_0->tunnels[VAR_5][VAR_4];
}
