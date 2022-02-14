
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_local_disk_dqblk {void* dqb_inodemod; void* dqb_spacemod; void* dqb_id; } ;
struct TYPE_3__ {scalar_t__ dqb_curinodes; scalar_t__ dqb_curspace; } ;
struct TYPE_4__ {scalar_t__ dq_id; TYPE_1__ dq_dqb; struct super_block* dq_sb; } ;
struct ocfs2_dquot {TYPE_2__ dq_dquot; scalar_t__ dq_originodes; scalar_t__ dq_origspace; int dq_local_off; } ;
struct buffer_head {scalar_t__ b_data; } ;


 void* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,scalar_t__,long long,long long) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct buffer_head *VAR_1, void *VAR_2)
{
 struct ocfs2_dquot *VAR_3 = VAR_2;
 struct ocfs2_local_disk_dqblk *VAR_4;
 struct super_block *VAR_5 = VAR_3->dq_dquot.dq_sb;

 VAR_4 = (struct ocfs2_local_disk_dqblk *)(VAR_1->b_data
  + FUNC_3(VAR_5, VAR_3->dq_local_off));

 VAR_4->dqb_id = FUNC_0(VAR_3->dq_dquot.dq_id);
 FUNC_4(&VAR_0);
 VAR_4->dqb_spacemod = FUNC_0(VAR_3->dq_dquot.dq_dqb.dqb_curspace -
       VAR_3->dq_origspace);
 VAR_4->dqb_inodemod = FUNC_0(VAR_3->dq_dquot.dq_dqb.dqb_curinodes -
       VAR_3->dq_originodes);
 FUNC_5(&VAR_0);
 FUNC_2(0, "Writing local dquot %u space %lld inodes %lld\n",
      VAR_3->dq_dquot.dq_id, (long long)FUNC_1(VAR_4->dqb_spacemod),
      (long long)FUNC_1(VAR_4->dqb_inodemod));
}
