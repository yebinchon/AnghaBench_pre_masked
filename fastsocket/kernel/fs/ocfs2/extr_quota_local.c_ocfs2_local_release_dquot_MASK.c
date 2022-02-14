
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_local_disk_chunk {int dqc_free; int dqc_bitmap; } ;
struct ocfs2_dquot {TYPE_1__* dq_chunk; int dq_local_off; } ;
struct dquot {int dq_type; int dq_flags; struct super_block* dq_sb; } ;
typedef int handle_t ;
struct TYPE_9__ {int * files; } ;
struct TYPE_8__ {scalar_t__ b_data; } ;
struct TYPE_7__ {TYPE_2__* qc_headerbh; int qc_num; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct ocfs2_dquot* FUNC_2 (struct dquot*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct dquot*) ;
 int FUNC_10 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 int FUNC_12 (struct super_block*,int ,int ) ;
 TYPE_3__* FUNC_13 (struct super_block*) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_15(struct dquot *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2->dq_type;
 struct ocfs2_dquot *VAR_5 = FUNC_2(VAR_2);
 struct super_block *VAR_6 = VAR_2->dq_sb;
 struct ocfs2_local_disk_chunk *VAR_7;
 int VAR_8;
 handle_t *VAR_9 = FUNC_4();

 FUNC_0(!VAR_9);

 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3 < 0) {
  FUNC_7(VAR_3);
  goto out;
 }

 VAR_3 = FUNC_10(VAR_9,
   FUNC_1(FUNC_13(VAR_6)->files[VAR_4]),
   VAR_5->dq_chunk->qc_headerbh, VAR_1);
 if (VAR_3 < 0) {
  FUNC_7(VAR_3);
  goto out;
 }
 VAR_8 = FUNC_12(VAR_6, VAR_5->dq_chunk->qc_num,
          VAR_5->dq_local_off);
 VAR_7 = (struct ocfs2_local_disk_chunk *)
   (VAR_5->dq_chunk->qc_headerbh->b_data);

 FUNC_6(VAR_5->dq_chunk->qc_headerbh);
 FUNC_8(VAR_8, VAR_7->dqc_bitmap);
 FUNC_5(&VAR_7->dqc_free, 1);
 FUNC_14(VAR_5->dq_chunk->qc_headerbh);
 VAR_3 = FUNC_11(VAR_9, VAR_5->dq_chunk->qc_headerbh);
 if (VAR_3 < 0) {
  FUNC_7(VAR_3);
  goto out;
 }
 VAR_3 = 0;
out:



 FUNC_3(VAR_0, &VAR_2->dq_flags);
 return VAR_3;
}
