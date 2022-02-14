
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ocfs2_new_group_input {scalar_t__ group; scalar_t__ chain; scalar_t__ clusters; scalar_t__ frees; } ;
struct TYPE_3__ {int cl_next_free_rec; int cl_cpg; int cl_count; } ;
struct TYPE_4__ {TYPE_1__ i_chain; } ;
struct ocfs2_dinode {int i_clusters; TYPE_2__ id2; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct inode*,struct ocfs2_dinode*,struct ocfs2_new_group_input*,struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2,
     struct ocfs2_dinode *VAR_3,
     struct ocfs2_new_group_input *VAR_4,
     struct buffer_head *VAR_5)
{
 u16 VAR_6 = FUNC_0(VAR_3->id2.i_chain.cl_count);
 u16 VAR_7 = FUNC_0(VAR_3->id2.i_chain.cl_cpg);
 u16 VAR_8 = FUNC_0(VAR_3->id2.i_chain.cl_next_free_rec);
 u32 VAR_9 = FUNC_3(VAR_2->i_sb, VAR_4->group);
 u32 VAR_10 = FUNC_1(VAR_3->i_clusters);
 int VAR_11 = -VAR_0;

 if (VAR_9 < VAR_10)
  FUNC_2(VAR_1, "add a group which is in the current volume.\n");
 else if (VAR_4->chain >= VAR_6)
  FUNC_2(VAR_1, "input chain exceeds the limit.\n");
 else if (VAR_8 != VAR_6 && VAR_8 != VAR_4->chain)
  FUNC_2(VAR_1,
       "the add group should be in chain %u\n", VAR_8);
 else if (VAR_10 + VAR_4->clusters < VAR_10)
  FUNC_2(VAR_1, "add group's clusters overflow.\n");
 else if (VAR_4->clusters > VAR_7)
  FUNC_2(VAR_1, "the cluster exceeds the maximum of a group\n");
 else if (VAR_4->frees > VAR_4->clusters)
  FUNC_2(VAR_1, "the free cluster exceeds the total clusters\n");
 else if (VAR_10 % VAR_7 != 0)
  FUNC_2(VAR_1,
       "the last group isn't full. Use group extend first.\n");
 else if (VAR_4->group != FUNC_5(VAR_2, VAR_9))
  FUNC_2(VAR_1, "group blkno is invalid\n");
 else if ((VAR_11 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5)))
  FUNC_2(VAR_1, "group descriptor check failed.\n");
 else
  VAR_11 = 0;

 return VAR_11;
}
