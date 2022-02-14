
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_rt_cache_rebuild_count; scalar_t__ sysctl_rt_cache_rebuild_count; } ;
struct net {TYPE_1__ ipv4; } ;



__attribute__((used)) static inline bool FUNC_0(const struct net *VAR_0)
{
 return VAR_0->ipv4.current_rt_cache_rebuild_count <=
  VAR_0->ipv4.sysctl_rt_cache_rebuild_count;
}
