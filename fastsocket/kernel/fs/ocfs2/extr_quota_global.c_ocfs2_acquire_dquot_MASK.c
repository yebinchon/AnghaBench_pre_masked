
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_mem_dqinfo {int dummy; } ;
struct dquot {int dq_type; int dq_id; int dq_sb; } ;
struct TYPE_2__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 int FUNC_0 (struct dquot*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_4 (struct ocfs2_mem_dqinfo*,int) ;
 TYPE_1__* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct dquot *VAR_0)
{
 struct ocfs2_mem_dqinfo *VAR_1 =
   FUNC_5(VAR_0->dq_sb, VAR_0->dq_type)->dqi_priv;
 int VAR_2 = 0;

 FUNC_1("id=%u, type=%d", VAR_0->dq_id, VAR_0->dq_type);


 VAR_2 = FUNC_3(VAR_1, 1);
 if (VAR_2 < 0)
  goto out;
 VAR_2 = FUNC_0(VAR_0);
 FUNC_4(VAR_1, 1);
out:
 FUNC_2(VAR_2);
 return VAR_2;
}
