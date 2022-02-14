
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dst_entry {TYPE_3__* dev; } ;
struct TYPE_5__ {struct dst_entry dst; } ;
struct rtable {TYPE_2__ u; } ;
struct TYPE_4__ {int sysctl_icmp_ratemask; int sysctl_icmp_ratelimit; } ;
struct net {TYPE_1__ ipv4; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dst_entry*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct net *VAR_4, struct rtable *VAR_5,
  int VAR_6, int VAR_7)
{
 struct dst_entry *VAR_8 = &VAR_5->u.dst;
 int VAR_9 = 1;

 if (VAR_6 > VAR_3)
  goto out;


 if (VAR_6 == VAR_0 && VAR_7 == VAR_1)
  goto out;


 if (VAR_8->dev && (VAR_8->dev->flags&VAR_2))
  goto out;


 if ((1 << VAR_6) & VAR_4->ipv4.sysctl_icmp_ratemask)
  VAR_9 = FUNC_0(VAR_8, VAR_4->ipv4.sysctl_icmp_ratelimit);
out:
 return VAR_9;
}
