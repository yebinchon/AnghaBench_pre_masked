
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_mem_dqinfo {int dummy; } ;
struct dquot {int dq_type; unsigned long dq_flags; int dq_id; struct super_block* dq_sb; } ;
typedef int handle_t ;
struct TYPE_2__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct dquot*) ;
 int FUNC_4 (struct dquot*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ocfs2_super*,int *) ;
 int FUNC_10 (struct ocfs2_mem_dqinfo*,int) ;
 int * FUNC_11 (struct ocfs2_super*,int ) ;
 int FUNC_12 (struct dquot*) ;
 int FUNC_13 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_14 (struct dquot*) ;
 TYPE_1__* FUNC_15 (struct super_block*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct dquot *VAR_9)
{
 unsigned long VAR_10 = (1 << (VAR_0 + VAR_4)) |
        (1 << (VAR_0 + VAR_2)) |
        (1 << (VAR_0 + VAR_5)) |
        (1 << (VAR_0 + VAR_7)) |
        (1 << (VAR_0 + VAR_3)) |
        (1 << (VAR_0 + VAR_6));
 int VAR_11 = 0;
 int VAR_12;
 struct super_block *VAR_13 = VAR_9->dq_sb;
 int VAR_14 = VAR_9->dq_type;
 struct ocfs2_mem_dqinfo *VAR_15 = FUNC_15(VAR_13, VAR_14)->dqi_priv;
 handle_t *VAR_16;
 struct ocfs2_super *VAR_17 = FUNC_1(VAR_13);

 FUNC_6("id=%u, type=%d", VAR_9->dq_id, VAR_14);
 FUNC_4(VAR_9);



 FUNC_16(&VAR_8);
 if (VAR_9->dq_flags & VAR_10)
  VAR_11 = 1;
 FUNC_17(&VAR_8);


 if (!VAR_11 || FUNC_5()) {
  VAR_12 = FUNC_14(VAR_9);
  goto out;
 }
 VAR_12 = FUNC_10(VAR_15, 1);
 if (VAR_12 < 0)
  goto out;
 VAR_16 = FUNC_11(VAR_17, VAR_1);
 if (FUNC_0(VAR_16)) {
  VAR_12 = FUNC_2(VAR_16);
  FUNC_7(VAR_12);
  goto out_ilock;
 }
 VAR_12 = FUNC_12(VAR_9);
 if (VAR_12 < 0) {
  FUNC_7(VAR_12);
  goto out_trans;
 }

 VAR_12 = FUNC_3(VAR_9);
out_trans:
 FUNC_9(VAR_17, VAR_16);
out_ilock:
 FUNC_13(VAR_15, 1);
out:
 FUNC_8(VAR_12);
 return VAR_12;
}
