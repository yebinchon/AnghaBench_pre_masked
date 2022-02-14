
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_super {TYPE_1__* local_alloc_bh; } ;
struct ocfs2_local_alloc {int la_bm_off; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_alloc_context {scalar_t__ ac_max_block; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 struct ocfs2_local_alloc* FUNC_0 (struct ocfs2_dinode*) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct ocfs2_super*,struct ocfs2_dinode*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1,
          struct ocfs2_alloc_context *VAR_2,
          u32 VAR_3)
{
 struct ocfs2_super *VAR_4 = FUNC_1(VAR_1->i_sb);
 struct ocfs2_dinode *VAR_5;
 struct ocfs2_local_alloc *VAR_6;
 int VAR_7;
 u64 VAR_8;

 if (!VAR_2->ac_max_block)
  return 1;

 VAR_5 = (struct ocfs2_dinode *) VAR_4->local_alloc_bh->b_data;
 VAR_6 = FUNC_0(VAR_5);

 VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_3);
 if (VAR_7 == -1) {
  FUNC_4(-VAR_0);
  return 0;
 }






 VAR_8 = FUNC_5(VAR_1->i_sb,
          FUNC_2(VAR_6->la_bm_off) +
          VAR_7 + VAR_3);
 FUNC_3(0, "Checking %llu against %llu\n",
      (unsigned long long)VAR_8,
      (unsigned long long)VAR_2->ac_max_block);
 if (VAR_8 > VAR_2->ac_max_block)
  return 0;

 return 1;
}
