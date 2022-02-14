
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct udf_inode_info {scalar_t__ i_alloc_type; scalar_t__ i_lenExtents; int i_lenAlloc; int i_location; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {scalar_t__ i_size; int i_sb; } ;
struct TYPE_5__ {int member_1; int member_0; } ;
struct extent_position {int offset; TYPE_2__* bh; int block; TYPE_1__ member_2; int member_1; int * member_0; } ;
struct allocExtDesc {int lengthAllocDescs; } ;
typedef int int8_t ;
struct TYPE_7__ {int s_udfrev; } ;
struct TYPE_6__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,scalar_t__,int ) ;
 int FUNC_6 (TYPE_2__*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct extent_position*,struct kernel_lb_addr*,scalar_t__*,int) ;
 int FUNC_10 (scalar_t__,int) ;

void FUNC_11(struct inode *VAR_5)
{
 struct extent_position VAR_6 = { ((void*)0), 0, {0, 0} };
 struct kernel_lb_addr VAR_7;
 uint32_t VAR_8;
 uint64_t VAR_9 = 0;
 int8_t VAR_10 = -1, VAR_11;
 int VAR_12;
 struct udf_inode_info *VAR_13 = FUNC_0(VAR_5);

 if (VAR_13->i_alloc_type == VAR_1 ||
     VAR_5->i_size == VAR_13->i_lenExtents)
  return;

 if (VAR_13->i_alloc_type == VAR_3)
  VAR_12 = sizeof(struct short_ad);
 else if (VAR_13->i_alloc_type == VAR_2)
  VAR_12 = sizeof(struct long_ad);
 else
  VAR_12 = 0;

 VAR_6.block = VAR_13->i_location;


 while ((VAR_11 = FUNC_9(VAR_5, &VAR_6, &VAR_7, &VAR_8, 1)) != -1) {
  VAR_10 = VAR_11;
  VAR_9 += VAR_8;
 }
 if (VAR_10 == (VAR_0 >> 30)) {
  VAR_6.offset -= VAR_12;
  VAR_9 -= VAR_8;
  FUNC_5(VAR_5, &VAR_6, &VAR_7, VAR_10, VAR_8, 0);
  if (!VAR_6.bh) {
   VAR_13->i_lenAlloc =
    VAR_6.offset -
    FUNC_8(VAR_5);
   FUNC_7(VAR_5);
  } else {
   struct allocExtDesc *VAR_14 =
    (struct allocExtDesc *)(VAR_6.bh->b_data);
   VAR_14->lengthAllocDescs =
    FUNC_4(VAR_6.offset -
         sizeof(struct allocExtDesc));
   if (!FUNC_1(VAR_5->i_sb, VAR_4) ||
       FUNC_2(VAR_5->i_sb)->s_udfrev >= 0x0201)
    FUNC_10(VAR_6.bh->b_data, VAR_6.offset);
   else
    FUNC_10(VAR_6.bh->b_data,
            sizeof(struct allocExtDesc));
   FUNC_6(VAR_6.bh, VAR_5);
  }
 }


 VAR_13->i_lenExtents = VAR_9;
 FUNC_3(VAR_6.bh);
}
