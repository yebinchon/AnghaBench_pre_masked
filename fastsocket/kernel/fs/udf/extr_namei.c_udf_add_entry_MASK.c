
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int i_data; } ;
struct kernel_lb_addr {int logicalBlockNum; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenEAttr; int i_lenAlloc; TYPE_3__ i_ext; struct kernel_lb_addr i_location; } ;
struct udf_fileident_bh {int soffset; int eoffset; TYPE_4__* sbh; TYPE_4__* ebh; } ;
struct tag {int dummy; } ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
struct TYPE_10__ {void* tagSerialNum; } ;
struct fileIdentDesc {int lengthFileIdent; int fileCharacteristics; void* lengthOfImpUse; void* fileVersionNum; TYPE_2__ descTag; } ;
struct extent_position {int offset; TYPE_4__* bh; struct kernel_lb_addr block; } ;
struct TYPE_9__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int sector_t ;
typedef int loff_t ;
struct TYPE_13__ {int s_udfrev; } ;
struct TYPE_12__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int VAR_11 ;
 TYPE_8__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int,struct extent_position*,struct kernel_lb_addr*,int*,int*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct fileIdentDesc*,int ,int) ;
 TYPE_4__* FUNC_10 (struct inode*,int,int,int*) ;
 int FUNC_11 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int*,int) ;
 TYPE_4__* FUNC_12 (struct inode*,int*,int*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 struct fileIdentDesc* FUNC_15 (struct inode*,int*,struct udf_fileident_bh*,struct fileIdentDesc*,struct extent_position*,struct kernel_lb_addr*,int*,int*) ;
 int FUNC_16 (struct super_block*,struct kernel_lb_addr*,int) ;
 int FUNC_17 (char*,int ,int,int,int,int) ;
 int FUNC_18 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int*,int) ;
 int FUNC_19 (struct super_block*,int ,char*,int ) ;
 TYPE_4__* FUNC_20 (struct super_block*,int) ;
 int FUNC_21 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;
 int FUNC_22 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,char*) ;

__attribute__((used)) static struct fileIdentDesc *FUNC_23(struct inode *VAR_12,
        struct dentry *VAR_13,
        struct udf_fileident_bh *VAR_14,
        struct fileIdentDesc *VAR_15, int *VAR_16)
{
 struct super_block *VAR_17 = VAR_12->i_sb;
 struct fileIdentDesc *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0);
 int VAR_20;
 loff_t VAR_21;
 loff_t VAR_22 = FUNC_13(VAR_12) + VAR_12->i_size;
 int VAR_23;
 uint8_t VAR_24;
 uint16_t VAR_25;
 int VAR_26;
 struct kernel_lb_addr VAR_27;
 uint32_t VAR_28 = 0;
 sector_t VAR_29;
 struct extent_position VAR_30 = {};
 struct udf_inode_info *VAR_31;

 VAR_14->sbh = VAR_14->ebh = ((void*)0);
 VAR_19 = FUNC_6(VAR_11, VAR_6);
 if (!VAR_19) {
  *VAR_16 = -VAR_3;
  goto out_err;
 }

 if (VAR_13) {
  if (!VAR_13->d_name.len) {
   *VAR_16 = -VAR_0;
   goto out_err;
  }
  VAR_20 = FUNC_19(VAR_17, VAR_13->d_name.name, VAR_19,
       VAR_13->d_name.len);
  if (!VAR_20) {
   *VAR_16 = -VAR_2;
   goto out_err;
  }
 } else {
  VAR_20 = 0;
 }

 VAR_23 = (sizeof(struct fileIdentDesc) + VAR_20 + 3) & ~3;

 VAR_21 = FUNC_13(VAR_12);

 VAR_14->soffset = VAR_14->eoffset = VAR_21 & (VAR_12->i_sb->s_blocksize - 1);
 VAR_31 = FUNC_0(VAR_12);
 if (VAR_31->i_alloc_type != VAR_7) {
  if (FUNC_4(VAR_12, VAR_21 >> VAR_12->i_sb->s_blocksize_bits, &VAR_30,
      &VAR_27, &VAR_28, &VAR_29) != (VAR_4 >> 30)) {
   VAR_26 = FUNC_16(VAR_12->i_sb,
     &VAR_31->i_location, 0);
   VAR_14->soffset = VAR_14->eoffset = VAR_17->s_blocksize;
   goto add;
  }
  VAR_26 = FUNC_16(VAR_12->i_sb, &VAR_27, VAR_29);
  if ((++VAR_29 << VAR_12->i_sb->s_blocksize_bits) < VAR_28) {
   if (VAR_31->i_alloc_type == VAR_9)
    VAR_30.offset -= sizeof(struct short_ad);
   else if (VAR_31->i_alloc_type == VAR_8)
    VAR_30.offset -= sizeof(struct long_ad);
  } else
   VAR_29 = 0;

  VAR_14->sbh = VAR_14->ebh = FUNC_20(VAR_12->i_sb, VAR_26);
  if (!VAR_14->sbh) {
   *VAR_16 = -VAR_1;
   goto out_err;
  }

  VAR_26 = VAR_31->i_location.logicalBlockNum;
 }

 while (VAR_21 < VAR_22) {
  VAR_18 = FUNC_15(VAR_12, &VAR_21, VAR_14, VAR_15, &VAR_30, &VAR_27,
     &VAR_28, &VAR_29);

  if (!VAR_18) {
   *VAR_16 = -VAR_1;
   goto out_err;
  }

  VAR_25 = FUNC_7(VAR_15->lengthOfImpUse);
  VAR_24 = VAR_15->lengthFileIdent;

  if ((VAR_15->fileCharacteristics & VAR_5) != 0) {
   if (((sizeof(struct fileIdentDesc) +
     VAR_25 + VAR_24 + 3) & ~3) == VAR_23) {
    VAR_15->descTag.tagSerialNum = FUNC_3(1);
    VAR_15->fileVersionNum = FUNC_3(1);
    VAR_15->fileCharacteristics = 0;
    VAR_15->lengthFileIdent = VAR_20;
    VAR_15->lengthOfImpUse = FUNC_3(0);
    if (!FUNC_22(VAR_12, VAR_15, VAR_18, VAR_14, ((void*)0),
        VAR_19))
     goto out_ok;
    else {
     *VAR_16 = -VAR_1;
     goto out_err;
    }
   }
  }
 }

add:

 if (VAR_31->i_alloc_type != VAR_7 && VAR_28) {
  VAR_28 = (VAR_28 + VAR_17->s_blocksize - 1) & ~(VAR_17->s_blocksize - 1);
  if (VAR_31->i_alloc_type == VAR_9)
   VAR_30.offset -= sizeof(struct short_ad);
  else if (VAR_31->i_alloc_type == VAR_8)
   VAR_30.offset -= sizeof(struct long_ad);
  FUNC_21(VAR_12, &VAR_30, &VAR_27, VAR_28, 1);
 }
 VAR_21 += VAR_23;

 if (VAR_31->i_alloc_type == VAR_7 &&
     VAR_17->s_blocksize - VAR_14->eoffset < VAR_23) {
  FUNC_2(VAR_30.bh);
  VAR_30.bh = ((void*)0);
  VAR_14->soffset -= FUNC_13(VAR_12);
  VAR_14->eoffset -= FUNC_13(VAR_12);
  VAR_21 -= FUNC_13(VAR_12);
  if (VAR_14->sbh != VAR_14->ebh)
   FUNC_2(VAR_14->ebh);
  FUNC_2(VAR_14->sbh);
  VAR_14->sbh = VAR_14->ebh =
    FUNC_12(VAR_12, &VAR_26, VAR_16);
  if (!VAR_14->sbh)
   goto out_err;
  VAR_30.block = VAR_31->i_location;
  VAR_30.offset = FUNC_14(VAR_12);

  FUNC_11(VAR_12, &VAR_30, &VAR_27, &VAR_28, 1);
 }

 if (VAR_17->s_blocksize - VAR_14->eoffset >= VAR_23) {
  VAR_14->soffset = VAR_14->eoffset;
  VAR_14->eoffset += VAR_23;
  if (VAR_14->sbh != VAR_14->ebh) {
   FUNC_2(VAR_14->sbh);
   VAR_14->sbh = VAR_14->ebh;
  }

  if (VAR_31->i_alloc_type == VAR_7) {
   VAR_26 = VAR_31->i_location.logicalBlockNum;
   VAR_18 = (struct fileIdentDesc *)
     (VAR_31->i_ext.i_data +
      VAR_14->soffset -
      FUNC_13(VAR_12) +
      VAR_31->i_lenEAttr);
  } else {
   VAR_26 = VAR_27.logicalBlockNum +
     ((VAR_28 - 1) >>
      VAR_12->i_sb->s_blocksize_bits);
   VAR_18 = (struct fileIdentDesc *)
    (VAR_14->sbh->b_data + VAR_14->soffset);
  }
 } else {
  VAR_14->soffset = VAR_14->eoffset - VAR_17->s_blocksize;
  VAR_14->eoffset += VAR_23 - VAR_17->s_blocksize;
  if (VAR_14->sbh != VAR_14->ebh) {
   FUNC_2(VAR_14->sbh);
   VAR_14->sbh = VAR_14->ebh;
  }

  VAR_26 = VAR_27.logicalBlockNum + ((VAR_28 - 1) >>
      VAR_12->i_sb->s_blocksize_bits);
  VAR_14->ebh = FUNC_10(VAR_12,
    VAR_21 >> VAR_12->i_sb->s_blocksize_bits, 1, VAR_16);
  if (!VAR_14->ebh)
   goto out_err;

  if (!VAR_14->soffset) {
   if (FUNC_18(VAR_12, &VAR_30, &VAR_27, &VAR_28, 1) ==
       (VAR_4 >> 30)) {
    VAR_26 = VAR_27.logicalBlockNum + ((VAR_28 - 1) >>
     VAR_12->i_sb->s_blocksize_bits);
   } else
    VAR_26++;

   FUNC_2(VAR_14->sbh);
   VAR_14->sbh = VAR_14->ebh;
   VAR_18 = (struct fileIdentDesc *)(VAR_14->sbh->b_data);
  } else {
   VAR_18 = (struct fileIdentDesc *)
    (VAR_14->sbh->b_data + VAR_17->s_blocksize +
     VAR_14->soffset);
  }
 }

 FUNC_9(VAR_15, 0, sizeof(struct fileIdentDesc));
 if (FUNC_1(VAR_17)->s_udfrev >= 0x0200)
  FUNC_17((char *)VAR_15, VAR_10, 3, 1, VAR_26,
       sizeof(struct tag));
 else
  FUNC_17((char *)VAR_15, VAR_10, 2, 1, VAR_26,
       sizeof(struct tag));
 VAR_15->fileVersionNum = FUNC_3(1);
 VAR_15->lengthFileIdent = VAR_20;
 VAR_15->lengthOfImpUse = FUNC_3(0);
 if (!FUNC_22(VAR_12, VAR_15, VAR_18, VAR_14, ((void*)0), VAR_19)) {
  VAR_12->i_size += VAR_23;
  if (VAR_31->i_alloc_type == VAR_7)
   VAR_31->i_lenAlloc += VAR_23;
  FUNC_8(VAR_12);
  goto out_ok;
 } else {
  *VAR_16 = -VAR_1;
  goto out_err;
 }

out_err:
 VAR_18 = ((void*)0);
 if (VAR_14->sbh != VAR_14->ebh)
  FUNC_2(VAR_14->ebh);
 FUNC_2(VAR_14->sbh);
out_ok:
 FUNC_2(VAR_30.bh);
 FUNC_5(VAR_19);
 return VAR_18;
}
