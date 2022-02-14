
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct udf_sb_info {int s_alloc_mutex; int s_partition; struct udf_part_map* s_partmaps; } ;
struct udf_part_map {scalar_t__ s_partition_len; } ;
struct udf_bitmap {struct buffer_head** s_block_bitmap; } ;
struct super_block {int s_blocksize_bits; int s_blocksize; } ;
struct spaceBitmapDesc {int dummy; } ;
struct kernel_lb_addr {size_t partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct udf_bitmap*,unsigned long) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*,int ,int) ;
 int FUNC_6 (char*,char,...) ;
 scalar_t__ FUNC_7 (unsigned long,scalar_t__) ;
 int FUNC_8 (struct inode*,int) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_0,
       struct inode *VAR_1,
       struct udf_bitmap *VAR_2,
       struct kernel_lb_addr *VAR_3,
       uint32_t VAR_4,
       uint32_t VAR_5)
{
 struct udf_sb_info *VAR_6 = FUNC_0(VAR_0);
 struct buffer_head *VAR_7 = ((void*)0);
 struct udf_part_map *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 int VAR_13;
 unsigned long VAR_14;

 FUNC_3(&VAR_6->s_alloc_mutex);
 VAR_8 = &VAR_6->s_partmaps[VAR_3->partitionReferenceNum];
 if (VAR_3->logicalBlockNum < 0 ||
     (VAR_3->logicalBlockNum + VAR_5) >
  VAR_8->s_partition_len) {
  FUNC_6("%d < %d || %d + %d > %d\n",
     VAR_3->logicalBlockNum, 0, VAR_3->logicalBlockNum,
     VAR_5, VAR_8->s_partition_len);
  goto error_return;
 }

 VAR_9 = VAR_3->logicalBlockNum + VAR_4 +
  (sizeof(struct spaceBitmapDesc) << 3);

 do {
  VAR_14 = 0;
  VAR_10 = VAR_9 >> (VAR_0->s_blocksize_bits + 3);
  VAR_11 = VAR_9 % (VAR_0->s_blocksize << 3);




  if (VAR_11 + VAR_5 > (VAR_0->s_blocksize << 3)) {
   VAR_14 = VAR_11 + VAR_5 - (VAR_0->s_blocksize << 3);
   VAR_5 -= VAR_14;
  }
  VAR_13 = FUNC_1(VAR_0, VAR_2, VAR_10);
  if (VAR_13 < 0)
   goto error_return;

  VAR_7 = VAR_2->s_block_bitmap[VAR_13];
  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
   if (FUNC_7(VAR_11 + VAR_12, VAR_7->b_data)) {
    FUNC_6("bit %ld already set\n", VAR_11 + VAR_12);
    FUNC_6("byte=%2x\n",
     ((char *)VAR_7->b_data)[(VAR_11 + VAR_12) >> 3]);
   } else {
    if (VAR_1)
     FUNC_8(VAR_1, 1);
    FUNC_5(VAR_0, VAR_6->s_partition, 1);
   }
  }
  FUNC_2(VAR_7);
  if (VAR_14) {
   VAR_9 += VAR_5;
   VAR_5 = VAR_14;
  }
 } while (VAR_14);

error_return:
 FUNC_4(&VAR_6->s_alloc_mutex);
}
