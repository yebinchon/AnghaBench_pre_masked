
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenAlloc; int i_lenExtents; } ;
struct super_block {int s_blocksize_bits; int s_blocksize; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct TYPE_2__ {scalar_t__ partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct kernel_long_ad {int extLength; TYPE_1__ extLocation; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
struct extent_position {int offset; scalar_t__ bh; struct kernel_lb_addr block; } ;
struct allocExtDesc {int dummy; } ;
typedef int sector_t ;
typedef int loff_t ;
typedef int int8_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct udf_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int,int) ;
 int FUNC_5 (struct inode*,int,struct extent_position*,struct kernel_lb_addr*,int*,int*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int*,int ) ;
 int FUNC_8 (struct inode*,struct extent_position*,struct kernel_long_ad*,int) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct super_block*,struct inode*,struct kernel_lb_addr*,int ,int) ;
 int FUNC_11 (struct super_block*,struct kernel_lb_addr*,int ) ;
 int FUNC_12 (struct inode*,struct extent_position*,TYPE_1__*,int*,int ) ;
 scalar_t__ FUNC_13 (struct super_block*,int ) ;
 int FUNC_14 (struct inode*,struct extent_position*,int) ;
 int FUNC_15 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int ) ;

void FUNC_16(struct inode *VAR_4)
{
 struct extent_position VAR_5;
 struct kernel_lb_addr VAR_6, VAR_7 = {};
 uint32_t VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11;
 int8_t VAR_12;
 struct super_block *VAR_13 = VAR_4->i_sb;
 sector_t VAR_14 = VAR_4->i_size >> VAR_13->s_blocksize_bits, VAR_15;
 loff_t VAR_16;
 int VAR_17;
 struct udf_inode_info *VAR_18 = FUNC_2(VAR_4);

 if (VAR_18->i_alloc_type == VAR_3)
  VAR_17 = sizeof(struct short_ad);
 else if (VAR_18->i_alloc_type == VAR_2)
  VAR_17 = sizeof(struct long_ad);
 else
  FUNC_0();

 VAR_12 = FUNC_5(VAR_4, VAR_14, &VAR_5, &VAR_6, &VAR_8, &VAR_15);
 VAR_16 = (VAR_15 << VAR_13->s_blocksize_bits) +
  (VAR_4->i_size & (VAR_13->s_blocksize - 1));
 if (VAR_12 != -1) {
  VAR_5.offset -= VAR_17;
  FUNC_4(VAR_4, &VAR_5, &VAR_6, VAR_12, VAR_8, VAR_16);
  VAR_5.offset += VAR_17;
  if (VAR_16)
   VAR_11 = VAR_5.offset;
  else
   VAR_11 = VAR_5.offset - VAR_17;

  if (!VAR_5.bh)
   VAR_11 -= FUNC_9(VAR_4);
  else
   VAR_11 -= sizeof(struct allocExtDesc);

  while ((VAR_12 = FUNC_7(VAR_4, &VAR_5, &VAR_6,
       &VAR_8, 0)) != -1) {
   if (VAR_12 == (VAR_0 >> 30)) {
    FUNC_15(VAR_4, &VAR_5, &VAR_7, VAR_9, 0);
    if (VAR_10) {


     FUNC_1(!VAR_5.bh);
     FUNC_10(VAR_13, VAR_4, &VAR_5.block,
       0, VAR_10);
    } else if (!VAR_5.bh) {
     VAR_18->i_lenAlloc = VAR_11;
     FUNC_6(VAR_4);
    } else
     FUNC_14(VAR_4,
       &VAR_5, VAR_11);
    FUNC_3(VAR_5.bh);
    VAR_5.offset = sizeof(struct allocExtDesc);
    VAR_5.block = VAR_6;
    VAR_5.bh = FUNC_13(VAR_13,
      FUNC_11(VAR_13, &VAR_6, 0));
    if (VAR_8)
     VAR_10 =
      (VAR_8 + VAR_13->s_blocksize - 1) >>
      VAR_13->s_blocksize_bits;
    else
     VAR_10 = 1;
   } else {
    FUNC_4(VAR_4, &VAR_5, &VAR_6, VAR_12,
          VAR_8, 0);
    VAR_5.offset += VAR_17;
   }
  }

  if (VAR_10) {
   FUNC_1(!VAR_5.bh);
   FUNC_10(VAR_13, VAR_4, &VAR_5.block, 0,
     VAR_10);
  } else if (!VAR_5.bh) {
   VAR_18->i_lenAlloc = VAR_11;
   FUNC_6(VAR_4);
  } else
   FUNC_14(VAR_4, &VAR_5, VAR_11);
 } else if (VAR_4->i_size) {
  if (VAR_16) {
   struct kernel_long_ad VAR_19;






   if ((!VAR_5.bh &&
        VAR_5.offset ==
     FUNC_9(VAR_4)) ||
       (VAR_5.bh && VAR_5.offset ==
      sizeof(struct allocExtDesc))) {


    VAR_19.extLocation.logicalBlockNum = 0;
    VAR_19.extLocation.partitionReferenceNum = 0;
    VAR_19.extLength =
     VAR_1;
   } else {
    VAR_5.offset -= VAR_17;
    VAR_12 = FUNC_12(VAR_4, &VAR_5,
            &VAR_19.extLocation,
            &VAR_19.extLength, 0);
    VAR_19.extLength |= VAR_12 << 30;
   }
   FUNC_8(VAR_4, &VAR_5, &VAR_19,
     VAR_15 +
     ((VAR_4->i_size &
      (VAR_13->s_blocksize - 1)) != 0));
  }
 }
 VAR_18->i_lenExtents = VAR_4->i_size;

 FUNC_3(VAR_5.bh);
}
