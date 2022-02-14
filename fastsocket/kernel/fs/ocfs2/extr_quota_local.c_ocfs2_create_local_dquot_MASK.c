
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_quota_chunk {int qc_headerbh; int qc_num; } ;
struct ocfs2_dquot {struct ocfs2_quota_chunk* dq_chunk; int dq_local_off; } ;
struct inode {int dummy; } ;
struct dquot {int dq_type; struct super_block* dq_sb; } ;
struct TYPE_2__ {struct inode** files; } ;


 scalar_t__ FUNC_0 (struct ocfs2_quota_chunk*) ;
 struct ocfs2_dquot* FUNC_1 (struct dquot*) ;
 int FUNC_2 (struct ocfs2_quota_chunk*) ;
 int FUNC_3 (int) ;
 struct ocfs2_quota_chunk* FUNC_4 (struct super_block*,int,int*) ;
 struct ocfs2_quota_chunk* FUNC_5 (struct super_block*,int,int*) ;
 int FUNC_6 (struct dquot*) ;
 int FUNC_7 (struct inode*,int ,int ,int*) ;
 int FUNC_8 (struct super_block*,int ,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_9 (struct super_block*) ;

__attribute__((used)) static int FUNC_10(struct dquot *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->dq_sb;
 int VAR_3 = VAR_1->dq_type;
 struct inode *VAR_4 = FUNC_9(VAR_2)->files[VAR_3];
 struct ocfs2_quota_chunk *VAR_5;
 struct ocfs2_dquot *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;
 int VAR_8;

 VAR_5 = FUNC_5(VAR_2, VAR_3, &VAR_7);
 if (!VAR_5) {
  VAR_5 = FUNC_4(VAR_2, VAR_3, &VAR_7);
  if (FUNC_0(VAR_5))
   return FUNC_2(VAR_5);
 } else if (FUNC_0(VAR_5)) {
  return FUNC_2(VAR_5);
 }
 VAR_6->dq_local_off = FUNC_8(VAR_2, VAR_5->qc_num, VAR_7);
 VAR_6->dq_chunk = VAR_5;


 VAR_8 = FUNC_6(VAR_1);
 if (VAR_8 < 0) {
  FUNC_3(VAR_8);
  goto out;
 }


 VAR_8 = FUNC_7(VAR_4, VAR_5->qc_headerbh, VAR_0,
     &VAR_7);
 if (VAR_8 < 0) {
  FUNC_3(VAR_8);
  goto out;
 }
out:
 return VAR_8;
}
