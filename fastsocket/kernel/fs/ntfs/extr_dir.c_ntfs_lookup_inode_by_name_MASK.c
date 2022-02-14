
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_52__ TYPE_9__ ;
typedef struct TYPE_51__ TYPE_8__ ;
typedef struct TYPE_50__ TYPE_7__ ;
typedef struct TYPE_49__ TYPE_6__ ;
typedef struct TYPE_48__ TYPE_5__ ;
typedef struct TYPE_47__ TYPE_4__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_29__ ;
typedef struct TYPE_43__ TYPE_1__ ;
typedef struct TYPE_42__ TYPE_18__ ;
typedef struct TYPE_41__ TYPE_17__ ;
typedef struct TYPE_40__ TYPE_16__ ;
typedef struct TYPE_39__ TYPE_15__ ;
typedef struct TYPE_38__ TYPE_14__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef void* u64 ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int sle64 ;
typedef int ntfschar ;
struct TYPE_36__ {int cluster_size_bits; int upcase_len; int upcase; struct super_block* sb; } ;
typedef TYPE_12__ ntfs_volume ;
struct TYPE_37__ {void* mref; scalar_t__ len; int name; scalar_t__ type; } ;
typedef TYPE_13__ ntfs_name ;
struct TYPE_48__ {int vcn_size_bits; int block_size; } ;
struct TYPE_49__ {TYPE_5__ index; } ;
struct TYPE_38__ {int mft_no; TYPE_6__ itype; TYPE_12__* vol; } ;
typedef TYPE_14__ ntfs_inode ;
struct TYPE_39__ {scalar_t__ mrec; TYPE_3__* attr; } ;
typedef TYPE_15__ ntfs_attr_search_ctx ;
typedef int VCN ;
struct TYPE_52__ {scalar_t__ file_name_length; scalar_t__ file_name_type; int file_name; } ;
struct TYPE_50__ {int indexed_file; } ;
struct TYPE_51__ {TYPE_7__ dir; } ;
struct TYPE_47__ {int entries_offset; int index_length; } ;
struct TYPE_43__ {int value_offset; } ;
struct TYPE_45__ {TYPE_1__ resident; } ;
struct TYPE_46__ {TYPE_2__ data; } ;
struct TYPE_44__ {struct address_space* i_mapping; int i_mode; } ;
struct TYPE_35__ {int flags; int entries_offset; int index_length; int allocated_size; } ;
struct TYPE_42__ {TYPE_11__ index; int index_block_vcn; int magic; } ;
struct TYPE_34__ {TYPE_9__ file_name; } ;
struct TYPE_41__ {int flags; int length; TYPE_10__ key; TYPE_8__ data; int key_length; } ;
struct TYPE_40__ {TYPE_4__ index; } ;
typedef void* MFT_REF ;
typedef struct page MFT_RECORD ;
typedef TYPE_16__ INDEX_ROOT ;
typedef int INDEX_ENTRY_HEADER ;
typedef TYPE_17__ INDEX_ENTRY ;
typedef TYPE_18__ INDEX_ALLOCATION ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_11 ;
 int FUNC_3 (TYPE_14__*) ;
 int FUNC_4 (TYPE_14__*) ;
 int VAR_12 ;
 int FUNC_5 (TYPE_12__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ) ;
 TYPE_29__* FUNC_8 (TYPE_14__*) ;
 int FUNC_9 (TYPE_13__*) ;
 TYPE_13__* FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (struct page*) ;
 struct page* FUNC_15 (TYPE_14__*) ;
 int FUNC_16 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_17 (int const*,int const,int *,scalar_t__,int ,int ,int ) ;
 TYPE_15__* FUNC_18 (TYPE_14__*,struct page*) ;
 int FUNC_19 (int ,int ,int,int ,int ,int *,int ,TYPE_15__*) ;
 int FUNC_20 (TYPE_15__*) ;
 int FUNC_21 (int const*,int const,int *,scalar_t__,int,int ,int ,int ) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (struct super_block*,char*,...) ;
 int FUNC_24 (int ) ;
 struct page* FUNC_25 (struct address_space*,int) ;
 int FUNC_26 (struct page*) ;
 scalar_t__ FUNC_27 (struct page*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int *) ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 (struct page*) ;
 int FUNC_32 (TYPE_14__*) ;

MFT_REF FUNC_33(ntfs_inode *VAR_16, const ntfschar *VAR_17,
  const int VAR_18, ntfs_name **VAR_19)
{
 ntfs_volume *VAR_20 = VAR_16->vol;
 struct super_block *VAR_21 = VAR_20->sb;
 MFT_RECORD *VAR_22;
 INDEX_ROOT *VAR_23;
 INDEX_ENTRY *VAR_24;
 INDEX_ALLOCATION *VAR_25;
 u8 *VAR_26;
 u64 VAR_27;
 ntfs_attr_search_ctx *VAR_28;
 int VAR_29, VAR_30;
 VCN VAR_31, VAR_32;
 struct address_space *VAR_33;
 struct page *VAR_34;
 u8 *VAR_35;
 ntfs_name *VAR_36 = ((void*)0);

 FUNC_0(!FUNC_7(FUNC_8(VAR_16)->i_mode));
 FUNC_0(FUNC_3(VAR_16));

 VAR_22 = FUNC_15(VAR_16);
 if (FUNC_2(VAR_22)) {
  FUNC_23(VAR_21, "map_mft_record() failed with error code %ld.",
    -FUNC_6(VAR_22));
  return FUNC_1(FUNC_6(VAR_22));
 }
 VAR_28 = FUNC_18(VAR_16, VAR_22);
 if (FUNC_30(!VAR_28)) {
  VAR_29 = -VAR_4;
  goto err_out;
 }

 VAR_29 = FUNC_19(VAR_0, VAR_7, 4, VAR_1, 0, ((void*)0),
   0, VAR_28);
 if (FUNC_30(VAR_29)) {
  if (VAR_29 == -VAR_3) {
   FUNC_23(VAR_21, "Index root attribute missing in "
     "directory inode 0x%lx.",
     VAR_16->mft_no);
   VAR_29 = -VAR_2;
  }
  goto err_out;
 }

 VAR_23 = (INDEX_ROOT*)((u8*)VAR_28->attr +
   FUNC_11(VAR_28->attr->data.resident.value_offset));
 VAR_26 = (u8*)&VAR_23->index + FUNC_12(VAR_23->index.index_length);

 VAR_24 = (INDEX_ENTRY*)((u8*)&VAR_23->index +
   FUNC_12(VAR_23->index.entries_offset));




 for (;; VAR_24 = (INDEX_ENTRY*)((u8*)VAR_24 + FUNC_11(VAR_24->length))) {

  if ((u8*)VAR_24 < (u8*)VAR_28->mrec || (u8*)VAR_24 +
    sizeof(INDEX_ENTRY_HEADER) > VAR_26 ||
    (u8*)VAR_24 + FUNC_11(VAR_24->key_length) >
    VAR_26)
   goto dir_err_out;




  if (VAR_24->flags & VAR_9)
   break;







  if (FUNC_17(VAR_17, VAR_18,
    (ntfschar*)&VAR_24->key.file_name.file_name,
    VAR_24->key.file_name.file_name_length,
    VAR_1, VAR_20->upcase, VAR_20->upcase_len)) {
found_it:
   if (VAR_24->key.file_name.file_name_type == VAR_5) {
    if (!VAR_36) {
     VAR_36 = FUNC_10(sizeof(ntfs_name),
       VAR_6);
     if (!VAR_36) {
      VAR_29 = -VAR_4;
      goto err_out;
     }
    }
    VAR_36->mref = FUNC_13(
      VAR_24->data.dir.indexed_file);
    VAR_36->type = VAR_5;
    VAR_36->len = 0;
    *VAR_19 = VAR_36;
   } else {
    FUNC_9(VAR_36);
    *VAR_19 = ((void*)0);
   }
   VAR_27 = FUNC_13(VAR_24->data.dir.indexed_file);
   FUNC_20(VAR_28);
   FUNC_32(VAR_16);
   return VAR_27;
  }
  if (!FUNC_5(VAR_20) &&
    VAR_24->key.file_name.file_name_type &&
    FUNC_17(VAR_17, VAR_18,
    (ntfschar*)&VAR_24->key.file_name.file_name,
    VAR_24->key.file_name.file_name_length,
    VAR_8, VAR_20->upcase, VAR_20->upcase_len)) {
   int VAR_37 = sizeof(ntfs_name);
   u8 VAR_38 = VAR_24->key.file_name.file_name_type;
   u8 VAR_39 = VAR_24->key.file_name.file_name_length;


   if (VAR_36) {
    FUNC_23(VAR_21, "Found already allocated name "
      "in phase 1. Please run chkdsk "
      "and if that doesn't find any "
      "errors please report you saw "
      "this message to "
      "linux-ntfs-dev@lists."
      "sourceforge.net.");
    goto dir_err_out;
   }

   if (VAR_38 != VAR_5)
    VAR_37 += VAR_39 * sizeof(ntfschar);
   VAR_36 = FUNC_10(VAR_37, VAR_6);
   if (!VAR_36) {
    VAR_29 = -VAR_4;
    goto err_out;
   }
   VAR_36->mref = FUNC_13(VAR_24->data.dir.indexed_file);
   VAR_36->type = VAR_38;
   if (VAR_38 != VAR_5) {
    VAR_36->len = VAR_39;
    FUNC_16(VAR_36->name, VAR_24->key.file_name.file_name,
      VAR_39 * sizeof(ntfschar));
   } else
    VAR_36->len = 0;
   *VAR_19 = VAR_36;
  }




  VAR_30 = FUNC_21(VAR_17, VAR_18,
    (ntfschar*)&VAR_24->key.file_name.file_name,
    VAR_24->key.file_name.file_name_length, 1,
    VAR_8, VAR_20->upcase, VAR_20->upcase_len);





  if (VAR_30 == -1)
   break;

  if (VAR_30)
   continue;





  VAR_30 = FUNC_21(VAR_17, VAR_18,
    (ntfschar*)&VAR_24->key.file_name.file_name,
    VAR_24->key.file_name.file_name_length, 1,
    VAR_1, VAR_20->upcase, VAR_20->upcase_len);
  if (VAR_30 == -1)
   break;
  if (VAR_30)
   continue;





  goto found_it;
 }






 if (!(VAR_24->flags & VAR_10)) {
  if (VAR_36) {
   FUNC_20(VAR_28);
   FUNC_32(VAR_16);
   return VAR_36->mref;
  }
  FUNC_22("Entry not found.");
  VAR_29 = -VAR_3;
  goto err_out;
 }

 if (!FUNC_4(VAR_16)) {
  FUNC_23(VAR_21, "No index allocation attribute but index entry "
    "requires one. Directory inode 0x%lx is "
    "corrupt or driver bug.", VAR_16->mft_no);
  goto err_out;
 }

 VAR_31 = FUNC_29((sle64*)((u8*)VAR_24 + FUNC_11(VAR_24->length) - 8));
 VAR_33 = FUNC_8(VAR_16)->i_mapping;




 FUNC_20(VAR_28);
 FUNC_32(VAR_16);
 VAR_22 = ((void*)0);
 VAR_28 = ((void*)0);
descend_into_child_node:





 VAR_34 = FUNC_25(VAR_33, VAR_31 <<
   VAR_16->itype.index.vcn_size_bits >> VAR_14);
 if (FUNC_2(VAR_34)) {
  FUNC_23(VAR_21, "Failed to map directory index page, error %ld.",
    -FUNC_6(VAR_34));
  VAR_29 = FUNC_6(VAR_34);
  goto err_out;
 }
 FUNC_14(VAR_34);
 VAR_35 = (u8*)FUNC_27(VAR_34);
fast_descend_into_child_node:

 VAR_25 = (INDEX_ALLOCATION*)(VAR_35 + ((VAR_31 <<
   VAR_16->itype.index.vcn_size_bits) & ~VAR_13));

 if ((u8*)VAR_25 < VAR_35 || (u8*)VAR_25 > VAR_35 + VAR_15) {
  FUNC_23(VAR_21, "Out of bounds check failed. Corrupt directory "
    "inode 0x%lx or driver bug.", VAR_16->mft_no);
  goto unm_err_out;
 }

 if (FUNC_30(!FUNC_24(VAR_25->magic))) {
  FUNC_23(VAR_21, "Directory index record with vcn 0x%llx is "
    "corrupt.  Corrupt inode 0x%lx.  Run chkdsk.",
    (unsigned long long)VAR_31, VAR_16->mft_no);
  goto unm_err_out;
 }
 if (FUNC_28(VAR_25->index_block_vcn) != VAR_31) {
  FUNC_23(VAR_21, "Actual VCN (0x%llx) of index buffer is "
    "different from expected VCN (0x%llx). "
    "Directory inode 0x%lx is corrupt or driver "
    "bug.", (unsigned long long)
    FUNC_28(VAR_25->index_block_vcn),
    (unsigned long long)VAR_31, VAR_16->mft_no);
  goto unm_err_out;
 }
 if (FUNC_12(VAR_25->index.allocated_size) + 0x18 !=
   VAR_16->itype.index.block_size) {
  FUNC_23(VAR_21, "Index buffer (VCN 0x%llx) of directory inode "
    "0x%lx has a size (%u) differing from the "
    "directory specified size (%u). Directory "
    "inode is corrupt or driver bug.",
    (unsigned long long)VAR_31, VAR_16->mft_no,
    FUNC_12(VAR_25->index.allocated_size) + 0x18,
    VAR_16->itype.index.block_size);
  goto unm_err_out;
 }
 VAR_26 = (u8*)VAR_25 + VAR_16->itype.index.block_size;
 if (VAR_26 > VAR_35 + VAR_15) {
  FUNC_23(VAR_21, "Index buffer (VCN 0x%llx) of directory inode "
    "0x%lx crosses page boundary. Impossible! "
    "Cannot access! This is probably a bug in the "
    "driver.", (unsigned long long)VAR_31,
    VAR_16->mft_no);
  goto unm_err_out;
 }
 VAR_26 = (u8*)&VAR_25->index + FUNC_12(VAR_25->index.index_length);
 if (VAR_26 > (u8*)VAR_25 + VAR_16->itype.index.block_size) {
  FUNC_23(VAR_21, "Size of index buffer (VCN 0x%llx) of directory "
    "inode 0x%lx exceeds maximum size.",
    (unsigned long long)VAR_31, VAR_16->mft_no);
  goto unm_err_out;
 }

 VAR_24 = (INDEX_ENTRY*)((u8*)&VAR_25->index +
   FUNC_12(VAR_25->index.entries_offset));





 for (;; VAR_24 = (INDEX_ENTRY*)((u8*)VAR_24 + FUNC_11(VAR_24->length))) {

  if ((u8*)VAR_24 < (u8*)VAR_25 || (u8*)VAR_24 +
    sizeof(INDEX_ENTRY_HEADER) > VAR_26 ||
    (u8*)VAR_24 + FUNC_11(VAR_24->key_length) >
    VAR_26) {
   FUNC_23(VAR_21, "Index entry out of bounds in "
     "directory inode 0x%lx.",
     VAR_16->mft_no);
   goto unm_err_out;
  }




  if (VAR_24->flags & VAR_9)
   break;







  if (FUNC_17(VAR_17, VAR_18,
    (ntfschar*)&VAR_24->key.file_name.file_name,
    VAR_24->key.file_name.file_name_length,
    VAR_1, VAR_20->upcase, VAR_20->upcase_len)) {
found_it2:
   if (VAR_24->key.file_name.file_name_type == VAR_5) {
    if (!VAR_36) {
     VAR_36 = FUNC_10(sizeof(ntfs_name),
       VAR_6);
     if (!VAR_36) {
      VAR_29 = -VAR_4;
      goto unm_err_out;
     }
    }
    VAR_36->mref = FUNC_13(
      VAR_24->data.dir.indexed_file);
    VAR_36->type = VAR_5;
    VAR_36->len = 0;
    *VAR_19 = VAR_36;
   } else {
    FUNC_9(VAR_36);
    *VAR_19 = ((void*)0);
   }
   VAR_27 = FUNC_13(VAR_24->data.dir.indexed_file);
   FUNC_31(VAR_34);
   FUNC_26(VAR_34);
   return VAR_27;
  }
  if (!FUNC_5(VAR_20) &&
    VAR_24->key.file_name.file_name_type &&
    FUNC_17(VAR_17, VAR_18,
    (ntfschar*)&VAR_24->key.file_name.file_name,
    VAR_24->key.file_name.file_name_length,
    VAR_8, VAR_20->upcase, VAR_20->upcase_len)) {
   int VAR_40 = sizeof(ntfs_name);
   u8 VAR_41 = VAR_24->key.file_name.file_name_type;
   u8 VAR_42 = VAR_24->key.file_name.file_name_length;


   if (VAR_36) {
    FUNC_23(VAR_21, "Found already allocated name "
      "in phase 2. Please run chkdsk "
      "and if that doesn't find any "
      "errors please report you saw "
      "this message to "
      "linux-ntfs-dev@lists."
      "sourceforge.net.");
    FUNC_31(VAR_34);
    FUNC_26(VAR_34);
    goto dir_err_out;
   }

   if (VAR_41 != VAR_5)
    VAR_40 += VAR_42 * sizeof(ntfschar);
   VAR_36 = FUNC_10(VAR_40, VAR_6);
   if (!VAR_36) {
    VAR_29 = -VAR_4;
    goto unm_err_out;
   }
   VAR_36->mref = FUNC_13(VAR_24->data.dir.indexed_file);
   VAR_36->type = VAR_41;
   if (VAR_41 != VAR_5) {
    VAR_36->len = VAR_42;
    FUNC_16(VAR_36->name, VAR_24->key.file_name.file_name,
      VAR_42 * sizeof(ntfschar));
   } else
    VAR_36->len = 0;
   *VAR_19 = VAR_36;
  }




  VAR_30 = FUNC_21(VAR_17, VAR_18,
    (ntfschar*)&VAR_24->key.file_name.file_name,
    VAR_24->key.file_name.file_name_length, 1,
    VAR_8, VAR_20->upcase, VAR_20->upcase_len);





  if (VAR_30 == -1)
   break;

  if (VAR_30)
   continue;





  VAR_30 = FUNC_21(VAR_17, VAR_18,
    (ntfschar*)&VAR_24->key.file_name.file_name,
    VAR_24->key.file_name.file_name_length, 1,
    VAR_1, VAR_20->upcase, VAR_20->upcase_len);
  if (VAR_30 == -1)
   break;
  if (VAR_30)
   continue;





  goto found_it2;
 }




 if (VAR_24->flags & VAR_10) {
  if ((VAR_25->index.flags & VAR_12) == VAR_11) {
   FUNC_23(VAR_21, "Index entry with child node found in "
     "a leaf node in directory inode 0x%lx.",
     VAR_16->mft_no);
   goto unm_err_out;
  }

  VAR_32 = VAR_31;
  VAR_31 = FUNC_29((sle64*)((u8*)VAR_24 +
    FUNC_11(VAR_24->length) - 8));
  if (VAR_31 >= 0) {


   if (VAR_32 << VAR_20->cluster_size_bits >>
     VAR_14 == VAR_31 <<
     VAR_20->cluster_size_bits >>
     VAR_14)
    goto fast_descend_into_child_node;
   FUNC_31(VAR_34);
   FUNC_26(VAR_34);
   goto descend_into_child_node;
  }
  FUNC_23(VAR_21, "Negative child node vcn in directory inode "
    "0x%lx.", VAR_16->mft_no);
  goto unm_err_out;
 }





 if (VAR_36) {
  FUNC_31(VAR_34);
  FUNC_26(VAR_34);
  return VAR_36->mref;
 }
 FUNC_22("Entry not found.");
 VAR_29 = -VAR_3;
unm_err_out:
 FUNC_31(VAR_34);
 FUNC_26(VAR_34);
err_out:
 if (!VAR_29)
  VAR_29 = -VAR_2;
 if (VAR_28)
  FUNC_20(VAR_28);
 if (VAR_22)
  FUNC_32(VAR_16);
 if (VAR_36) {
  FUNC_9(VAR_36);
  *VAR_19 = ((void*)0);
 }
 return FUNC_1(VAR_29);
dir_err_out:
 FUNC_23(VAR_21, "Corrupt directory.  Aborting lookup.");
 goto err_out;
}
