
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct dquot {int dq_type; int dq_id; int dq_sb; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dquot*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_super*,int *) ;
 int * FUNC_8 (struct ocfs2_super*,int ) ;

__attribute__((used)) static int FUNC_9(struct dquot *VAR_1)
{
 handle_t *VAR_2;
 struct ocfs2_super *VAR_3 = FUNC_1(VAR_1->dq_sb);
 int VAR_4 = 0;

 FUNC_4("id=%u, type=%d", VAR_1->dq_id, VAR_1->dq_type);

 VAR_2 = FUNC_8(VAR_3, VAR_0);
 if (FUNC_0(VAR_2)) {
  VAR_4 = FUNC_2(VAR_2);
  FUNC_5(VAR_4);
  goto out;
 }
 VAR_4 = FUNC_3(VAR_1);
 FUNC_7(VAR_3, VAR_2);
out:
 FUNC_6(VAR_4);
 return VAR_4;
}
