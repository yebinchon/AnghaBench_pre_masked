
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; int features; scalar_t__ iflink; int priv_flags; int flags; scalar_t__ mtu; scalar_t__ hard_header_len; int type; int destructor; int * netdev_ops; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_8)
{
 VAR_8->netdev_ops = &VAR_7;
 VAR_8->destructor = VAR_6;

 VAR_8->type = VAR_0;
 VAR_8->hard_header_len = VAR_4 + sizeof(struct iphdr);
 VAR_8->mtu = VAR_1 - sizeof(struct iphdr);
 VAR_8->flags = VAR_2;
 VAR_8->priv_flags &= ~VAR_3;
 VAR_8->iflink = 0;
 VAR_8->addr_len = 4;
 VAR_8->features |= VAR_5;
}
