
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct udf_sb_info {scalar_t__ s_udfrev; int s_alloc_mutex; TYPE_2__* s_lvid_bh; } ;
struct TYPE_6__ {int logicalBlockNum; int partitionReferenceNum; } ;
struct TYPE_4__ {void* i_data; } ;
struct udf_inode_info {int i_efe; int i_unique; int i_crtime; int i_alloc_type; scalar_t__ i_use; scalar_t__ i_lenAlloc; scalar_t__ i_lenEAttr; TYPE_3__ i_location; TYPE_1__ i_ext; } ;
struct super_block {scalar_t__ s_blocksize; } ;
struct logicalVolIntegrityDescImpUse {int numFiles; int numDirs; } ;
struct logicalVolIntegrityDesc {scalar_t__ logicalVolContentsUse; } ;
struct logicalVolHeaderDesc {int uniqueID; } ;
struct inode {int i_mode; scalar_t__ i_nlink; int i_flags; struct super_block* i_sb; int i_ctime; int i_atime; int i_mtime; scalar_t__ i_blocks; int i_ino; int i_gid; int i_uid; } ;
struct fileEntry {int dummy; } ;
struct extendedFileEntry {int dummy; } ;
struct TYPE_5__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct udf_inode_info* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct super_block*,int ) ;
 struct udf_sb_info* FUNC_3 (struct super_block*) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 void* FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct inode* FUNC_16 (struct super_block*) ;
 int FUNC_17 (struct super_block*,TYPE_3__*,int ) ;
 int FUNC_18 (struct super_block*,int *,int ,int,int*) ;
 struct logicalVolIntegrityDescImpUse* FUNC_19 (struct udf_sb_info*) ;
 int FUNC_20 (struct super_block*) ;
 scalar_t__ FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*) ;

struct inode *FUNC_23(struct inode *VAR_13, int VAR_14, int *VAR_15)
{
 struct super_block *VAR_16 = VAR_13->i_sb;
 struct udf_sb_info *VAR_17 = FUNC_3(VAR_16);
 struct inode *VAR_18;
 int VAR_19;
 uint32_t VAR_20 = FUNC_1(VAR_13)->i_location.logicalBlockNum;
 struct udf_inode_info *VAR_21;
 struct udf_inode_info *VAR_22 = FUNC_1(VAR_13);

 VAR_18 = FUNC_16(VAR_16);

 if (!VAR_18) {
  *VAR_15 = -VAR_1;
  return ((void*)0);
 }
 *VAR_15 = -VAR_2;

 VAR_21 = FUNC_1(VAR_18);
 if (FUNC_2(VAR_18->i_sb, VAR_10)) {
  VAR_21->i_efe = 1;
  if (VAR_12 > VAR_17->s_udfrev)
   VAR_17->s_udfrev = VAR_12;
  VAR_21->i_ext.i_data = FUNC_10(VAR_18->i_sb->s_blocksize -
         sizeof(struct extendedFileEntry),
         VAR_3);
 } else {
  VAR_21->i_efe = 0;
  VAR_21->i_ext.i_data = FUNC_10(VAR_18->i_sb->s_blocksize -
         sizeof(struct fileEntry),
         VAR_3);
 }
 if (!VAR_21->i_ext.i_data) {
  FUNC_9(VAR_18);
  *VAR_15 = -VAR_1;
  return ((void*)0);
 }

 VAR_19 = FUNC_18(VAR_13->i_sb, ((void*)0),
         VAR_22->i_location.partitionReferenceNum,
         VAR_20, VAR_15);
 if (*VAR_15) {
  FUNC_9(VAR_18);
  return ((void*)0);
 }

 FUNC_14(&VAR_17->s_alloc_mutex);
 if (VAR_17->s_lvid_bh) {
  struct logicalVolIntegrityDesc *VAR_23 =
   (struct logicalVolIntegrityDesc *)
   VAR_17->s_lvid_bh->b_data;
  struct logicalVolIntegrityDescImpUse *VAR_24 =
       FUNC_19(VAR_17);
  struct logicalVolHeaderDesc *VAR_25;
  uint64_t VAR_26;
  VAR_25 = (struct logicalVolHeaderDesc *)
    (VAR_23->logicalVolContentsUse);
  if (FUNC_0(VAR_14))
   FUNC_11(&VAR_24->numDirs, 1);
  else
   FUNC_11(&VAR_24->numFiles, 1);
  VAR_21->i_unique = VAR_26 = FUNC_12(VAR_25->uniqueID);
  if (!(++VAR_26 & 0x00000000FFFFFFFFUL))
   VAR_26 += 16;
  VAR_25->uniqueID = FUNC_4(VAR_26);
  FUNC_20(VAR_16);
 }
 FUNC_15(&VAR_17->s_alloc_mutex);
 VAR_18->i_mode = VAR_14;
 VAR_18->i_uid = FUNC_7();
 if (VAR_13->i_mode & VAR_7) {
  VAR_18->i_gid = VAR_13->i_gid;
  if (FUNC_0(VAR_14))
   VAR_14 |= VAR_7;
 } else {
  VAR_18->i_gid = FUNC_6();
 }

 VAR_21->i_location.logicalBlockNum = VAR_19;
 VAR_21->i_location.partitionReferenceNum =
    VAR_22->i_location.partitionReferenceNum;
 VAR_18->i_ino = FUNC_17(VAR_16, &VAR_21->i_location, 0);
 VAR_18->i_blocks = 0;
 VAR_21->i_lenEAttr = 0;
 VAR_21->i_lenAlloc = 0;
 VAR_21->i_use = 0;
 if (FUNC_2(VAR_18->i_sb, VAR_9))
  VAR_21->i_alloc_type = VAR_4;
 else if (FUNC_2(VAR_18->i_sb, VAR_11))
  VAR_21->i_alloc_type = VAR_6;
 else
  VAR_21->i_alloc_type = VAR_5;
 VAR_18->i_mtime = VAR_18->i_atime = VAR_18->i_ctime =
  VAR_21->i_crtime = FUNC_5(VAR_18->i_sb);
 FUNC_8(VAR_18);
 FUNC_13(VAR_18);

 if (FUNC_21(VAR_18)) {
  FUNC_22(VAR_18);
  VAR_18->i_flags |= VAR_8;
  VAR_18->i_nlink = 0;
  FUNC_9(VAR_18);
  *VAR_15 = -VAR_0;
  return ((void*)0);
 }

 *VAR_15 = 0;
 return VAR_18;
}
