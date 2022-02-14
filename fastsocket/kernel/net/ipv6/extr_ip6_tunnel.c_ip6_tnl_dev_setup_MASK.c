
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; int features; int flags; scalar_t__ mtu; scalar_t__ hard_header_len; int type; int destructor; int * netdev_ops; } ;
struct ipv6hdr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_7)
{
 VAR_7->netdev_ops = &VAR_6;
 VAR_7->destructor = VAR_5;

 VAR_7->type = VAR_0;
 VAR_7->hard_header_len = VAR_3 + sizeof (struct ipv6hdr);
 VAR_7->mtu = VAR_1 - sizeof (struct ipv6hdr);
 VAR_7->flags |= VAR_2;
 VAR_7->addr_len = sizeof(struct in6_addr);
 VAR_7->features |= VAR_4;
}
