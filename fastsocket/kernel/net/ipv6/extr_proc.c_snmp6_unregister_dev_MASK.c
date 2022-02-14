
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int proc_net_devsnmp6; } ;
struct net {TYPE_1__ mib; } ;
struct TYPE_6__ {TYPE_2__* proc_dir_entry; } ;
struct inet6_dev {TYPE_3__ stats; int dev; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct inet6_dev *VAR_2)
{
 struct net *VAR_3 = FUNC_0(VAR_2->dev);
 if (!VAR_3->mib.proc_net_devsnmp6)
  return -VAR_1;
 if (!VAR_2 || !VAR_2->stats.proc_dir_entry)
  return -VAR_0;
 FUNC_1(VAR_2->stats.proc_dir_entry->name,
     VAR_3->mib.proc_net_devsnmp6);
 VAR_2->stats.proc_dir_entry = ((void*)0);
 return 0;
}
