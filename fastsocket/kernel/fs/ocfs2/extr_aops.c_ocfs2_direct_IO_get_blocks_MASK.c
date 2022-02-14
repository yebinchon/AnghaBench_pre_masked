
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct inode {unsigned long i_blkbits; TYPE_1__* i_sb; } ;
struct buffer_head {unsigned long b_size; } ;
typedef scalar_t__ sector_t ;
struct TYPE_3__ {unsigned char s_blocksize_bits; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct buffer_head*,TYPE_1__*,unsigned long) ;
 int FUNC_4 (int ,char*,unsigned long long) ;
 unsigned long FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct inode*,scalar_t__,unsigned long*,unsigned long*,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, sector_t VAR_5,
         struct buffer_head *VAR_6, int VAR_7)
{
 int VAR_8;
 u64 VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12;
 unsigned char VAR_13 = VAR_4->i_sb->s_blocksize_bits;
 unsigned long VAR_14 = VAR_6->b_size >> VAR_4->i_blkbits;





 VAR_10 = FUNC_5(VAR_4->i_sb, FUNC_2(VAR_4));



 VAR_8 = FUNC_6(VAR_4, VAR_5, &VAR_9,
       &VAR_11, &VAR_12);
 if (VAR_8) {
  FUNC_4(VAR_1, "get_blocks() failed iblock=%llu\n",
       (unsigned long long)VAR_5);
  VAR_8 = -VAR_0;
  goto bail;
 }


 FUNC_0(VAR_12 & VAR_2);






 if (VAR_9 && !(VAR_12 & VAR_3))
  FUNC_3(VAR_6, VAR_4->i_sb, VAR_9);
 else
  FUNC_1(VAR_6);



 if (VAR_14 < VAR_11)
  VAR_11 = VAR_14;
 VAR_6->b_size = VAR_11 << VAR_13;
bail:
 return VAR_8;
}
