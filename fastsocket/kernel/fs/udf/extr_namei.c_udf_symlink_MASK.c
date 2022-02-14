
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_17__ {int partitionReferenceNum; int logicalBlockNum; } ;
struct TYPE_21__ {char* i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenExtents; int i_lenEAttr; int i_lenAlloc; TYPE_13__ i_location; TYPE_3__ i_ext; } ;
struct udf_fileident_bh {TYPE_4__* sbh; TYPE_4__* ebh; } ;
struct pathComponent {int componentType; int lengthComponentIdent; int componentIdent; scalar_t__ componentFileVersionNum; } ;
struct logicalVolIntegrityDesc {scalar_t__ logicalVolContentsUse; } ;
struct logicalVolHeaderDesc {int uniqueID; } ;
struct kernel_lb_addr {int logicalBlockNum; int partitionReferenceNum; } ;
struct TYPE_20__ {int * a_ops; } ;
struct inode {int i_mode; int i_size; TYPE_6__* i_sb; int * i_op; TYPE_2__ i_data; } ;
struct TYPE_19__ {scalar_t__ impUse; int extLocation; void* extLength; } ;
struct fileIdentDesc {TYPE_1__ icb; } ;
struct extent_position {TYPE_4__* bh; int offset; TYPE_13__ block; } ;
struct dentry {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct allocDescImpUse {scalar_t__ impUse; } ;
typedef void* __le32 ;
struct TYPE_23__ {int s_blocksize; } ;
struct TYPE_22__ {char* b_data; } ;
struct TYPE_18__ {struct buffer_head* s_lvid_bh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 TYPE_15__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_13__) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (TYPE_4__*,struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int ,char*,int) ;
 int FUNC_18 (char*,int,int) ;
 int VAR_7 ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int ) ;
 struct fileIdentDesc* FUNC_21 (struct inode*,struct dentry*,struct udf_fileident_bh*,struct fileIdentDesc*,int*) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (TYPE_6__*,int,int ,int ) ;
 int FUNC_25 (TYPE_6__*,struct inode*,int ,int ,int*) ;
 struct inode* FUNC_26 (struct inode*,int,int*) ;
 int FUNC_27 (TYPE_6__*,char*,char*,int) ;
 int VAR_8 ;
 TYPE_4__* FUNC_28 (TYPE_6__*,int) ;
 int FUNC_29 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;
 int FUNC_30 (TYPE_4__*) ;
 int FUNC_31 () ;

__attribute__((used)) static int FUNC_32(struct inode *VAR_9, struct dentry *VAR_10,
         const char *VAR_11)
{
 struct inode *VAR_12;
 struct pathComponent *VAR_13;
 char *VAR_14;
 struct udf_fileident_bh VAR_15;
 struct extent_position VAR_16 = {};
 int VAR_17, VAR_18 = 0;
 struct fileIdentDesc *VAR_19;
 struct fileIdentDesc VAR_20;
 char *VAR_21;
 int VAR_22;
 int VAR_23;
 char *VAR_24 = ((void*)0);
 int VAR_25;
 struct buffer_head *VAR_26;
 struct udf_inode_info *VAR_27;

 FUNC_13();
 VAR_12 = FUNC_26(VAR_9, VAR_4, &VAR_22);
 if (!VAR_12)
  goto out;

 VAR_24 = FUNC_10(VAR_6, VAR_2);
 if (!VAR_24) {
  VAR_22 = -VAR_1;
  goto out_no_entry;
 }

 VAR_27 = FUNC_0(VAR_12);
 VAR_12->i_mode = VAR_4 | VAR_5;
 VAR_12->i_data.a_ops = &VAR_8;
 VAR_12->i_op = &VAR_7;

 if (VAR_27->i_alloc_type != VAR_3) {
  struct kernel_lb_addr VAR_28;
  uint32_t VAR_29;

  VAR_23 = FUNC_25(VAR_12->i_sb, VAR_12,
    VAR_27->i_location.partitionReferenceNum,
    VAR_27->i_location.logicalBlockNum, &VAR_22);
  if (!VAR_23)
   goto out_no_entry;
  VAR_16.block = VAR_27->i_location;
  VAR_16.offset = FUNC_23(VAR_12);
  VAR_16.bh = ((void*)0);
  VAR_28.logicalBlockNum = VAR_23;
  VAR_28.partitionReferenceNum =
    VAR_27->i_location.partitionReferenceNum;
  VAR_29 = VAR_12->i_sb->s_blocksize;
  VAR_27->i_lenExtents = VAR_29;
  FUNC_20(VAR_12, &VAR_16, &VAR_28, VAR_29, 0);
  FUNC_2(VAR_16.bh);

  VAR_23 = FUNC_24(VAR_12->i_sb, VAR_23,
    VAR_27->i_location.partitionReferenceNum,
    0);
  VAR_16.bh = FUNC_28(VAR_12->i_sb, VAR_23);
  FUNC_12(VAR_16.bh);
  FUNC_18(VAR_16.bh->b_data, 0x00, VAR_12->i_sb->s_blocksize);
  FUNC_19(VAR_16.bh);
  FUNC_30(VAR_16.bh);
  FUNC_15(VAR_16.bh, VAR_12);
  VAR_21 = VAR_16.bh->b_data + FUNC_22(VAR_12);
 } else
  VAR_21 = VAR_27->i_ext.i_data + VAR_27->i_lenEAttr;

 VAR_17 = VAR_12->i_sb->s_blocksize - FUNC_22(VAR_12);
 VAR_13 = (struct pathComponent *)VAR_21;

 if (*VAR_11 == '/') {
  do {
   VAR_11++;
  } while (*VAR_11 == '/');

  VAR_13->componentType = 1;
  VAR_13->lengthComponentIdent = 0;
  VAR_13->componentFileVersionNum = 0;
  VAR_18 += sizeof(struct pathComponent);
 }

 VAR_22 = -VAR_0;

 while (*VAR_11) {
  if (VAR_18 + sizeof(struct pathComponent) > VAR_17)
   goto out_no_entry;

  VAR_13 = (struct pathComponent *)(VAR_21 + VAR_18);

  VAR_14 = (char *)VAR_11;

  do {
   VAR_11++;
  } while (*VAR_11 && *VAR_11 != '/');

  VAR_13->componentType = 5;
  VAR_13->lengthComponentIdent = 0;
  VAR_13->componentFileVersionNum = 0;
  if (VAR_14[0] == '.') {
   if ((VAR_11 - VAR_14) == 1)
    VAR_13->componentType = 4;
   else if ((VAR_11 - VAR_14) == 2 &&
     VAR_14[1] == '.')
    VAR_13->componentType = 3;
  }

  if (VAR_13->componentType == 5) {
   VAR_25 = FUNC_27(VAR_12->i_sb, VAR_14, VAR_24,
         VAR_11 - VAR_14);
   if (!VAR_25)
    goto out_no_entry;

   if (VAR_18 + sizeof(struct pathComponent) + VAR_25 >
     VAR_17)
    goto out_no_entry;
   else
    VAR_13->lengthComponentIdent = VAR_25;

   FUNC_17(VAR_13->componentIdent, VAR_24, VAR_25);
  }

  VAR_18 += sizeof(struct pathComponent) + VAR_13->lengthComponentIdent;

  if (*VAR_11) {
   do {
    VAR_11++;
   } while (*VAR_11 == '/');
  }
 }

 FUNC_2(VAR_16.bh);
 VAR_12->i_size = VAR_18;
 if (VAR_27->i_alloc_type == VAR_3)
  VAR_27->i_lenAlloc = VAR_12->i_size;
 FUNC_16(VAR_12);

 VAR_19 = FUNC_21(VAR_9, VAR_10, &VAR_15, &VAR_20, &VAR_22);
 if (!VAR_19)
  goto out_no_entry;
 VAR_20.icb.extLength = FUNC_3(VAR_12->i_sb->s_blocksize);
 VAR_20.icb.extLocation = FUNC_5(VAR_27->i_location);
 VAR_26 = FUNC_1(VAR_12->i_sb)->s_lvid_bh;
 if (VAR_26) {
  struct logicalVolIntegrityDesc *VAR_30 =
    (struct logicalVolIntegrityDesc *)VAR_26->b_data;
  struct logicalVolHeaderDesc *VAR_31;
  uint64_t VAR_32;
  VAR_31 = (struct logicalVolHeaderDesc *)
    VAR_30->logicalVolContentsUse;
  VAR_32 = FUNC_11(VAR_31->uniqueID);
  *(__le32 *)((struct allocDescImpUse *)VAR_20.icb.impUse)->impUse =
   FUNC_3(VAR_32 & 0x00000000FFFFFFFFUL);
  if (!(++VAR_32 & 0x00000000FFFFFFFFUL))
   VAR_32 += 16;
  VAR_31->uniqueID = FUNC_4(VAR_32);
  FUNC_14(VAR_26);
 }
 FUNC_29(VAR_9, &VAR_20, VAR_19, &VAR_15, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_9)->i_alloc_type == VAR_3)
  FUNC_16(VAR_9);
 if (VAR_15.sbh != VAR_15.ebh)
  FUNC_2(VAR_15.ebh);
 FUNC_2(VAR_15.sbh);
 FUNC_6(VAR_10, VAR_12);
 VAR_22 = 0;

out:
 FUNC_9(VAR_24);
 FUNC_31();
 return VAR_22;

out_no_entry:
 FUNC_7(VAR_12);
 FUNC_8(VAR_12);
 goto out;
}
