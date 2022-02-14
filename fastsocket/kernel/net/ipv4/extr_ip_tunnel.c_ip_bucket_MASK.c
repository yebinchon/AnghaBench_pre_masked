
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ daddr; } ;
struct ip_tunnel_parm {int i_key; TYPE_1__ iph; } ;
struct ip_tunnel_net {struct hlist_head* tunnels; } ;
struct hlist_head {int dummy; } ;
typedef scalar_t__ __be32 ;


 unsigned int FUNC_0 (struct ip_tunnel_net*,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct hlist_head *FUNC_2(struct ip_tunnel_net *VAR_0,
        struct ip_tunnel_parm *VAR_1)
{
 unsigned int VAR_2;
 __be32 VAR_3;

 if (VAR_1->iph.daddr && !FUNC_1(VAR_1->iph.daddr))
  VAR_3 = VAR_1->iph.daddr;
 else
  VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1->i_key, VAR_3);
 return &VAR_0->tunnels[VAR_2];
}
