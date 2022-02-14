
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int ip6_rt_max_size; int ip6_rt_gc_min_interval; int ip6_rt_gc_timeout; int ip6_rt_gc_interval; int ip6_rt_gc_elasticity; int ip6_rt_mtu_expires; int ip6_rt_min_advmss; scalar_t__ flush_delay; } ;
struct TYPE_15__ {int ip6_rt_gc_expire; TYPE_8__* ip6_null_entry; TYPE_8__* ip6_prohibit_entry; TYPE_6__ sysctl; int ip6_dst_ops; TYPE_5__* ip6_blk_hole_entry; } ;
struct net {TYPE_7__ ipv6; } ;
struct dst_entry {int dummy; } ;
struct TYPE_9__ {int * ops; struct dst_entry* path; } ;
struct TYPE_10__ {TYPE_1__ dst; } ;
struct TYPE_16__ {TYPE_2__ u; } ;
struct TYPE_11__ {int * ops; struct dst_entry* path; } ;
struct TYPE_12__ {TYPE_3__ dst; } ;
struct TYPE_13__ {TYPE_4__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_8__*) ;
 void* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_8)
{
 int VAR_9 = -VAR_0;

 FUNC_2(&VAR_8->ipv6.ip6_dst_ops, &VAR_5,
        sizeof(VAR_8->ipv6.ip6_dst_ops));

 VAR_8->ipv6.ip6_null_entry = FUNC_1(&VAR_6,
        sizeof(*VAR_8->ipv6.ip6_null_entry),
        VAR_1);
 if (!VAR_8->ipv6.ip6_null_entry)
  goto out_ip6_dst_ops;
 VAR_8->ipv6.ip6_null_entry->u.dst.path =
  (struct dst_entry *)VAR_8->ipv6.ip6_null_entry;
 VAR_8->ipv6.ip6_null_entry->u.dst.ops = &VAR_8->ipv6.ip6_dst_ops;
 VAR_8->ipv6.sysctl.flush_delay = 0;
 VAR_8->ipv6.sysctl.ip6_rt_max_size = 4096;
 VAR_8->ipv6.sysctl.ip6_rt_gc_min_interval = VAR_2 / 2;
 VAR_8->ipv6.sysctl.ip6_rt_gc_timeout = 60*VAR_2;
 VAR_8->ipv6.sysctl.ip6_rt_gc_interval = 30*VAR_2;
 VAR_8->ipv6.sysctl.ip6_rt_gc_elasticity = 9;
 VAR_8->ipv6.sysctl.ip6_rt_mtu_expires = 10*60*VAR_2;
 VAR_8->ipv6.sysctl.ip6_rt_min_advmss = VAR_3 - 20 - 40;

 VAR_8->ipv6.ip6_rt_gc_expire = 30*VAR_2;

 VAR_9 = 0;
out:
 return VAR_9;







out_ip6_dst_ops:
 goto out;
}
