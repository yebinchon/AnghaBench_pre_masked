
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int qm_dqfrlist_cnt; int qm_dqfree_ratio; int qm_totaldquots; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{

 FUNC_1(VAR_2, "%d\t%d\t%d\t%u\n",
   VAR_0,
   VAR_1? FUNC_0(&VAR_1->qm_totaldquots) : 0,
   VAR_1? VAR_1->qm_dqfree_ratio : 0,
   VAR_1? VAR_1->qm_dqfrlist_cnt : 0);
 return 0;
}
