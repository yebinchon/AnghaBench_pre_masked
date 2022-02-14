
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int s_blocksize_bits; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_mem_dqinfo {int dqi_gi; struct inode* dqi_gqinode; } ;
struct inode {scalar_t__ i_size; } ;
struct TYPE_6__ {int dqb_curinodes; int dqb_curspace; } ;
struct dquot {int dq_type; struct super_block* dq_sb; int dq_off; TYPE_1__ dq_dqb; } ;
typedef int handle_t ;
struct TYPE_9__ {int dq_originodes; int dq_origspace; int dq_use_count; } ;
struct TYPE_8__ {int ip_alloc_sem; } ;
struct TYPE_7__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (struct dquot*) ;
 TYPE_4__* FUNC_2 (struct inode*) ;
 struct ocfs2_super* FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct super_block*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct super_block*,int) ;
 int FUNC_12 (struct ocfs2_super*,int *) ;
 int FUNC_13 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct super_block*,int) ;
 int FUNC_15 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_16 (struct ocfs2_mem_dqinfo*,int) ;
 int * FUNC_17 (struct ocfs2_super*,int ) ;
 int FUNC_18 (int *,struct dquot*) ;
 int FUNC_19 (int *,struct dquot*) ;
 TYPE_2__* FUNC_20 (struct super_block*,int) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct dquot *VAR_0)
{
 int VAR_1, VAR_2, VAR_3 = 0;
 struct super_block *VAR_4 = VAR_0->dq_sb;
 int VAR_5 = VAR_0->dq_type;
 struct ocfs2_mem_dqinfo *VAR_6 = FUNC_20(VAR_4, VAR_5)->dqi_priv;
 struct ocfs2_super *VAR_7 = FUNC_3(VAR_4);
 struct inode *VAR_8 = VAR_6->dqi_gqinode;
 int VAR_9 = FUNC_14(VAR_4, VAR_5);
 handle_t *VAR_10 = ((void*)0);

 VAR_1 = FUNC_15(VAR_6, 0);
 if (VAR_1 < 0)
  goto out;
 VAR_1 = FUNC_18(&VAR_6->dqi_gi, VAR_0);
 if (VAR_1 < 0)
  goto out_qlock;
 FUNC_1(VAR_0)->dq_use_count++;
 FUNC_1(VAR_0)->dq_origspace = VAR_0->dq_dqb.dqb_curspace;
 FUNC_1(VAR_0)->dq_originodes = VAR_0->dq_dqb.dqb_curinodes;
 FUNC_16(VAR_6, 0);

 if (!VAR_0->dq_off) {
  VAR_3 = 1;




  FUNC_5(FUNC_9());
  FUNC_7(&FUNC_2(VAR_8)->ip_alloc_sem);
  VAR_1 = FUNC_13(VAR_8,
   VAR_8->i_size + (VAR_9 << VAR_4->s_blocksize_bits),
   VAR_8->i_size);
  FUNC_21(&FUNC_2(VAR_8)->ip_alloc_sem);
  if (VAR_1 < 0)
   goto out;
 }

 VAR_10 = FUNC_17(VAR_7,
       FUNC_11(VAR_4, VAR_5));
 if (FUNC_0(VAR_10)) {
  VAR_1 = FUNC_4(VAR_10);
  goto out;
 }
 VAR_1 = FUNC_15(VAR_6, VAR_3);
 if (VAR_1 < 0)
  goto out_trans;
 VAR_1 = FUNC_19(&VAR_6->dqi_gi, VAR_0);
 if (VAR_3 && FUNC_8(FUNC_20(VAR_0->dq_sb, VAR_0->dq_type))) {
  VAR_2 = FUNC_6(VAR_0->dq_sb, VAR_0->dq_type);
  if (!VAR_1)
   VAR_1 = VAR_2;
 }
out_qlock:
 if (VAR_3)
  FUNC_16(VAR_6, 1);
 else
  FUNC_16(VAR_6, 0);
out_trans:
 if (VAR_10)
  FUNC_12(VAR_7, VAR_10);
out:
 if (VAR_1 < 0)
  FUNC_10(VAR_1);
 return VAR_1;
}
