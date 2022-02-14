
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_inode_info {int i_lenExtents; scalar_t__ i_alloc_type; } ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {scalar_t__ partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct kernel_long_ad {int extLength; struct kernel_lb_addr extLocation; } ;
struct inode {struct super_block* i_sb; } ;
struct extent_position {int offset; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;
 int FUNC_2 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;

int FUNC_3(struct inode *VAR_6, struct extent_position *VAR_7,
      struct kernel_long_ad *VAR_8, sector_t VAR_9)
{
 sector_t VAR_10;
 int VAR_11 = 0, VAR_12 = !(VAR_8->extLength & VAR_5);
 struct super_block *VAR_13 = VAR_6->i_sb;
 struct kernel_lb_addr VAR_14 = {};
 int VAR_15 = 0;
 struct udf_inode_info *VAR_16;



 if (!VAR_9 && VAR_12)
  return 0;

 VAR_16 = FUNC_0(VAR_6);

 if (VAR_8->extLength & (VAR_13->s_blocksize - 1)) {
  VAR_8->extLength =
   (VAR_8->extLength & VAR_4) |
   (((VAR_8->extLength & VAR_5) +
     VAR_13->s_blocksize - 1) & ~(VAR_13->s_blocksize - 1));
  VAR_16->i_lenExtents =
   (VAR_16->i_lenExtents + VAR_13->s_blocksize - 1) &
   ~(VAR_13->s_blocksize - 1);
 }


 if ((VAR_8->extLength & VAR_4) ==
      VAR_0) {

  VAR_14 = VAR_8->extLocation;
  VAR_15 = VAR_8->extLength;

  VAR_8->extLength = VAR_1 |
   (VAR_8->extLength & VAR_5);
  VAR_8->extLocation.logicalBlockNum = 0;
  VAR_8->extLocation.partitionReferenceNum = 0;
 }


 if ((VAR_8->extLength & VAR_4) ==
     VAR_1) {
  VAR_10 = ((1 << 30) - VAR_13->s_blocksize -
   (VAR_8->extLength & VAR_5)) >>
   VAR_13->s_blocksize_bits;
  if (VAR_10 > VAR_9)
   VAR_10 = VAR_9;
  VAR_9 -= VAR_10;
  VAR_8->extLength += VAR_10 << VAR_13->s_blocksize_bits;
 }

 if (VAR_12) {
  FUNC_1(VAR_6, VAR_7, &VAR_8->extLocation,
        VAR_8->extLength, 1);
  VAR_11++;
 } else
  FUNC_2(VAR_6, VAR_7, &VAR_8->extLocation,
    VAR_8->extLength, 1);


 if (!VAR_9)
  goto out;


 VAR_8->extLocation.logicalBlockNum = 0;
 VAR_8->extLocation.partitionReferenceNum = 0;
 VAR_10 = (1 << (30-VAR_13->s_blocksize_bits)) - 1;
 VAR_8->extLength = VAR_1 |
    (VAR_10 << VAR_13->s_blocksize_bits);


 while (VAR_9 > VAR_10) {
  VAR_9 -= VAR_10;
  if (FUNC_1(VAR_6, VAR_7, &VAR_8->extLocation,
     VAR_8->extLength, 1) == -1)
   return -1;
  VAR_11++;
 }
 if (VAR_9) {
  VAR_8->extLength = VAR_1 |
   (VAR_9 << VAR_13->s_blocksize_bits);
  if (FUNC_1(VAR_6, VAR_7, &VAR_8->extLocation,
     VAR_8->extLength, 1) == -1)
   return -1;
  VAR_11++;
 }

out:

 if (VAR_15) {
  if (FUNC_1(VAR_6, VAR_7, &VAR_14,
     VAR_15, 1) == -1)
   return -1;
  VAR_8->extLocation = VAR_14;
  VAR_8->extLength = VAR_15;
  VAR_11++;
 }


 if (VAR_16->i_alloc_type == VAR_3)
  VAR_7->offset -= sizeof(struct short_ad);
 else if (VAR_16->i_alloc_type == VAR_2)
  VAR_7->offset -= sizeof(struct long_ad);
 else
  return -1;

 return VAR_11;
}
