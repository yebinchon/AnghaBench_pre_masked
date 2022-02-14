
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_dquot {int dq_local_off; } ;
struct dquot {size_t dq_type; struct super_block* dq_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int * files; } ;


 struct ocfs2_dquot* FUNC_0 (struct dquot*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct buffer_head*,int ,struct ocfs2_dquot*) ;
 int FUNC_4 (int ,int ,struct buffer_head**) ;
 int FUNC_5 (struct super_block*,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_6 (struct super_block*) ;

__attribute__((used)) static int FUNC_7(struct dquot *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->dq_sb;
 struct ocfs2_dquot *VAR_3 = FUNC_0(VAR_1);
 struct buffer_head *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_5 = FUNC_4(FUNC_6(VAR_2)->files[VAR_1->dq_type],
        FUNC_5(VAR_2, VAR_3->dq_local_off),
        &VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_5);
  goto out;
 }
 VAR_5 = FUNC_3(FUNC_6(VAR_2)->files[VAR_1->dq_type], VAR_4,
     VAR_0, VAR_3);
 if (VAR_5 < 0) {
  FUNC_2(VAR_5);
  goto out;
 }
out:
 FUNC_1(VAR_4);
 return VAR_5;
}
