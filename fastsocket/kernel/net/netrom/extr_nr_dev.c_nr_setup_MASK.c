
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int type; int addr_len; scalar_t__ hard_header_len; int * header_ops; int * netdev_ops; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0(struct net_device *VAR_8)
{
 VAR_8->mtu = VAR_3;
 VAR_8->netdev_ops = &VAR_7;
 VAR_8->header_ops = &VAR_6;
 VAR_8->hard_header_len = VAR_4 + VAR_5;
 VAR_8->addr_len = VAR_1;
 VAR_8->type = VAR_0;


 VAR_8->flags = VAR_2;
}
