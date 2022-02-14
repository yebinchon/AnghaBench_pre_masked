
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_id; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_mem_dqinfo {int dummy; } ;
struct dquot {unsigned long dq_type; int dq_id; struct super_block* dq_sb; } ;
typedef int handle_t ;
struct TYPE_4__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;
struct TYPE_3__ {int dqio_mutex; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dquot*) ;
 int FUNC_4 (struct dquot*) ;
 int FUNC_5 (char*,int ,unsigned long,unsigned long,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ocfs2_super*,int *) ;
 int FUNC_11 (struct ocfs2_mem_dqinfo*,int) ;
 int * FUNC_12 (struct ocfs2_super*,int ) ;
 int FUNC_13 (struct dquot*) ;
 int FUNC_14 (struct ocfs2_mem_dqinfo*,int) ;
 TYPE_2__* FUNC_15 (struct super_block*,unsigned long) ;
 TYPE_1__* FUNC_16 (struct super_block*) ;

__attribute__((used)) static int FUNC_17(struct dquot *VAR_1, unsigned long VAR_2)
{
 handle_t *VAR_3;
 struct super_block *VAR_4 = VAR_1->dq_sb;
 struct ocfs2_mem_dqinfo *VAR_5 = FUNC_15(VAR_4, VAR_2)->dqi_priv;
 struct ocfs2_super *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = 0;

 FUNC_5("id=%u qtype=%u type=%lu device=%s\n", VAR_1->dq_id,
     VAR_1->dq_type, VAR_2, VAR_4->s_id);
 if (VAR_2 != VAR_1->dq_type)
  goto out;
 VAR_7 = FUNC_11(VAR_5, 1);
 if (VAR_7 < 0)
  goto out;

 VAR_3 = FUNC_12(VAR_6, VAR_0);
 if (FUNC_0(VAR_3)) {
  VAR_7 = FUNC_2(VAR_3);
  FUNC_6(VAR_7);
  goto out_ilock;
 }
 FUNC_8(&FUNC_16(VAR_4)->dqio_mutex);
 VAR_7 = FUNC_13(VAR_1);
 FUNC_9(&FUNC_16(VAR_4)->dqio_mutex);
 if (VAR_7 < 0)
  FUNC_6(VAR_7);

 FUNC_4(VAR_1);
 VAR_7 = FUNC_3(VAR_1);
 if (VAR_7 < 0)
  FUNC_6(VAR_7);
 FUNC_10(VAR_6, VAR_3);
out_ilock:
 FUNC_14(VAR_5, 1);
out:
 FUNC_7(VAR_7);
 return VAR_7;
}
