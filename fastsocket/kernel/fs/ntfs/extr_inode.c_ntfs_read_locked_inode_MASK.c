
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_57__ TYPE_9__ ;
typedef struct TYPE_56__ TYPE_8__ ;
typedef struct TYPE_55__ TYPE_7__ ;
typedef struct TYPE_54__ TYPE_6__ ;
typedef struct TYPE_53__ TYPE_5__ ;
typedef struct TYPE_52__ TYPE_4__ ;
typedef struct TYPE_51__ TYPE_3__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_27__ ;
typedef struct TYPE_48__ TYPE_1__ ;
typedef struct TYPE_47__ TYPE_14__ ;
typedef struct TYPE_46__ TYPE_13__ ;
typedef struct TYPE_45__ TYPE_12__ ;
typedef struct TYPE_44__ TYPE_11__ ;
typedef struct TYPE_43__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct inode {scalar_t__ i_ino; int i_version; int flags; int i_nlink; int i_size; int i_blocks; int i_mode; TYPE_6__* i_mapping; int * i_fop; int * i_op; int i_sb; void* i_atime; void* i_ctime; void* i_mtime; int link_count; int sequence_number; scalar_t__ i_generation; scalar_t__ base_mft_record; int i_gid; int i_uid; } ;
struct TYPE_57__ {int mft_record_size; int cluster_size; unsigned int cluster_size_bits; int sector_size; unsigned int sector_size_bits; int sb; int fmask; int dmask; int gid; int uid; } ;
typedef TYPE_9__ ntfs_volume ;
struct TYPE_55__ {unsigned int block_size; unsigned int block_clusters; int size; void* block_size_bits; } ;
struct TYPE_50__ {scalar_t__ collation_rule; int block_size; int block_size_bits; int vcn_size; unsigned int vcn_size_bits; } ;
struct TYPE_56__ {TYPE_7__ compressed; TYPE_2__ index; } ;
struct TYPE_49__ {struct inode* rl; } ;
struct TYPE_43__ {int name_len; int initialized_size; int allocated_size; TYPE_8__ itype; int * name; void* type; int attr_list; scalar_t__ attr_list_size; TYPE_27__ attr_list_rl; scalar_t__ seq_no; } ;
typedef TYPE_10__ ntfs_inode ;
struct TYPE_44__ {TYPE_14__* attr; scalar_t__ mrec; } ;
typedef TYPE_11__ ntfs_attr_search_ctx ;
typedef int loff_t ;
struct TYPE_54__ {int * a_ops; } ;
struct TYPE_52__ {int value_offset; int value_length; } ;
struct TYPE_51__ {int compression_unit; int allocated_size; int initialized_size; int data_size; scalar_t__ lowest_vcn; int compressed_size; int mapping_pairs_offset; } ;
struct TYPE_53__ {TYPE_4__ resident; TYPE_3__ non_resident; } ;
struct TYPE_48__ {int flags; int index_length; } ;
struct TYPE_47__ {int flags; int non_resident; TYPE_5__ data; int length; int name_offset; scalar_t__ name_length; } ;
struct TYPE_46__ {scalar_t__ type; scalar_t__ collation_rule; TYPE_1__ index; int index_block_size; } ;
struct TYPE_45__ {int last_access_time; int last_mft_change_time; int last_data_change_time; } ;
typedef TYPE_12__ STANDARD_INFORMATION ;
typedef struct inode MFT_RECORD ;
typedef TYPE_13__ INDEX_ROOT ;
typedef TYPE_14__ ATTR_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int * VAR_19 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_2 (TYPE_10__*) ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 scalar_t__ FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_10__*) ;
 int FUNC_10 (TYPE_10__*) ;
 int FUNC_11 (TYPE_10__*) ;
 int FUNC_12 (TYPE_10__*) ;
 scalar_t__ FUNC_13 (TYPE_10__*) ;
 scalar_t__ VAR_23 ;
 TYPE_10__* FUNC_14 (struct inode*) ;
 TYPE_9__* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_9__*) ;
 scalar_t__ VAR_24 ;
 int FUNC_17 (struct inode*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int VAR_28 ;
 void* FUNC_20 (int) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (TYPE_9__*,TYPE_27__*,int ,scalar_t__,void*) ;
 int FUNC_26 (struct inode*) ;
 struct inode* FUNC_27 (TYPE_10__*) ;
 int FUNC_28 (int ,int *,scalar_t__) ;
 void* FUNC_29 (int ) ;
 int VAR_29 ;
 TYPE_11__* FUNC_30 (TYPE_10__*,struct inode*) ;
 struct inode* FUNC_31 (struct inode*,int ,int *,int) ;
 int FUNC_32 (void*,int *,int,int ,int ,int *,int ,TYPE_11__*) ;
 int FUNC_33 (TYPE_11__*) ;
 int FUNC_34 (TYPE_11__*) ;
 scalar_t__ FUNC_35 (TYPE_14__*) ;
 int FUNC_36 (char*,...) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_37 (int ,char*,...) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_38 (struct inode*) ;
 scalar_t__ FUNC_39 (TYPE_11__*) ;
 int FUNC_40 (scalar_t__) ;
 struct inode* FUNC_41 (TYPE_9__*,TYPE_14__*,int *) ;
 int VAR_34 ;
 int FUNC_42 (int ,char*,scalar_t__) ;
 void* FUNC_43 (int ) ;
 scalar_t__ FUNC_44 (int) ;
 int FUNC_45 (TYPE_10__*) ;

__attribute__((used)) static int FUNC_46(struct inode *VAR_35)
{
 ntfs_volume *VAR_36 = FUNC_15(VAR_35->i_sb);
 ntfs_inode *VAR_37;
 struct inode *VAR_38;
 MFT_RECORD *VAR_39;
 ATTR_RECORD *VAR_40;
 STANDARD_INFORMATION *VAR_41;
 ntfs_attr_search_ctx *VAR_42;
 int VAR_43 = 0;

 FUNC_36("Entering for i_ino 0x%lx.", VAR_35->i_ino);







 VAR_35->i_version = 1;

 VAR_35->i_uid = VAR_36->uid;
 VAR_35->i_gid = VAR_36->gid;
 VAR_35->i_mode = 0;





 if (VAR_35->i_ino != VAR_17)
  FUNC_38(VAR_35);
 VAR_37 = FUNC_14(VAR_35);

 VAR_39 = FUNC_27(VAR_37);
 if (FUNC_0(VAR_39)) {
  VAR_43 = FUNC_17(VAR_39);
  goto err_out;
 }
 VAR_42 = FUNC_30(VAR_37, VAR_39);
 if (!VAR_42) {
  VAR_43 = -VAR_15;
  goto unm_err_out;
 }

 if (!(VAR_39->flags & VAR_21)) {
  FUNC_37(VAR_35->i_sb, "Inode is not in use!");
  goto unm_err_out;
 }
 if (VAR_39->base_mft_record) {
  FUNC_37(VAR_35->i_sb, "Inode is an extent inode!");
  goto unm_err_out;
 }


 VAR_35->i_generation = VAR_37->seq_no = FUNC_23(VAR_39->sequence_number);
 VAR_35->i_nlink = FUNC_23(VAR_39->link_count);
 VAR_35->i_mode |= VAR_27;

 if (FUNC_1(VAR_35))
  VAR_35->i_mode &= ~VAR_28;
 if (VAR_39->flags & VAR_22) {
  VAR_35->i_mode |= VAR_25;




  VAR_35->i_mode &= ~VAR_36->dmask;

  if (VAR_35->i_nlink > 1)
   VAR_35->i_nlink = 1;
 } else {
  VAR_35->i_mode |= VAR_26;

  VAR_35->i_mode &= ~VAR_36->fmask;
 }






 VAR_43 = FUNC_32(VAR_10, ((void*)0), 0, 0, 0, ((void*)0), 0,
   VAR_42);
 if (FUNC_44(VAR_43)) {
  if (VAR_43 == -VAR_14) {





   FUNC_37(VAR_35->i_sb, "$STANDARD_INFORMATION attribute "
     "is missing.");
  }
  goto unm_err_out;
 }
 VAR_40 = VAR_42->attr;

 VAR_41 = (STANDARD_INFORMATION*)((u8*)VAR_40 +
   FUNC_23(VAR_40->data.resident.value_offset));
 VAR_35->i_mtime = FUNC_29(VAR_41->last_data_change_time);





 VAR_35->i_ctime = FUNC_29(VAR_41->last_mft_change_time);




 VAR_35->i_atime = FUNC_29(VAR_41->last_access_time);


 FUNC_34(VAR_42);
 VAR_43 = FUNC_32(VAR_4, ((void*)0), 0, 0, 0, ((void*)0), 0, VAR_42);
 if (VAR_43) {
  if (FUNC_44(VAR_43 != -VAR_14)) {
   FUNC_37(VAR_35->i_sb, "Failed to lookup attribute list "
     "attribute.");
   goto unm_err_out;
  }
 } else {
  if (VAR_35->i_ino == VAR_17)
   goto skip_attr_list_load;
  FUNC_36("Attribute list found in inode 0x%lx.", VAR_35->i_ino);
  FUNC_5(VAR_37);
  VAR_40 = VAR_42->attr;
  if (VAR_40->flags & VAR_0) {
   FUNC_37(VAR_35->i_sb, "Attribute list attribute is "
     "compressed.");
   goto unm_err_out;
  }
  if (VAR_40->flags & VAR_2 ||
    VAR_40->flags & VAR_3) {
   if (VAR_40->non_resident) {
    FUNC_37(VAR_35->i_sb, "Non-resident attribute "
      "list attribute is encrypted/"
      "sparse.");
    goto unm_err_out;
   }
   FUNC_42(VAR_35->i_sb, "Resident attribute list "
     "attribute in inode 0x%lx is marked "
     "encrypted/sparse which is not true.  "
     "However, Windows allows this and "
     "chkdsk does not detect or correct it "
     "so we will just ignore the invalid "
     "flags and pretend they are not set.",
     VAR_35->i_ino);
  }

  VAR_37->attr_list_size = (u32)FUNC_35(VAR_40);
  VAR_37->attr_list = FUNC_40(VAR_37->attr_list_size);
  if (!VAR_37->attr_list) {
   FUNC_37(VAR_35->i_sb, "Not enough memory to allocate "
     "buffer for attribute list.");
   VAR_43 = -VAR_15;
   goto unm_err_out;
  }
  if (VAR_40->non_resident) {
   FUNC_6(VAR_37);
   if (VAR_40->data.non_resident.lowest_vcn) {
    FUNC_37(VAR_35->i_sb, "Attribute list has non "
      "zero lowest_vcn.");
    goto unm_err_out;
   }




   VAR_37->attr_list_rl.rl = FUNC_41(VAR_36,
     VAR_40, ((void*)0));
   if (FUNC_0(VAR_37->attr_list_rl.rl)) {
    VAR_43 = FUNC_17(VAR_37->attr_list_rl.rl);
    VAR_37->attr_list_rl.rl = ((void*)0);
    FUNC_37(VAR_35->i_sb, "Mapping pairs "
      "decompression failed.");
    goto unm_err_out;
   }

   if ((VAR_43 = FUNC_25(VAR_36, &VAR_37->attr_list_rl,
     VAR_37->attr_list, VAR_37->attr_list_size,
     FUNC_43(VAR_40->data.non_resident.
     initialized_size)))) {
    FUNC_37(VAR_35->i_sb, "Failed to load "
      "attribute list attribute.");
    goto unm_err_out;
   }
  } else {
   if ((u8*)VAR_40 + FUNC_23(VAR_40->data.resident.value_offset)
     + FUNC_24(
     VAR_40->data.resident.value_length) >
     (u8*)VAR_42->mrec + VAR_36->mft_record_size) {
    FUNC_37(VAR_35->i_sb, "Corrupt attribute list "
      "in inode.");
    goto unm_err_out;
   }

   FUNC_28(VAR_37->attr_list, (u8*)VAR_40 + FUNC_23(
     VAR_40->data.resident.value_offset),
     FUNC_24(
     VAR_40->data.resident.value_length));
  }
 }
skip_attr_list_load:




 if (FUNC_18(VAR_35->i_mode)) {
  loff_t VAR_44;
  ntfs_inode *VAR_45;
  INDEX_ROOT *VAR_46;
  u8 *VAR_47, *VAR_48;


  FUNC_34(VAR_42);
  VAR_43 = FUNC_32(VAR_9, VAR_19, 4, VAR_11,
    0, ((void*)0), 0, VAR_42);
  if (FUNC_44(VAR_43)) {
   if (VAR_43 == -VAR_14) {



    FUNC_37(VAR_35->i_sb, "$INDEX_ROOT attribute "
      "is missing.");
   }
   goto unm_err_out;
  }
  VAR_40 = VAR_42->attr;

  if (FUNC_44(VAR_40->non_resident)) {
   FUNC_37(VAR_36->sb, "$INDEX_ROOT attribute is not "
     "resident.");
   goto unm_err_out;
  }

  if (FUNC_44(VAR_40->name_length && (FUNC_23(VAR_40->name_offset) >=
    FUNC_23(VAR_40->data.resident.value_offset)))) {
   FUNC_37(VAR_36->sb, "$INDEX_ROOT attribute name is "
     "placed after the attribute value.");
   goto unm_err_out;
  }






  if (VAR_40->flags & VAR_0)
   FUNC_7(VAR_37);
  if (VAR_40->flags & VAR_2) {
   if (VAR_40->flags & VAR_0) {
    FUNC_37(VAR_35->i_sb, "Found encrypted and "
      "compressed attribute.");
    goto unm_err_out;
   }
   FUNC_8(VAR_37);
  }
  if (VAR_40->flags & VAR_3)
   FUNC_12(VAR_37);
  VAR_46 = (INDEX_ROOT*)((u8*)VAR_40 +
    FUNC_23(VAR_40->data.resident.value_offset));
  VAR_47 = (u8*)VAR_46 + FUNC_24(VAR_40->data.resident.value_length);
  if (VAR_47 > (u8*)VAR_42->mrec + VAR_36->mft_record_size) {
   FUNC_37(VAR_35->i_sb, "$INDEX_ROOT attribute is "
     "corrupt.");
   goto unm_err_out;
  }
  VAR_48 = (u8*)&VAR_46->index +
    FUNC_24(VAR_46->index.index_length);
  if (VAR_48 > VAR_47) {
   FUNC_37(VAR_35->i_sb, "Directory index is corrupt.");
   goto unm_err_out;
  }
  if (VAR_46->type != VAR_7) {
   FUNC_37(VAR_35->i_sb, "Indexed attribute is not "
     "$FILE_NAME.");
   goto unm_err_out;
  }
  if (VAR_46->collation_rule != VAR_12) {
   FUNC_37(VAR_35->i_sb, "Index collation rule is not "
     "COLLATION_FILE_NAME.");
   goto unm_err_out;
  }
  VAR_37->itype.index.collation_rule = VAR_46->collation_rule;
  VAR_37->itype.index.block_size = FUNC_24(VAR_46->index_block_size);
  if (VAR_37->itype.index.block_size &
    (VAR_37->itype.index.block_size - 1)) {
   FUNC_37(VAR_35->i_sb, "Index block size (%u) is not a "
     "power of two.",
     VAR_37->itype.index.block_size);
   goto unm_err_out;
  }
  if (VAR_37->itype.index.block_size > VAR_24) {
   FUNC_37(VAR_35->i_sb, "Index block size (%u) > "
     "PAGE_CACHE_SIZE (%ld) is not "
     "supported.  Sorry.",
     VAR_37->itype.index.block_size,
     VAR_24);
   VAR_43 = -VAR_16;
   goto unm_err_out;
  }
  if (VAR_37->itype.index.block_size < VAR_23) {
   FUNC_37(VAR_35->i_sb, "Index block size (%u) < "
     "NTFS_BLOCK_SIZE (%i) is not "
     "supported.  Sorry.",
     VAR_37->itype.index.block_size,
     VAR_23);
   VAR_43 = -VAR_16;
   goto unm_err_out;
  }
  VAR_37->itype.index.block_size_bits =
    FUNC_20(VAR_37->itype.index.block_size) - 1;

  if (VAR_36->cluster_size <= VAR_37->itype.index.block_size) {
   VAR_37->itype.index.vcn_size = VAR_36->cluster_size;
   VAR_37->itype.index.vcn_size_bits = VAR_36->cluster_size_bits;
  } else {
   VAR_37->itype.index.vcn_size = VAR_36->sector_size;
   VAR_37->itype.index.vcn_size_bits = VAR_36->sector_size_bits;
  }


  FUNC_10(VAR_37);
  VAR_37->type = VAR_8;
  VAR_37->name = VAR_19;
  VAR_37->name_len = 4;

  if (!(VAR_46->index.flags & VAR_20)) {

   VAR_35->i_size = VAR_37->initialized_size =
     VAR_37->allocated_size = 0;

   FUNC_33(VAR_42);
   FUNC_45(VAR_37);
   VAR_39 = ((void*)0);
   VAR_42 = ((void*)0);
   goto skip_large_dir_stuff;
  }
  FUNC_9(VAR_37);

  FUNC_34(VAR_42);
  VAR_43 = FUNC_32(VAR_8, VAR_19, 4,
    VAR_11, 0, ((void*)0), 0, VAR_42);
  if (FUNC_44(VAR_43)) {
   if (VAR_43 == -VAR_14)
    FUNC_37(VAR_35->i_sb, "$INDEX_ALLOCATION "
      "attribute is not present but "
      "$INDEX_ROOT indicated it is.");
   else
    FUNC_37(VAR_35->i_sb, "Failed to lookup "
      "$INDEX_ALLOCATION "
      "attribute.");
   goto unm_err_out;
  }
  VAR_40 = VAR_42->attr;
  if (!VAR_40->non_resident) {
   FUNC_37(VAR_35->i_sb, "$INDEX_ALLOCATION attribute "
     "is resident.");
   goto unm_err_out;
  }




  if (FUNC_44(VAR_40->name_length && (FUNC_23(VAR_40->name_offset) >=
    FUNC_23(
    VAR_40->data.non_resident.mapping_pairs_offset)))) {
   FUNC_37(VAR_36->sb, "$INDEX_ALLOCATION attribute name "
     "is placed after the mapping pairs "
     "array.");
   goto unm_err_out;
  }
  if (VAR_40->flags & VAR_2) {
   FUNC_37(VAR_35->i_sb, "$INDEX_ALLOCATION attribute "
     "is encrypted.");
   goto unm_err_out;
  }
  if (VAR_40->flags & VAR_3) {
   FUNC_37(VAR_35->i_sb, "$INDEX_ALLOCATION attribute "
     "is sparse.");
   goto unm_err_out;
  }
  if (VAR_40->flags & VAR_0) {
   FUNC_37(VAR_35->i_sb, "$INDEX_ALLOCATION attribute "
     "is compressed.");
   goto unm_err_out;
  }
  if (VAR_40->data.non_resident.lowest_vcn) {
   FUNC_37(VAR_35->i_sb, "First extent of "
     "$INDEX_ALLOCATION attribute has non "
     "zero lowest_vcn.");
   goto unm_err_out;
  }
  VAR_35->i_size = FUNC_43(VAR_40->data.non_resident.data_size);
  VAR_37->initialized_size = FUNC_43(
    VAR_40->data.non_resident.initialized_size);
  VAR_37->allocated_size = FUNC_43(
    VAR_40->data.non_resident.allocated_size);




  FUNC_33(VAR_42);
  FUNC_45(VAR_37);
  VAR_39 = ((void*)0);
  VAR_42 = ((void*)0);

  VAR_38 = FUNC_31(VAR_35, VAR_5, VAR_19, 4);
  if (FUNC_0(VAR_38)) {
   FUNC_37(VAR_35->i_sb, "Failed to get bitmap attribute.");
   VAR_43 = FUNC_17(VAR_38);
   goto unm_err_out;
  }
  VAR_45 = FUNC_14(VAR_38);
  if (FUNC_2(VAR_45) || FUNC_3(VAR_45) ||
    FUNC_13(VAR_45)) {
   FUNC_37(VAR_35->i_sb, "$BITMAP attribute is compressed "
     "and/or encrypted and/or sparse.");
   goto iput_unm_err_out;
  }

  VAR_44 = FUNC_21(VAR_38);
  if ((VAR_44 << 3) < (VAR_35->i_size >>
    VAR_37->itype.index.block_size_bits)) {
   FUNC_37(VAR_35->i_sb, "Index bitmap too small (0x%llx) "
     "for index allocation (0x%llx).",
     VAR_44 << 3, VAR_35->i_size);
   goto iput_unm_err_out;
  }

  FUNC_22(VAR_38);
skip_large_dir_stuff:

  VAR_35->i_op = &VAR_30;
  VAR_35->i_fop = &VAR_31;
 } else {

  FUNC_34(VAR_42);


  VAR_37->type = VAR_6;
  VAR_37->name = ((void*)0);
  VAR_37->name_len = 0;


  VAR_43 = FUNC_32(VAR_6, ((void*)0), 0, 0, 0, ((void*)0), 0, VAR_42);
  if (FUNC_44(VAR_43)) {
   VAR_35->i_size = VAR_37->initialized_size =
     VAR_37->allocated_size = 0;
   if (VAR_43 != -VAR_14) {
    FUNC_37(VAR_35->i_sb, "Failed to lookup $DATA "
      "attribute.");
    goto unm_err_out;
   }




   if (VAR_35->i_ino == VAR_18)
    goto no_data_attr_special_case;
   if (FUNC_39(VAR_42) > 0)
    goto no_data_attr_special_case;


   FUNC_37(VAR_35->i_sb, "$DATA attribute is missing.");
   goto unm_err_out;
  }
  VAR_40 = VAR_42->attr;

  if (VAR_40->flags & (VAR_0 | VAR_3)) {
   if (VAR_40->flags & VAR_0) {
    FUNC_7(VAR_37);
    if (VAR_36->cluster_size > 4096) {
     FUNC_37(VAR_35->i_sb, "Found "
       "compressed data but "
       "compression is "
       "disabled due to "
       "cluster size (%i) > "
       "4kiB.",
       VAR_36->cluster_size);
     goto unm_err_out;
    }
    if ((VAR_40->flags & VAR_0)
      != VAR_1) {
     FUNC_37(VAR_35->i_sb, "Found unknown "
       "compression method "
       "or corrupt file.");
     goto unm_err_out;
    }
   }
   if (VAR_40->flags & VAR_3)
    FUNC_12(VAR_37);
  }
  if (VAR_40->flags & VAR_2) {
   if (FUNC_2(VAR_37)) {
    FUNC_37(VAR_35->i_sb, "Found encrypted and "
      "compressed data.");
    goto unm_err_out;
   }
   FUNC_8(VAR_37);
  }
  if (VAR_40->non_resident) {
   FUNC_11(VAR_37);
   if (FUNC_2(VAR_37) || FUNC_13(VAR_37)) {
    if (FUNC_2(VAR_37) && VAR_40->data.non_resident.
      compression_unit != 4) {
     FUNC_37(VAR_35->i_sb, "Found "
       "non-standard "
       "compression unit (%u "
       "instead of 4).  "
       "Cannot handle this.",
       VAR_40->data.non_resident.
       compression_unit);
     VAR_43 = -VAR_16;
     goto unm_err_out;
    }
    if (VAR_40->data.non_resident.compression_unit) {
     VAR_37->itype.compressed.block_size = 1U <<
       (VAR_40->data.non_resident.
       compression_unit +
       VAR_36->cluster_size_bits);
     VAR_37->itype.compressed.block_size_bits =
       FUNC_20(VAR_37->itype.
       compressed.
       block_size) - 1;
     VAR_37->itype.compressed.block_clusters =
       1U << VAR_40->data.
       non_resident.
       compression_unit;
    } else {
     VAR_37->itype.compressed.block_size = 0;
     VAR_37->itype.compressed.block_size_bits =
       0;
     VAR_37->itype.compressed.block_clusters =
       0;
    }
    VAR_37->itype.compressed.size = FUNC_43(
      VAR_40->data.non_resident.
      compressed_size);
   }
   if (VAR_40->data.non_resident.lowest_vcn) {
    FUNC_37(VAR_35->i_sb, "First extent of $DATA "
      "attribute has non zero "
      "lowest_vcn.");
    goto unm_err_out;
   }
   VAR_35->i_size = FUNC_43(
     VAR_40->data.non_resident.data_size);
   VAR_37->initialized_size = FUNC_43(
     VAR_40->data.non_resident.initialized_size);
   VAR_37->allocated_size = FUNC_43(
     VAR_40->data.non_resident.allocated_size);
  } else {
   VAR_35->i_size = VAR_37->initialized_size = FUNC_24(
     VAR_40->data.resident.value_length);
   VAR_37->allocated_size = FUNC_24(VAR_40->length) -
     FUNC_23(
     VAR_40->data.resident.value_offset);
   if (VAR_35->i_size > VAR_37->allocated_size) {
    FUNC_37(VAR_35->i_sb, "Resident data attribute "
      "is corrupt (size exceeds "
      "allocation).");
    goto unm_err_out;
   }
  }
no_data_attr_special_case:

  FUNC_33(VAR_42);
  FUNC_45(VAR_37);
  VAR_39 = ((void*)0);
  VAR_42 = ((void*)0);

  VAR_35->i_op = &VAR_32;
  VAR_35->i_fop = &VAR_33;
 }
 if (FUNC_4(VAR_37))
  VAR_35->i_mapping->a_ops = &VAR_34;
 else
  VAR_35->i_mapping->a_ops = &VAR_29;
 if (FUNC_19(VAR_35->i_mode) && (FUNC_2(VAR_37) || FUNC_13(VAR_37)))
  VAR_35->i_blocks = VAR_37->itype.compressed.size >> 9;
 else
  VAR_35->i_blocks = VAR_37->allocated_size >> 9;
 FUNC_36("Done.");
 return 0;
iput_unm_err_out:
 FUNC_22(VAR_38);
unm_err_out:
 if (!VAR_43)
  VAR_43 = -VAR_13;
 if (VAR_42)
  FUNC_33(VAR_42);
 if (VAR_39)
  FUNC_45(VAR_37);
err_out:
 FUNC_37(VAR_36->sb, "Failed with error code %i.  Marking corrupt "
   "inode 0x%lx as bad.  Run chkdsk.", VAR_43, VAR_35->i_ino);
 FUNC_26(VAR_35);
 if (VAR_43 != -VAR_16 && VAR_43 != -VAR_15)
  FUNC_16(VAR_36);
 return VAR_43;
}
