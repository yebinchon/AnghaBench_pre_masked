
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenAlloc; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int i_sb; } ;
struct extent_position {int offset; TYPE_1__* bh; int block; } ;
struct allocExtDesc {int lengthAllocDescs; } ;
typedef int int8_t ;
struct TYPE_6__ {int s_udfrev; } ;
struct TYPE_5__ {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct kernel_lb_addr*,int,int) ;
 int FUNC_9 (int ,struct inode*,int *,int ,int) ;
 int FUNC_10 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int*,int) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;

int8_t FUNC_13(struct inode *VAR_3, struct extent_position VAR_4,
         struct kernel_lb_addr VAR_5, uint32_t VAR_6)
{
 struct extent_position VAR_7;
 int VAR_8;
 int8_t VAR_9;
 struct allocExtDesc *VAR_10;
 struct udf_inode_info *VAR_11;

 if (VAR_4.bh) {
  FUNC_4(VAR_4.bh);
  FUNC_4(VAR_4.bh);
 }

 VAR_11 = FUNC_0(VAR_3);
 if (VAR_11->i_alloc_type == VAR_1)
  VAR_8 = sizeof(struct short_ad);
 else if (VAR_11->i_alloc_type == VAR_0)
  VAR_8 = sizeof(struct long_ad);
 else
  VAR_8 = 0;

 VAR_7 = VAR_4;
 if (FUNC_10(VAR_3, &VAR_4, &VAR_5, &VAR_6, 1) == -1)
  return -1;

 while ((VAR_9 = FUNC_10(VAR_3, &VAR_4, &VAR_5, &VAR_6, 1)) != -1) {
  FUNC_12(VAR_3, &VAR_7, &VAR_5, (VAR_9 << 30) | VAR_6, 1);
  if (VAR_7.bh != VAR_4.bh) {
   VAR_7.block = VAR_4.block;
   FUNC_3(VAR_7.bh);
   FUNC_4(VAR_4.bh);
   VAR_7.bh = VAR_4.bh;
   VAR_7.offset = VAR_4.offset - VAR_8;
  }
 }
 FUNC_8(&VAR_5, 0x00, sizeof(struct kernel_lb_addr));
 VAR_6 = 0;

 if (VAR_4.bh != VAR_7.bh) {
  FUNC_9(VAR_3->i_sb, VAR_3, &VAR_4.block, 0, 1);
  FUNC_12(VAR_3, &VAR_7, &VAR_5, VAR_6, 1);
  FUNC_12(VAR_3, &VAR_7, &VAR_5, VAR_6, 1);
  if (!VAR_7.bh) {
   VAR_11->i_lenAlloc -= (VAR_8 * 2);
   FUNC_7(VAR_3);
  } else {
   VAR_10 = (struct allocExtDesc *)VAR_7.bh->b_data;
   FUNC_5(&VAR_10->lengthAllocDescs, -(2 * VAR_8));
   if (!FUNC_1(VAR_3->i_sb, VAR_2) ||
       FUNC_2(VAR_3->i_sb)->s_udfrev >= 0x0201)
    FUNC_11(VAR_7.bh->b_data,
      VAR_7.offset - (2 * VAR_8));
   else
    FUNC_11(VAR_7.bh->b_data,
      sizeof(struct allocExtDesc));
   FUNC_6(VAR_7.bh, VAR_3);
  }
 } else {
  FUNC_12(VAR_3, &VAR_7, &VAR_5, VAR_6, 1);
  if (!VAR_7.bh) {
   VAR_11->i_lenAlloc -= VAR_8;
   FUNC_7(VAR_3);
  } else {
   VAR_10 = (struct allocExtDesc *)VAR_7.bh->b_data;
   FUNC_5(&VAR_10->lengthAllocDescs, -VAR_8);
   if (!FUNC_1(VAR_3->i_sb, VAR_2) ||
       FUNC_2(VAR_3->i_sb)->s_udfrev >= 0x0201)
    FUNC_11(VAR_7.bh->b_data,
      VAR_4.offset - VAR_8);
   else
    FUNC_11(VAR_7.bh->b_data,
      sizeof(struct allocExtDesc));
   FUNC_6(VAR_7.bh, VAR_3);
  }
 }

 FUNC_3(VAR_4.bh);
 FUNC_3(VAR_7.bh);

 return (VAR_6 >> 30);
}
