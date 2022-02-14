
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_4__ {scalar_t__ icmpv6msg; scalar_t__ icmpv6; scalar_t__ ipv6; } ;
struct inet6_dev {TYPE_2__ stats; TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int FUNC_0 (struct seq_file*,char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct seq_file*,void**) ;
 int FUNC_2 (struct seq_file*,void**,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 struct inet6_dev *VAR_4 = (struct inet6_dev *)VAR_2->private;

 FUNC_0(VAR_2, "%-32s\t%u\n", "ifIndex", VAR_4->dev->ifindex);
 FUNC_2(VAR_2, (void **)VAR_4->stats.ipv6, VAR_1);
 FUNC_2(VAR_2, (void **)VAR_4->stats.icmpv6, VAR_0);
 FUNC_1(VAR_2, (void **)VAR_4->stats.icmpv6msg);
 return 0;
}
