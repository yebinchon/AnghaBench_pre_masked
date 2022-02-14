
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {char* s_sbd1; char* s_sbd2; int s_nzones; int s_firstdatazone; int * s_sb_state; int * s_sb_time; int * s_free_blocks; int * s_bcache; int * s_bcache_count; int * s_sb_total_free_inodes; int * s_sb_fic_inodes; int * s_sb_fic_count; int s_flc_size; int s_fic_size; int s_link_max; struct buffer_head* s_bh2; struct buffer_head* s_bh1; } ;
struct sysv2_super_block {int s_fsize; int s_isize; int s_state; int s_time; int s_tfree; int * s_free; int s_nfree; int s_tinode; int * s_inode; int s_ninode; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysv_sb_info*,int ) ;
 int FUNC_1 (struct sysv_sb_info*,int ) ;

__attribute__((used)) static void FUNC_2(struct sysv_sb_info *VAR_4)
{
 struct sysv2_super_block *VAR_5;
 struct buffer_head *VAR_6 = VAR_4->s_bh1;
 struct buffer_head *VAR_7 = VAR_4->s_bh2;

 if (VAR_6 == VAR_7)
  VAR_5 = (struct sysv2_super_block *) (VAR_6->b_data + VAR_0/2);
 else
  VAR_5 = (struct sysv2_super_block *) VAR_7->b_data;

 VAR_4->s_link_max = VAR_1;
 VAR_4->s_fic_size = VAR_3;
 VAR_4->s_flc_size = VAR_2;
 VAR_4->s_sbd1 = (char *)VAR_5;
 VAR_4->s_sbd2 = (char *)VAR_5;
 VAR_4->s_sb_fic_count = &VAR_5->s_ninode;
 VAR_4->s_sb_fic_inodes = &VAR_5->s_inode[0];
 VAR_4->s_sb_total_free_inodes = &VAR_5->s_tinode;
 VAR_4->s_bcache_count = &VAR_5->s_nfree;
 VAR_4->s_bcache = &VAR_5->s_free[0];
 VAR_4->s_free_blocks = &VAR_5->s_tfree;
 VAR_4->s_sb_time = &VAR_5->s_time;
 VAR_4->s_sb_state = &VAR_5->s_state;
 VAR_4->s_firstdatazone = FUNC_0(VAR_4, VAR_5->s_isize);
 VAR_4->s_nzones = FUNC_1(VAR_4, VAR_5->s_fsize);
}
