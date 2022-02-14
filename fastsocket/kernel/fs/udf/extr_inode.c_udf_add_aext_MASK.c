
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int i_data; } ;
struct udf_inode_info {char* i_lenEAttr; int i_alloc_type; int i_lenAlloc; TYPE_1__ i_ext; } ;
struct tag {int dummy; } ;
struct short_ad {void* extPosition; void* extLength; } ;
struct long_ad {char* impUse; int extLocation; void* extLength; } ;
struct kernel_lb_addr {int logicalBlockNum; int partitionReferenceNum; } ;
struct inode {TYPE_2__* i_sb; } ;
struct extent_position {int offset; struct buffer_head* bh; struct kernel_lb_addr block; } ;
struct buffer_head {char* b_data; } ;
struct allocExtDesc {void* lengthAllocDescs; void* previousAllocExtLocation; } ;
typedef int int8_t ;
struct TYPE_10__ {int s_udfrev; } ;
struct TYPE_9__ {int s_blocksize; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_5__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct buffer_head*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct kernel_lb_addr) ;
 int FUNC_6 (void**,int) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*,struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,int,int) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (TYPE_2__*,struct kernel_lb_addr*,int ) ;
 int FUNC_15 (TYPE_2__*,int *,int ,int,int*) ;
 int FUNC_16 (char*,int ,int,int,int,int) ;
 struct buffer_head* FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int ,int) ;
 int FUNC_20 (struct buffer_head*) ;

int8_t FUNC_21(struct inode *VAR_3, struct extent_position *VAR_4,
      struct kernel_lb_addr *VAR_5, uint32_t VAR_6, int VAR_7)
{
 int VAR_8;
 struct short_ad *VAR_9 = ((void*)0);
 struct long_ad *VAR_10 = ((void*)0);
 struct allocExtDesc *VAR_11;
 int8_t VAR_12;
 uint8_t *VAR_13;
 struct udf_inode_info *VAR_14 = FUNC_0(VAR_3);

 if (!VAR_4->bh)
  VAR_13 = VAR_14->i_ext.i_data + VAR_4->offset -
   FUNC_13(VAR_3) +
   VAR_14->i_lenEAttr;
 else
  VAR_13 = VAR_4->bh->b_data + VAR_4->offset;

 if (VAR_14->i_alloc_type == 128)
  VAR_8 = sizeof(struct short_ad);
 else if (VAR_14->i_alloc_type == 129)
  VAR_8 = sizeof(struct long_ad);
 else
  return -1;

 if (VAR_4->offset + (2 * VAR_8) > VAR_3->i_sb->s_blocksize) {
  char *VAR_15, *VAR_16;
  struct buffer_head *VAR_17;
  int VAR_18, VAR_19;
  struct kernel_lb_addr VAR_20 = VAR_4->block;

  VAR_4->block.logicalBlockNum = FUNC_15(VAR_3->i_sb, ((void*)0),
      VAR_20.partitionReferenceNum,
      VAR_20.logicalBlockNum, &VAR_18);
  if (!VAR_4->block.logicalBlockNum)
   return -1;
  VAR_17 = FUNC_17(VAR_3->i_sb, FUNC_14(VAR_3->i_sb,
         &VAR_4->block,
         0));
  if (!VAR_17)
   return -1;
  FUNC_7(VAR_17);
  FUNC_11(VAR_17->b_data, 0x00, VAR_3->i_sb->s_blocksize);
  FUNC_12(VAR_17);
  FUNC_20(VAR_17);
  FUNC_8(VAR_17, VAR_3);

  VAR_11 = (struct allocExtDesc *)(VAR_17->b_data);
  if (!FUNC_1(VAR_3->i_sb, VAR_2))
   VAR_11->previousAllocExtLocation =
     FUNC_4(VAR_20.logicalBlockNum);
  if (VAR_4->offset + VAR_8 > VAR_3->i_sb->s_blocksize) {
   VAR_19 = VAR_4->offset;
   VAR_11->lengthAllocDescs = FUNC_4(VAR_8);
   VAR_15 = VAR_13 - VAR_8;
   VAR_16 = VAR_17->b_data + sizeof(struct allocExtDesc);
   FUNC_10(VAR_16, VAR_15, VAR_8);
   VAR_4->offset = sizeof(struct allocExtDesc) + VAR_8;
  } else {
   VAR_19 = VAR_4->offset + VAR_8;
   VAR_11->lengthAllocDescs = FUNC_4(0);
   VAR_15 = VAR_13;
   VAR_4->offset = sizeof(struct allocExtDesc);

   if (VAR_4->bh) {
    VAR_11 = (struct allocExtDesc *)VAR_4->bh->b_data;
    FUNC_6(&VAR_11->lengthAllocDescs, VAR_8);
   } else {
    VAR_14->i_lenAlloc += VAR_8;
    FUNC_9(VAR_3);
   }
  }
  if (FUNC_2(VAR_3->i_sb)->s_udfrev >= 0x0200)
   FUNC_16(VAR_17->b_data, VAR_1, 3, 1,
        VAR_4->block.logicalBlockNum, sizeof(struct tag));
  else
   FUNC_16(VAR_17->b_data, VAR_1, 2, 1,
        VAR_4->block.logicalBlockNum, sizeof(struct tag));
  switch (VAR_14->i_alloc_type) {
  case 128:
   VAR_9 = (struct short_ad *)VAR_15;
   VAR_9->extLength = FUNC_4(VAR_0 |
           VAR_3->i_sb->s_blocksize);
   VAR_9->extPosition =
    FUNC_4(VAR_4->block.logicalBlockNum);
   break;
  case 129:
   VAR_10 = (struct long_ad *)VAR_15;
   VAR_10->extLength = FUNC_4(VAR_0 |
           VAR_3->i_sb->s_blocksize);
   VAR_10->extLocation = FUNC_5(VAR_4->block);
   FUNC_11(VAR_10->impUse, 0x00, sizeof(VAR_10->impUse));
   break;
  }
  if (VAR_4->bh) {
   if (!FUNC_1(VAR_3->i_sb, VAR_2) ||
       FUNC_2(VAR_3->i_sb)->s_udfrev >= 0x0201)
    FUNC_18(VAR_4->bh->b_data, VAR_19);
   else
    FUNC_18(VAR_4->bh->b_data,
      sizeof(struct allocExtDesc));
   FUNC_8(VAR_4->bh, VAR_3);
   FUNC_3(VAR_4->bh);
  } else {
   FUNC_9(VAR_3);
  }
  VAR_4->bh = VAR_17;
 }

 VAR_12 = FUNC_19(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 if (!VAR_4->bh) {
  VAR_14->i_lenAlloc += VAR_8;
  FUNC_9(VAR_3);
 } else {
  VAR_11 = (struct allocExtDesc *)VAR_4->bh->b_data;
  FUNC_6(&VAR_11->lengthAllocDescs, VAR_8);
  if (!FUNC_1(VAR_3->i_sb, VAR_2) ||
    FUNC_2(VAR_3->i_sb)->s_udfrev >= 0x0201)
   FUNC_18(VAR_4->bh->b_data,
     VAR_4->offset + (VAR_7 ? 0 : VAR_8));
  else
   FUNC_18(VAR_4->bh->b_data,
     sizeof(struct allocExtDesc));
  FUNC_8(VAR_4->bh, VAR_3);
 }

 return VAR_12;
}
