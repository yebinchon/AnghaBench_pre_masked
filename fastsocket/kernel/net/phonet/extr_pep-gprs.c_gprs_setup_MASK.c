
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int tx_queue_len; int destructor; int * netdev_ops; scalar_t__ addr_len; scalar_t__ hard_header_len; int mtu; int type; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_7)
{
 VAR_7->features = VAR_4;
 VAR_7->type = VAR_0;
 VAR_7->flags = VAR_3 | VAR_2;
 VAR_7->mtu = VAR_1;
 VAR_7->hard_header_len = 0;
 VAR_7->addr_len = 0;
 VAR_7->tx_queue_len = 10;

 VAR_7->netdev_ops = &VAR_6;
 VAR_7->destructor = VAR_5;
}
