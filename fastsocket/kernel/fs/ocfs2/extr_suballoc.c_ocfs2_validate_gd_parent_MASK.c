
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_group_desc {scalar_t__ bg_parent_dinode; int bg_chain; int bg_bits; } ;
struct TYPE_3__ {int cl_next_free_rec; int cl_bpc; int cl_cpg; } ;
struct TYPE_4__ {TYPE_1__ i_chain; } ;
struct ocfs2_dinode {scalar_t__ i_blkno; TYPE_2__ id2; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned long long,unsigned int,...) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1,
        struct ocfs2_dinode *VAR_2,
        struct buffer_head *VAR_3,
        int VAR_4)
{
 unsigned int VAR_5;
 struct ocfs2_group_desc *VAR_6 = (struct ocfs2_group_desc *)VAR_3->b_data;

 if (VAR_2->i_blkno != VAR_6->bg_parent_dinode) {
  FUNC_0("Group descriptor #%llu has bad parent "
    "pointer (%llu, expected %llu)",
    (unsigned long long)VAR_3->b_blocknr,
    (unsigned long long)FUNC_2(VAR_6->bg_parent_dinode),
    (unsigned long long)FUNC_2(VAR_2->i_blkno));
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_2->id2.i_chain.cl_cpg) * FUNC_1(VAR_2->id2.i_chain.cl_bpc);
 if (FUNC_1(VAR_6->bg_bits) > VAR_5) {
  FUNC_0("Group descriptor #%llu has bit count of %u",
    (unsigned long long)VAR_3->b_blocknr,
    FUNC_1(VAR_6->bg_bits));
  return -VAR_0;
 }

 if (FUNC_1(VAR_6->bg_chain) >=
     FUNC_1(VAR_2->id2.i_chain.cl_next_free_rec)) {
  FUNC_0("Group descriptor #%llu has bad chain %u",
    (unsigned long long)VAR_3->b_blocknr,
    FUNC_1(VAR_6->bg_chain));
  return -VAR_0;
 }

 return 0;
}
