
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int tx_queue_len; int flags; int broadcast; int addr_len; int mtu; int hard_header_len; int type; int * header_ops; } ;
struct TYPE_2__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_8)
{
 VAR_8->header_ops = &VAR_7;
 VAR_8->type = VAR_0;
 VAR_8->hard_header_len = VAR_3;
 VAR_8->mtu = VAR_2;
 VAR_8->addr_len = VAR_1;
 VAR_8->tx_queue_len = 1000;
 VAR_8->flags = VAR_4|VAR_5;
 FUNC_1(VAR_8)->ext_priv_flags = VAR_6;

 FUNC_0(VAR_8->broadcast, 0xFF, VAR_1);

}
