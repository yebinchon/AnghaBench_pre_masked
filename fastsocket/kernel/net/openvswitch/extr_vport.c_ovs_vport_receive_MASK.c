
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport_percpu_stats {int sync; int rx_bytes; int rx_packets; } ;
struct vport {int percpu_stats; } ;
struct sk_buff {scalar_t__ len; } ;
struct ovs_key_ipv4_tunnel {int dummy; } ;
struct TYPE_2__ {struct ovs_key_ipv4_tunnel* tun_key; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct vport*,struct sk_buff*) ;
 struct vport_percpu_stats* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct vport *VAR_0, struct sk_buff *VAR_1,
         struct ovs_key_ipv4_tunnel *VAR_2)
{
 struct vport_percpu_stats *VAR_3;

 VAR_3 = FUNC_2(VAR_0->percpu_stats);
 FUNC_3(&VAR_3->sync);
 VAR_3->rx_packets++;
 VAR_3->rx_bytes += VAR_1->len;
 FUNC_4(&VAR_3->sync);

 FUNC_0(VAR_1)->tun_key = VAR_2;
 FUNC_1(VAR_0, VAR_1);
}
