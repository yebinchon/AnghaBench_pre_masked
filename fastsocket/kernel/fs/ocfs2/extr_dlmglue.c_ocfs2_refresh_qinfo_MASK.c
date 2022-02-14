
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_qinfo_lvb {scalar_t__ lvb_version; int lvb_free_entry; int lvb_free_blk; int lvb_blocks; int lvb_syncms; int lvb_igrace; int lvb_bgrace; } ;
struct TYPE_2__ {void* dqi_free_entry; void* dqi_free_blk; void* dqi_blocks; int dqi_type; int dqi_sb; } ;
struct ocfs2_lock_res {int l_lksb; } ;
struct ocfs2_mem_dqinfo {TYPE_1__ dqi_gi; void* dqi_syncms; int dqi_gqinode; struct ocfs2_lock_res dqi_gqlock; } ;
struct ocfs2_global_disk_dqinfo {int dqi_free_entry; int dqi_free_blk; int dqi_blocks; int dqi_syncms; int dqi_igrace; int dqi_bgrace; } ;
struct mem_dqinfo {void* dqi_igrace; void* dqi_bgrace; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 struct ocfs2_qinfo_lvb* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,struct buffer_head**) ;
 int FUNC_7 (struct ocfs2_lock_res*) ;
 struct mem_dqinfo* FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_mem_dqinfo *VAR_2)
{
 struct mem_dqinfo *VAR_3 = FUNC_8(VAR_2->dqi_gi.dqi_sb,
         VAR_2->dqi_gi.dqi_type);
 struct ocfs2_lock_res *VAR_4 = &VAR_2->dqi_gqlock;
 struct ocfs2_qinfo_lvb *VAR_5 = FUNC_4(&VAR_4->l_lksb);
 struct buffer_head *VAR_6 = ((void*)0);
 struct ocfs2_global_disk_dqinfo *VAR_7;
 int VAR_8 = 0;

 if (FUNC_5(&VAR_4->l_lksb) &&
     VAR_5->lvb_version == VAR_1) {
  VAR_3->dqi_bgrace = FUNC_0(VAR_5->lvb_bgrace);
  VAR_3->dqi_igrace = FUNC_0(VAR_5->lvb_igrace);
  VAR_2->dqi_syncms = FUNC_0(VAR_5->lvb_syncms);
  VAR_2->dqi_gi.dqi_blocks = FUNC_0(VAR_5->lvb_blocks);
  VAR_2->dqi_gi.dqi_free_blk = FUNC_0(VAR_5->lvb_free_blk);
  VAR_2->dqi_gi.dqi_free_entry =
     FUNC_0(VAR_5->lvb_free_entry);
 } else {
  VAR_8 = FUNC_6(VAR_2->dqi_gqinode, 0, &VAR_6);
  if (VAR_8) {
   FUNC_3(VAR_8);
   goto bail;
  }
  VAR_7 = (struct ocfs2_global_disk_dqinfo *)
     (VAR_6->b_data + VAR_0);
  VAR_3->dqi_bgrace = FUNC_2(VAR_7->dqi_bgrace);
  VAR_3->dqi_igrace = FUNC_2(VAR_7->dqi_igrace);
  VAR_2->dqi_syncms = FUNC_2(VAR_7->dqi_syncms);
  VAR_2->dqi_gi.dqi_blocks = FUNC_2(VAR_7->dqi_blocks);
  VAR_2->dqi_gi.dqi_free_blk = FUNC_2(VAR_7->dqi_free_blk);
  VAR_2->dqi_gi.dqi_free_entry =
     FUNC_2(VAR_7->dqi_free_entry);
  FUNC_1(VAR_6);
  FUNC_7(VAR_4);
 }

bail:
 return VAR_8;
}
