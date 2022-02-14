
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {scalar_t__ ns_cno; int ns_cpfile; } ;
struct nilfs_sc_info {int sc_flags; scalar_t__ sc_seg_ctime; scalar_t__ sc_nblk_this_inc; scalar_t__ sc_nblk_inc; struct nilfs_sb_info* sc_sbi; } ;
struct nilfs_sb_info {int s_ifile; int s_blocks_count; int s_inodes_count; struct the_nilfs* s_nilfs; } ;
struct TYPE_2__ {scalar_t__ ssl_prev; scalar_t__ ssl_next; } ;
struct nilfs_checkpoint {int cp_ifile_inode; void* cp_cno; void* cp_create; void* cp_nblk_inc; void* cp_blocks_count; void* cp_inodes_count; TYPE_1__ cp_snapshot_list; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct nilfs_checkpoint*) ;
 int FUNC_4 (struct nilfs_checkpoint*) ;
 int FUNC_5 (int ,scalar_t__,int ,struct nilfs_checkpoint**,struct buffer_head**) ;
 int FUNC_6 (int ,scalar_t__,struct buffer_head*) ;
 int FUNC_7 (int ,int *,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct nilfs_sc_info *VAR_3)
{
 struct nilfs_sb_info *VAR_4 = VAR_3->sc_sbi;
 struct the_nilfs *VAR_5 = VAR_4->s_nilfs;
 struct buffer_head *VAR_6;
 struct nilfs_checkpoint *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_5->ns_cpfile, VAR_5->ns_cno, 0,
       &VAR_7, &VAR_6);
 if (FUNC_9(VAR_8)) {
  FUNC_0(VAR_8 == -VAR_0 || VAR_8 == -VAR_1);
  goto failed_ibh;
 }
 VAR_7->cp_snapshot_list.ssl_next = 0;
 VAR_7->cp_snapshot_list.ssl_prev = 0;
 VAR_7->cp_inodes_count =
  FUNC_2(FUNC_1(&VAR_4->s_inodes_count));
 VAR_7->cp_blocks_count =
  FUNC_2(FUNC_1(&VAR_4->s_blocks_count));
 VAR_7->cp_nblk_inc =
  FUNC_2(VAR_3->sc_nblk_inc + VAR_3->sc_nblk_this_inc);
 VAR_7->cp_create = FUNC_2(VAR_3->sc_seg_ctime);
 VAR_7->cp_cno = FUNC_2(VAR_5->ns_cno);

 if (FUNC_8(VAR_2, &VAR_3->sc_flags))
  FUNC_3(VAR_7);
 else
  FUNC_4(VAR_7);

 FUNC_7(VAR_4->s_ifile, &VAR_7->cp_ifile_inode, 1);
 FUNC_6(VAR_5->ns_cpfile, VAR_5->ns_cno, VAR_6);
 return 0;

 failed_ibh:
 return VAR_8;
}
