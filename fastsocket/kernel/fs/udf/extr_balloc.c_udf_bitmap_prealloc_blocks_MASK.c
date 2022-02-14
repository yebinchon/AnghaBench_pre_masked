
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct udf_sb_info {int s_alloc_mutex; TYPE_1__* s_partmaps; } ;
struct udf_bitmap {struct buffer_head** s_block_bitmap; } ;
struct super_block {int s_blocksize_bits; int s_blocksize; } ;
struct spaceBitmapDesc {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {scalar_t__ s_partition_len; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct udf_bitmap*,int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*,size_t,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct super_block*,size_t) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (struct inode*,int) ;
 scalar_t__ FUNC_11 (struct inode*,int) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_0,
          struct inode *VAR_1,
          struct udf_bitmap *VAR_2,
          uint16_t VAR_3, uint32_t VAR_4,
          uint32_t VAR_5)
{
 struct udf_sb_info *VAR_6 = FUNC_0(VAR_0);
 int VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;
 struct buffer_head *VAR_14;
 __u32 VAR_15;

 FUNC_3(&VAR_6->s_alloc_mutex);
 VAR_15 = VAR_6->s_partmaps[VAR_3].s_partition_len;
 if (VAR_4 >= VAR_15)
  goto out;

 if (VAR_4 + VAR_5 > VAR_15)
  VAR_5 = VAR_15 - VAR_4;

 do {
  VAR_12 = FUNC_7(VAR_0, VAR_3);
  VAR_9 = VAR_4 + (sizeof(struct spaceBitmapDesc) << 3);
  VAR_10 = VAR_9 >> (VAR_0->s_blocksize_bits + 3);
  VAR_11 = VAR_10 ? 0 : sizeof(struct spaceBitmapDesc);

  VAR_13 = FUNC_1(VAR_0, VAR_2, VAR_10);
  if (VAR_13 < 0)
   goto out;
  VAR_14 = VAR_2->s_block_bitmap[VAR_13];

  VAR_8 = VAR_9 % (VAR_0->s_blocksize << 3);

  while (VAR_8 < (VAR_0->s_blocksize << 3) && VAR_5 > 0) {
   if (!FUNC_9(VAR_8, VAR_14->b_data))
    goto out;
   else if (FUNC_11(VAR_1, 1))
    goto out;
   else if (!FUNC_6(VAR_8, VAR_14->b_data)) {
    FUNC_8("bit already cleared for block %d\n", VAR_8);
    FUNC_10(VAR_1, 1);
    goto out;
   }
   VAR_5--;
   VAR_7++;
   VAR_8++;
   VAR_9++;
  }
  FUNC_2(VAR_14);
 } while (VAR_5 > 0);

out:
 FUNC_5(VAR_0, VAR_3, -VAR_7);
 FUNC_4(&VAR_6->s_alloc_mutex);
 return VAR_7;
}
