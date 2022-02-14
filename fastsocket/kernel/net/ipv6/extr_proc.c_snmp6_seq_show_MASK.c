
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_2__ {scalar_t__ udplite_stats_in6; scalar_t__ udp_stats_in6; scalar_t__ icmpv6msg_statistics; scalar_t__ icmpv6_statistics; scalar_t__ ipv6_statistics; } ;
struct net {TYPE_1__ mib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,void**) ;
 int FUNC_1 (struct seq_file*,void**,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, void *VAR_5)
{
 struct net *VAR_6 = (struct net *)VAR_4->private;

 FUNC_1(VAR_4, (void **)VAR_6->mib.ipv6_statistics,
       VAR_1);
 FUNC_1(VAR_4, (void **)VAR_6->mib.icmpv6_statistics,
       VAR_0);
 FUNC_0(VAR_4, (void **)VAR_6->mib.icmpv6msg_statistics);
 FUNC_1(VAR_4, (void **)VAR_6->mib.udp_stats_in6,
       VAR_2);
 FUNC_1(VAR_4, (void **)VAR_6->mib.udplite_stats_in6,
       VAR_3);
 return 0;
}
