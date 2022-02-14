
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rl_recs; } ;
struct ocfs2_refcount_block {TYPE_2__ rf_records; } ;
typedef enum ocfs2_ref_rec_contig { ____Placeholder_ocfs2_ref_rec_contig } ocfs2_ref_rec_contig ;
struct TYPE_3__ {scalar_t__ r_refcount; int r_cpos; int r_clusters; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static enum ocfs2_ref_rec_contig
 FUNC_2(struct ocfs2_refcount_block *VAR_2,
        int VAR_3)
{
 if ((VAR_2->rf_records.rl_recs[VAR_3].r_refcount ==
     VAR_2->rf_records.rl_recs[VAR_3 + 1].r_refcount) &&
     (FUNC_1(VAR_2->rf_records.rl_recs[VAR_3].r_cpos) +
     FUNC_0(VAR_2->rf_records.rl_recs[VAR_3].r_clusters) ==
     FUNC_1(VAR_2->rf_records.rl_recs[VAR_3 + 1].r_cpos)))
  return VAR_1;

 return VAR_0;
}
