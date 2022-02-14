
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ocfs2_refcount_rec {int dummy; } ;
struct TYPE_5__ {int rl_used; TYPE_2__* rl_recs; } ;
struct ocfs2_refcount_block {TYPE_1__ rf_records; } ;
struct TYPE_6__ {scalar_t__ r_refcount; int r_clusters; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ocfs2_refcount_block *VAR_0,
        int VAR_1)
{
 FUNC_0(VAR_0->rf_records.rl_recs[VAR_1].r_refcount !=
        VAR_0->rf_records.rl_recs[VAR_1+1].r_refcount);

 FUNC_3(&VAR_0->rf_records.rl_recs[VAR_1].r_clusters,
       FUNC_4(VAR_0->rf_records.rl_recs[VAR_1+1].r_clusters));

 if (VAR_1 < FUNC_2(VAR_0->rf_records.rl_used) - 2)
  FUNC_5(&VAR_0->rf_records.rl_recs[VAR_1 + 1],
   &VAR_0->rf_records.rl_recs[VAR_1 + 2],
   sizeof(struct ocfs2_refcount_rec) *
   (FUNC_2(VAR_0->rf_records.rl_used) - VAR_1 - 2));

 FUNC_6(&VAR_0->rf_records.rl_recs[FUNC_2(VAR_0->rf_records.rl_used) - 1],
        0, sizeof(struct ocfs2_refcount_rec));
 FUNC_1(&VAR_0->rf_records.rl_used, -1);
}
