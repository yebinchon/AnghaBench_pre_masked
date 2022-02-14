
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct net_device {int name; } ;
struct mpoa_client {int number_of_mps_macs; TYPE_1__* old_ops; scalar_t__ mps_macs; } ;
struct iphdr {int dummy; } ;
struct ethhdr {scalar_t__ h_proto; int h_dest; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int ihl; } ;
struct TYPE_3__ {int (* ndo_start_xmit ) (struct sk_buff*,struct net_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct mpoa_client* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct mpoa_client*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_4,
      struct net_device *VAR_5)
{
 struct mpoa_client *VAR_6;
 struct ethhdr *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_1(VAR_5);
 if(VAR_6 == ((void*)0)) {
  FUNC_4("mpoa: (%s) mpc_send_packet: no MPC found\n", VAR_5->name);
  goto non_ip;
 }

 VAR_7 = (struct ethhdr *)VAR_4->data;
 if (VAR_7->h_proto != FUNC_2(VAR_2))
  goto non_ip;


 if (VAR_4->len < VAR_1 + sizeof(struct iphdr))
  goto non_ip;
 FUNC_6(VAR_4, VAR_1);
 if (VAR_4->len < VAR_1 + FUNC_3(VAR_4)->ihl * 4 || FUNC_3(VAR_4)->ihl < 5)
  goto non_ip;

 while (VAR_8 < VAR_6->number_of_mps_macs) {
  if (!FUNC_0(VAR_7->h_dest, (VAR_6->mps_macs + VAR_8*VAR_0)))
   if ( FUNC_5(VAR_4, VAR_6) == 0 )
    return VAR_3;
  VAR_8++;
 }

 non_ip:
 return VAR_6->old_ops->ndo_start_xmit(VAR_4,VAR_5);
}
