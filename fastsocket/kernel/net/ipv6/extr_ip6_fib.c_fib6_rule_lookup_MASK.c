
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fib6_main_tbl; } ;
struct net {TYPE_1__ ipv6; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef scalar_t__ (* pol_lookup_t ) (struct net*,int ,struct flowi*,int) ;



struct dst_entry *FUNC_0(struct net *VAR_0, struct flowi *VAR_1,
       int VAR_2, pol_lookup_t VAR_3)
{
 return (struct dst_entry *) VAR_3(VAR_0, VAR_0->ipv6.fib6_main_tbl, VAR_1, VAR_2);
}
