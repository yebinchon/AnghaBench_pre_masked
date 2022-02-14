
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_super {int osb_ecc_stats; } ;
struct ocfs2_block_check {int dummy; } ;
struct buffer_head {int dummy; } ;


 struct ocfs2_super* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head**,int,struct ocfs2_block_check*,int *) ;
 scalar_t__ FUNC_2 (struct ocfs2_super*) ;

int FUNC_3(struct super_block *VAR_0,
    struct buffer_head **VAR_1, int VAR_2,
    struct ocfs2_block_check *VAR_3)
{
 int VAR_4 = 0;
 struct ocfs2_super *VAR_5 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_5))
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3,
          &VAR_5->osb_ecc_stats);

 return VAR_4;
}
