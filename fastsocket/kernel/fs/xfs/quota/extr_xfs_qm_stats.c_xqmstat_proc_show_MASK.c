
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int xs_qm_dqinact_reclaims; int xs_qm_dqshake_reclaims; int xs_qm_dqwants; int xs_qm_dqcachehits; int xs_qm_dqcachemisses; int xs_qm_dquot_dups; int xs_qm_dqreclaim_misses; int xs_qm_dqreclaims; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{

 FUNC_0(VAR_1, "qm %u %u %u %u %u %u %u %u\n",
   VAR_0.xs_qm_dqreclaims,
   VAR_0.xs_qm_dqreclaim_misses,
   VAR_0.xs_qm_dquot_dups,
   VAR_0.xs_qm_dqcachemisses,
   VAR_0.xs_qm_dqcachehits,
   VAR_0.xs_qm_dqwants,
   VAR_0.xs_qm_dqshake_reclaims,
   VAR_0.xs_qm_dqinact_reclaims);
 return 0;
}
