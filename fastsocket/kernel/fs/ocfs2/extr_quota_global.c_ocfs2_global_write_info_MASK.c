
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_mem_dqinfo {int dummy; } ;
struct TYPE_2__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 int FUNC_0 (struct super_block*,int) ;
 int FUNC_1 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_2 (struct ocfs2_mem_dqinfo*,int) ;
 TYPE_1__* FUNC_3 (struct super_block*,int) ;

int FUNC_4(struct super_block *VAR_0, int VAR_1)
{
 int VAR_2;
 struct ocfs2_mem_dqinfo *VAR_3 = FUNC_3(VAR_0, VAR_1)->dqi_priv;

 VAR_2 = FUNC_1(VAR_3, 1);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_3, 1);
 return VAR_2;
}
