
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {unsigned int s_blocksize; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_prev_leaf_bh; struct buffer_head* dl_dx_root_bh; struct buffer_head* dl_leaf_bh; } ;
struct ocfs2_dir_entry {int name_len; void* rec_len; int name; scalar_t__ inode; int file_type; } ;
struct TYPE_4__ {char* id_data; } ;
struct TYPE_5__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {TYPE_2__ id2; } ;
struct inode {int i_version; int i_mode; int i_ctime; int i_mtime; struct super_block* i_sb; } ;
struct buffer_head {char* b_data; scalar_t__ b_blocknr; } ;
typedef int handle_t ;
struct TYPE_6__ {int ip_dyn_features; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 unsigned int FUNC_6 (struct inode*) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (int ,char*,int,char const*,int,unsigned long long,unsigned long,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,unsigned long) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 int FUNC_16 (struct super_block*) ;
 scalar_t__ FUNC_17 (struct ocfs2_dir_entry*,unsigned short) ;
 int FUNC_18 (struct inode*,int *,struct ocfs2_dir_lookup_result*) ;
 scalar_t__ FUNC_19 (struct ocfs2_dir_lookup_result*) ;
 int FUNC_20 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_21 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_22 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_23 (int *,struct buffer_head*) ;
 int FUNC_24 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_25 (int,char const*,struct ocfs2_dir_entry*) ;
 int FUNC_26 (struct inode*,int *,struct ocfs2_dir_lookup_result*) ;
 int FUNC_27 (struct ocfs2_dir_entry*,int ) ;
 int FUNC_28 (struct inode*,struct ocfs2_dir_entry*,unsigned long,unsigned int) ;

int FUNC_29(handle_t *VAR_8,
        struct inode *VAR_9,
        const char *VAR_10, int VAR_11,
        struct inode *VAR_12, u64 VAR_13,
        struct buffer_head *VAR_14,
        struct ocfs2_dir_lookup_result *VAR_15)
{
 unsigned long VAR_16;
 unsigned short VAR_17;
 struct ocfs2_dir_entry *VAR_18, *VAR_19;
 struct ocfs2_dinode *VAR_20 = (struct ocfs2_dinode *)VAR_14->b_data;
 struct super_block *VAR_21 = VAR_9->i_sb;
 int VAR_22, VAR_23;
 unsigned int VAR_24 = VAR_21->s_blocksize;
 struct buffer_head *VAR_25 = VAR_15->dl_leaf_bh;
 char *VAR_26 = VAR_25->b_data;

 FUNC_11();

 if (!VAR_11)
  return -VAR_2;

 if (FUNC_15(VAR_9)) {
  struct buffer_head *VAR_27;
  if (FUNC_19(VAR_15)) {
   VAR_27 = VAR_15->dl_dx_root_bh;
   VAR_22 = FUNC_22(VAR_8,
       FUNC_1(VAR_9), VAR_27,
       VAR_7);
  } else {
   VAR_27 = VAR_15->dl_prev_leaf_bh;
   VAR_22 = FUNC_20(VAR_8,
       FUNC_1(VAR_9), VAR_27,
       VAR_7);
  }
  if (VAR_22) {
   FUNC_12(VAR_22);
   return VAR_22;
  }
 } else if (FUNC_3(VAR_9)->ip_dyn_features & VAR_6) {
  VAR_26 = VAR_20->id2.i_data.id_data;
  VAR_24 = FUNC_6(VAR_9);

  FUNC_0(VAR_25 != VAR_14);
 }

 VAR_17 = FUNC_2(VAR_11);
 VAR_16 = 0;
 VAR_18 = (struct ocfs2_dir_entry *) VAR_26;
 while (1) {
  FUNC_0((char *)VAR_18 >= (VAR_24 + VAR_26));




  if (!FUNC_14(VAR_9, VAR_18, VAR_25, VAR_16)) {
   VAR_22 = -VAR_3;
   goto bail;
  }
  if (FUNC_25(VAR_11, VAR_10, VAR_18)) {
   VAR_22 = -VAR_1;
   goto bail;
  }



  FUNC_10(FUNC_28(VAR_9, VAR_18, VAR_16, VAR_24),
    "Hit dir trailer trying to insert %.*s "
           "(namelen %d) into directory %llu.  "
    "offset is %lu, trailer offset is %d\n",
    VAR_11, VAR_10, VAR_11,
    (unsigned long long)VAR_14->b_blocknr,
    VAR_16, FUNC_16(VAR_9->i_sb));

  if (FUNC_17(VAR_18, VAR_17)) {
   VAR_9->i_mtime = VAR_9->i_ctime = VAR_0;
   VAR_22 = FUNC_24(VAR_8, VAR_9, VAR_14);
   if (VAR_22 < 0) {
    FUNC_12(VAR_22);
    goto bail;
   }

   if (VAR_25 == VAR_14)
    VAR_23 = FUNC_21(VAR_8,
         FUNC_1(VAR_9),
         VAR_25,
         VAR_7);
   else {
    VAR_23 = FUNC_20(VAR_8,
         FUNC_1(VAR_9),
         VAR_25,
           VAR_7);

    if (FUNC_15(VAR_9)) {
     VAR_23 = FUNC_18(VAR_9,
        VAR_8,
        VAR_15);
     if (VAR_23) {
      FUNC_12(VAR_23);
      goto bail;
     }
    }
   }


   VAR_16 += FUNC_7(VAR_18->rec_len);
   if (FUNC_8(VAR_18->inode)) {
    VAR_19 = (struct ocfs2_dir_entry *)((char *) VAR_18 +
     FUNC_2(VAR_18->name_len));
    VAR_19->rec_len =
     FUNC_4(FUNC_7(VAR_18->rec_len) -
     FUNC_2(VAR_18->name_len));
    VAR_18->rec_len = FUNC_4(FUNC_2(VAR_18->name_len));
    VAR_18 = VAR_19;
   }
   VAR_18->file_type = VAR_5;
   if (VAR_13) {
    VAR_18->inode = FUNC_5(VAR_13);
    FUNC_27(VAR_18, VAR_12->i_mode);
   } else
    VAR_18->inode = 0;
   VAR_18->name_len = VAR_11;
   FUNC_9(VAR_18->name, VAR_10, VAR_11);

   if (FUNC_15(VAR_9))
    FUNC_26(VAR_9, VAR_8, VAR_15);

   VAR_9->i_version++;
   VAR_23 = FUNC_23(VAR_8, VAR_25);
   VAR_22 = 0;
   goto bail;
  }

  VAR_16 += FUNC_7(VAR_18->rec_len);
  VAR_18 = (struct ocfs2_dir_entry *) ((char *) VAR_18 + FUNC_7(VAR_18->rec_len));
 }



 VAR_22 = -VAR_4;
bail:

 FUNC_13(VAR_22);
 return VAR_22;
}
