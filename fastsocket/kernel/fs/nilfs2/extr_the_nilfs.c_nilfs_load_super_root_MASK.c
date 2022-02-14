
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {unsigned int ns_inode_size; void* ns_dat; void* ns_gc_dat; void* ns_cpfile; void* ns_sufile; int ns_nongc_ctime; int ns_sem; struct nilfs_super_block** ns_sbp; } ;
struct nilfs_super_root {int sr_nongc_ctime; } ;
struct nilfs_super_block {int s_segment_usage_size; int s_checkpoint_size; int s_dat_entry_size; } ;
struct nilfs_sufile_header {int dummy; } ;
struct nilfs_sb_info {int s_super; } ;
struct nilfs_cpfile_header {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
struct TYPE_2__ {int mi_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (void*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_3 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct lock_class_key*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (struct the_nilfs*,int *,int ) ;
 int FUNC_11 (void*,struct buffer_head*,int ) ;
 int FUNC_12 (void*,unsigned int,int) ;
 int FUNC_13 (void*,void*) ;
 int FUNC_14 (void*,unsigned int) ;
 int FUNC_15 (int ,int ,struct buffer_head**,int) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct the_nilfs *VAR_4,
     struct nilfs_sb_info *VAR_5, sector_t VAR_6)
{
 static struct lock_class_key VAR_7;
 struct buffer_head *VAR_8;
 struct nilfs_super_root *VAR_9;
 struct nilfs_super_block **VAR_10 = VAR_4->ns_sbp;
 unsigned VAR_11, VAR_12, VAR_13;
 unsigned VAR_14;
 int VAR_15;

 VAR_15 = FUNC_15(VAR_5->s_super, VAR_6, &VAR_8, 1);
 if (FUNC_16(VAR_15))
  return VAR_15;

 FUNC_5(&VAR_4->ns_sem);
 VAR_11 = FUNC_6(VAR_10[0]->s_dat_entry_size);
 VAR_13 = FUNC_6(VAR_10[0]->s_checkpoint_size);
 VAR_12 = FUNC_6(VAR_10[0]->s_segment_usage_size);
 FUNC_17(&VAR_4->ns_sem);

 VAR_14 = VAR_4->ns_inode_size;

 VAR_15 = -VAR_0;
 VAR_4->ns_dat = FUNC_10(VAR_4, ((void*)0), VAR_2);
 if (FUNC_16(!VAR_4->ns_dat))
  goto failed;

 VAR_4->ns_gc_dat = FUNC_10(VAR_4, ((void*)0), VAR_2);
 if (FUNC_16(!VAR_4->ns_gc_dat))
  goto failed_dat;

 VAR_4->ns_cpfile = FUNC_10(VAR_4, ((void*)0), VAR_1);
 if (FUNC_16(!VAR_4->ns_cpfile))
  goto failed_gc_dat;

 VAR_4->ns_sufile = FUNC_10(VAR_4, ((void*)0), VAR_3);
 if (FUNC_16(!VAR_4->ns_sufile))
  goto failed_cpfile;

 VAR_15 = FUNC_14(VAR_4->ns_dat, VAR_11);
 if (FUNC_16(VAR_15))
  goto failed_sufile;

 VAR_15 = FUNC_14(VAR_4->ns_gc_dat, VAR_11);
 if (FUNC_16(VAR_15))
  goto failed_sufile;

 FUNC_8(&FUNC_0(VAR_4->ns_dat)->mi_sem, &VAR_7);
 FUNC_8(&FUNC_0(VAR_4->ns_gc_dat)->mi_sem, &VAR_7);

 FUNC_13(VAR_4->ns_dat, VAR_4->ns_gc_dat);
 FUNC_12(VAR_4->ns_cpfile, VAR_13,
     sizeof(struct nilfs_cpfile_header));
 FUNC_12(VAR_4->ns_sufile, VAR_12,
     sizeof(struct nilfs_sufile_header));

 VAR_15 = FUNC_11(
  VAR_4->ns_dat, VAR_8, FUNC_2(VAR_14));
 if (FUNC_16(VAR_15))
  goto failed_sufile;

 VAR_15 = FUNC_11(
  VAR_4->ns_cpfile, VAR_8, FUNC_1(VAR_14));
 if (FUNC_16(VAR_15))
  goto failed_sufile;

 VAR_15 = FUNC_11(
  VAR_4->ns_sufile, VAR_8, FUNC_3(VAR_14));
 if (FUNC_16(VAR_15))
  goto failed_sufile;

 VAR_9 = (struct nilfs_super_root *)VAR_8->b_data;
 VAR_4->ns_nongc_ctime = FUNC_7(VAR_9->sr_nongc_ctime);

 failed:
 FUNC_4(VAR_8);
 return VAR_15;

 failed_sufile:
 FUNC_9(VAR_4->ns_sufile);

 failed_cpfile:
 FUNC_9(VAR_4->ns_cpfile);

 failed_gc_dat:
 FUNC_9(VAR_4->ns_gc_dat);

 failed_dat:
 FUNC_9(VAR_4->ns_dat);
 goto failed;
}
