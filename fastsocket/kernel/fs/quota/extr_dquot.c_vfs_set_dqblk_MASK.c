
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct if_dqblk {int dummy; } ;
struct dquot {int dummy; } ;
typedef int qid_t ;


 int VAR_0 ;
 int FUNC_0 (struct dquot*,struct if_dqblk*) ;
 struct dquot* FUNC_1 (struct super_block*,int ,int) ;
 int FUNC_2 (struct dquot*) ;

int FUNC_3(struct super_block *VAR_1, int VAR_2, qid_t VAR_3,
    struct if_dqblk *VAR_4)
{
 struct dquot *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_2);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }
 VAR_6 = FUNC_0(VAR_5, VAR_4);
 FUNC_2(VAR_5);
out:
 return VAR_6;
}
