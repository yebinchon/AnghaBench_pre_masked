
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int priv_flags; int mtu; int hard_header_len; int type; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_5)
{
 VAR_5->netdev_ops = &VAR_4;
 VAR_5->type = VAR_0;
 VAR_5->hard_header_len = VAR_2;
 VAR_5->mtu = VAR_3;
 VAR_5->tx_queue_len = 100;





 VAR_5->priv_flags &= ~VAR_1;
}
