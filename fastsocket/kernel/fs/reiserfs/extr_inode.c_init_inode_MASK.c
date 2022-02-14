
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct treepath {int dummy; } ;
struct stat_data_v1 {int dummy; } ;
struct stat_data {int dummy; } ;
struct item_head {int ih_key; } ;
struct TYPE_13__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_12__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_11__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct inode {unsigned long i_blocks; int i_mode; int * i_op; TYPE_1__* i_mapping; int * i_fop; void* i_generation; TYPE_5__ i_atime; TYPE_4__ i_mtime; TYPE_3__ i_ctime; int i_gid; int i_size; int i_uid; int i_nlink; TYPE_2__* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int __u32 ;
struct TYPE_15__ {int i_attrs; scalar_t__ i_first_direct_byte; int i_flags; int i_mmap; int * i_jl; scalar_t__ i_trans_id; scalar_t__ i_prealloc_count; scalar_t__ i_prealloc_block; int i_prealloc_list; } ;
struct TYPE_14__ {int k_dir_id; } ;
struct TYPE_10__ {int s_blocksize; } ;
struct TYPE_9__ {int * a_ops; } ;


 scalar_t__ FUNC_0 (struct buffer_head*,struct item_head*) ;
 int FUNC_1 (int *) ;
 TYPE_6__* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct item_head* FUNC_3 (struct treepath*) ;
 struct buffer_head* FUNC_4 (struct treepath*) ;
 TYPE_7__* FUNC_5 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 unsigned long FUNC_11 (unsigned long,int) ;
 int FUNC_12 (TYPE_6__*,int *) ;
 int VAR_6 ;
 int FUNC_13 (struct inode*,int ,int ) ;
 int FUNC_14 (struct inode*,int ) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct treepath*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_19 (struct inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_20 (int ,struct inode*) ;
 int FUNC_21 (struct stat_data_v1*) ;
 unsigned long FUNC_22 (struct stat_data_v1*) ;
 int FUNC_23 (struct stat_data_v1*) ;
 scalar_t__ FUNC_24 (struct stat_data_v1*) ;
 int FUNC_25 (struct stat_data_v1*) ;
 int FUNC_26 (struct stat_data_v1*) ;
 int FUNC_27 (struct stat_data_v1*) ;
 int FUNC_28 (struct stat_data_v1*) ;
 int FUNC_29 (struct stat_data_v1*) ;
 int FUNC_30 (struct stat_data_v1*) ;
 int FUNC_31 (struct stat_data_v1*) ;
 int FUNC_32 (struct stat_data*) ;
 int FUNC_33 (struct stat_data*) ;
 int FUNC_34 (struct stat_data*) ;
 int FUNC_35 (struct stat_data*) ;
 void* FUNC_36 (struct stat_data*) ;
 int FUNC_37 (struct stat_data*) ;
 int FUNC_38 (struct stat_data*) ;
 int FUNC_39 (struct stat_data*) ;
 int FUNC_40 (struct stat_data*) ;
 int FUNC_41 (struct stat_data*) ;
 int FUNC_42 (struct stat_data*) ;
 int FUNC_43 (struct stat_data*) ;
 int FUNC_44 (struct inode*,int ) ;
 int FUNC_45 (struct inode*,int ) ;
 scalar_t__ FUNC_46 (struct item_head*) ;
 int FUNC_47 (struct inode*,int,int ) ;

__attribute__((used)) static void FUNC_48(struct inode *VAR_14, struct treepath *VAR_15)
{
 struct buffer_head *VAR_16;
 struct item_head *VAR_17;
 __u32 VAR_18;


 VAR_16 = FUNC_4(VAR_15);
 VAR_17 = FUNC_3(VAR_15);

 FUNC_12(FUNC_2(VAR_14), &(VAR_17->ih_key));

 FUNC_1(&(FUNC_5(VAR_14)->i_prealloc_list));
 FUNC_5(VAR_14)->i_flags = 0;
 FUNC_5(VAR_14)->i_prealloc_block = 0;
 FUNC_5(VAR_14)->i_prealloc_count = 0;
 FUNC_5(VAR_14)->i_trans_id = 0;
 FUNC_5(VAR_14)->i_jl = ((void*)0);
 FUNC_16(&(FUNC_5(VAR_14)->i_mmap));
 FUNC_19(VAR_14);

 if (FUNC_46(VAR_17)) {
  struct stat_data_v1 *VAR_19 =
      (struct stat_data_v1 *)FUNC_0(VAR_16, VAR_17);
  unsigned long VAR_20;

  FUNC_44(VAR_14, VAR_0);
  FUNC_45(VAR_14, VAR_4);
  VAR_14->i_mode = FUNC_26(VAR_19);
  VAR_14->i_nlink = FUNC_28(VAR_19);
  VAR_14->i_uid = FUNC_31(VAR_19);
  VAR_14->i_gid = FUNC_25(VAR_19);
  VAR_14->i_size = FUNC_30(VAR_19);
  VAR_14->i_atime.tv_sec = FUNC_21(VAR_19);
  VAR_14->i_mtime.tv_sec = FUNC_27(VAR_19);
  VAR_14->i_ctime.tv_sec = FUNC_23(VAR_19);
  VAR_14->i_atime.tv_nsec = 0;
  VAR_14->i_ctime.tv_nsec = 0;
  VAR_14->i_mtime.tv_nsec = 0;

  VAR_14->i_blocks = FUNC_22(VAR_19);
  VAR_14->i_generation = FUNC_15(FUNC_2(VAR_14)->k_dir_id);
  VAR_20 = (VAR_14->i_size + 511) >> 9;
  VAR_20 = FUNC_11(VAR_20, VAR_14->i_sb->s_blocksize >> 9);
  if (VAR_14->i_blocks > VAR_20) {





   VAR_14->i_blocks = VAR_20;
  }

  VAR_18 = FUNC_29(VAR_19);
  FUNC_5(VAR_14)->i_first_direct_byte =
      FUNC_24(VAR_19);



  if (VAR_14->i_blocks & 1) {
   VAR_14->i_blocks++;
  }
  FUNC_14(VAR_14,
    FUNC_47(VAR_14, VAR_14->i_blocks,
         VAR_2));


  FUNC_5(VAR_14)->i_flags &= ~VAR_6;
 } else {


  struct stat_data *VAR_21 = (struct stat_data *)FUNC_0(VAR_16, VAR_17);

  VAR_14->i_mode = FUNC_38(VAR_21);
  VAR_14->i_nlink = FUNC_40(VAR_21);
  VAR_14->i_uid = FUNC_43(VAR_21);
  VAR_14->i_size = FUNC_42(VAR_21);
  VAR_14->i_gid = FUNC_37(VAR_21);
  VAR_14->i_mtime.tv_sec = FUNC_39(VAR_21);
  VAR_14->i_atime.tv_sec = FUNC_32(VAR_21);
  VAR_14->i_ctime.tv_sec = FUNC_35(VAR_21);
  VAR_14->i_ctime.tv_nsec = 0;
  VAR_14->i_mtime.tv_nsec = 0;
  VAR_14->i_atime.tv_nsec = 0;
  VAR_14->i_blocks = FUNC_34(VAR_21);
  VAR_18 = FUNC_41(VAR_21);
  if (FUNC_7(VAR_14->i_mode) || FUNC_6(VAR_14->i_mode))
   VAR_14->i_generation =
       FUNC_15(FUNC_2(VAR_14)->k_dir_id);
  else
   VAR_14->i_generation = FUNC_36(VAR_21);

  if (FUNC_8(VAR_14->i_mode) || FUNC_9(VAR_14->i_mode))
   FUNC_44(VAR_14, VAR_0);
  else
   FUNC_44(VAR_14, VAR_1);
  FUNC_5(VAR_14)->i_first_direct_byte = 0;
  FUNC_45(VAR_14, VAR_5);
  FUNC_14(VAR_14,
    FUNC_47(VAR_14, VAR_14->i_blocks,
         VAR_3));


  FUNC_5(VAR_14)->i_attrs = FUNC_33(VAR_21);
  FUNC_20(FUNC_33(VAR_21), VAR_14);
 }

 FUNC_18(VAR_15);
 if (FUNC_10(VAR_14->i_mode)) {
  VAR_14->i_op = &VAR_10;
  VAR_14->i_fop = &VAR_11;
  VAR_14->i_mapping->a_ops = &VAR_7;
 } else if (FUNC_8(VAR_14->i_mode)) {
  VAR_14->i_op = &VAR_8;
  VAR_14->i_fop = &VAR_9;
 } else if (FUNC_9(VAR_14->i_mode)) {
  VAR_14->i_op = &VAR_13;
  VAR_14->i_mapping->a_ops = &VAR_7;
 } else {
  VAR_14->i_blocks = 0;
  VAR_14->i_op = &VAR_12;
  FUNC_13(VAR_14, VAR_14->i_mode, FUNC_17(VAR_18));
 }
}
