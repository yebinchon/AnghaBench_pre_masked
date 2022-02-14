
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_6__ {int gpnum; int completed; } ;
struct TYPE_5__ {int gpnum; int completed; } ;
struct TYPE_4__ {int gpnum; int completed; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_3, void *VAR_4)
{




 FUNC_0(VAR_3, "rcu_sched: completed=%ld  gpnum=%ld\n",
     VAR_2.completed, VAR_2.gpnum);
 FUNC_0(VAR_3, "rcu_bh: completed=%ld  gpnum=%ld\n",
     VAR_0.completed, VAR_0.gpnum);
 return 0;
}
