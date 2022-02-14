
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_mem_dqinfo {int dummy; } ;
struct dquot {int dq_type; int dq_sb; int dq_id; } ;
typedef int handle_t ;
struct TYPE_2__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dquot*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct ocfs2_super*,int *) ;
 int FUNC_9 (struct ocfs2_mem_dqinfo*,int) ;
 int * FUNC_10 (struct ocfs2_super*,int ) ;
 int FUNC_11 (struct ocfs2_mem_dqinfo*,int) ;
 TYPE_1__* FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct dquot *VAR_0)
{
 handle_t *VAR_1;
 struct ocfs2_mem_dqinfo *VAR_2 =
   FUNC_12(VAR_0->dq_sb, VAR_0->dq_type)->dqi_priv;
 struct ocfs2_super *VAR_3 = FUNC_1(VAR_0->dq_sb);
 int VAR_4 = 0;

 FUNC_4("id=%u, type=%d", VAR_0->dq_id, VAR_0->dq_type);

 VAR_4 = FUNC_9(VAR_2, 1);
 if (VAR_4 < 0)
  goto out;
 VAR_1 = FUNC_10(VAR_3,
  FUNC_7(VAR_0->dq_sb, VAR_0->dq_type));
 if (FUNC_0(VAR_1)) {
  VAR_4 = FUNC_2(VAR_1);
  FUNC_5(VAR_4);
  goto out_ilock;
 }
 VAR_4 = FUNC_3(VAR_0);
 FUNC_8(VAR_3, VAR_1);
out_ilock:
 FUNC_11(VAR_2, 1);
out:
 FUNC_6(VAR_4);
 return VAR_4;
}
