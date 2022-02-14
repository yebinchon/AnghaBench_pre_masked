
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {int dummy; } ;
struct inode {scalar_t__ i_blkbits; unsigned long long i_ino; int i_sb; int i_mode; } ;
struct buffer_head {scalar_t__ b_size; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int ip_flags; unsigned long long ip_clusters; scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct buffer_head*,int ,scalar_t__) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*,struct inode*,unsigned long long,struct buffer_head*,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;
 scalar_t__ FUNC_13 (struct ocfs2_super*) ;
 int FUNC_14 (struct inode*,scalar_t__,struct buffer_head*,int) ;
 int FUNC_15 (struct buffer_head*) ;

int FUNC_16(struct inode *VAR_5, sector_t VAR_6,
      struct buffer_head *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 unsigned int VAR_10;
 u64 VAR_11 = VAR_7->b_size >> VAR_5->i_blkbits;
 u64 VAR_12, VAR_13, VAR_14;
 struct ocfs2_super *VAR_15 = FUNC_1(VAR_5->i_sb);

 FUNC_9("(0x%p, %llu, 0x%p, %d)\n", VAR_5,
     (unsigned long long)VAR_6, VAR_7, VAR_8);

 if (FUNC_0(VAR_5)->ip_flags & VAR_4)
  FUNC_8(VAR_2, "get_block on system inode 0x%p (%lu)\n",
       VAR_5, VAR_5->i_ino);

 if (FUNC_2(VAR_5->i_mode)) {

  VAR_9 = FUNC_14(VAR_5, VAR_6, VAR_7, VAR_8);
  goto bail;
 }

 VAR_9 = FUNC_12(VAR_5, VAR_6, &VAR_12, &VAR_13,
       &VAR_10);
 if (VAR_9) {
  FUNC_8(VAR_1, "Error %d from get_blocks(0x%p, %llu, 1, "
       "%llu, NULL)\n", VAR_9, VAR_5, (unsigned long long)VAR_6,
       (unsigned long long)VAR_12);
  goto bail;
 }

 if (VAR_11 < VAR_13)
  VAR_13 = VAR_11;
 if (VAR_8 && VAR_12 == 0 && FUNC_13(VAR_15)) {
  FUNC_3(VAR_7);
  FUNC_4(VAR_7);
  goto bail;
 }


 if (VAR_12 && !(VAR_10 & VAR_3))
  FUNC_7(VAR_7, VAR_5->i_sb, VAR_12);

 VAR_7->b_size = VAR_13 << VAR_5->i_blkbits;

 if (!FUNC_13(VAR_15)) {
  if (VAR_12 == 0) {
   VAR_9 = -VAR_0;
   FUNC_8(VAR_1,
        "iblock = %llu p_blkno = %llu blkno=(%llu)\n",
        (unsigned long long)VAR_6,
        (unsigned long long)VAR_12,
        (unsigned long long)FUNC_0(VAR_5)->ip_blkno);
   FUNC_8(VAR_1, "Size %llu, clusters %u\n", (unsigned long long)FUNC_6(VAR_5), FUNC_0(VAR_5)->ip_clusters);
   FUNC_5();
   goto bail;
  }

  VAR_14 = FUNC_11(VAR_5->i_sb, FUNC_6(VAR_5));
  FUNC_8(0, "Inode %lu, past_eof = %llu\n", VAR_5->i_ino,
       (unsigned long long)VAR_14);

  if (VAR_8 && (VAR_6 >= VAR_14))
   FUNC_15(VAR_7);
 }

bail:
 if (VAR_9 < 0)
  VAR_9 = -VAR_0;

 FUNC_10(VAR_9);
 return VAR_9;
}
