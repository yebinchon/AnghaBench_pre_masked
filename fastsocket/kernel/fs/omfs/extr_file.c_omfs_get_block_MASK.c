
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct omfs_sb_info {int dummy; } ;
struct omfs_header {int dummy; } ;
struct omfs_extent_entry {int dummy; } ;
struct omfs_extent {struct omfs_extent_entry e_entry; int e_next; int e_extent_count; } ;
struct inode {int i_blkbits; scalar_t__ i_ino; int i_sb; } ;
struct buffer_head {int b_size; int * b_data; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct omfs_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct omfs_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct inode*,struct omfs_extent_entry*,scalar_t__,int,int*) ;
 int FUNC_6 (struct buffer_head*,int ,scalar_t__) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct omfs_extent*,scalar_t__*) ;
 scalar_t__ FUNC_10 (struct omfs_sb_info*,struct omfs_header*,scalar_t__) ;
 int FUNC_11 (struct omfs_sb_info*,size_t) ;
 struct buffer_head* FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_3, sector_t VAR_4,
     struct buffer_head *VAR_5, int VAR_6)
{
 struct buffer_head *VAR_7;
 sector_t VAR_8, VAR_9;
 int VAR_10;
 u64 VAR_11;
 u32 VAR_12;
 int VAR_13;
 struct omfs_extent *VAR_14;
 struct omfs_extent_entry *VAR_15;
 struct omfs_sb_info *VAR_16 = FUNC_0(VAR_3->i_sb);
 int VAR_17 = VAR_5->b_size >> VAR_3->i_blkbits;
 int VAR_18;

 VAR_10 = -VAR_0;
 VAR_7 = FUNC_12(VAR_3->i_sb, FUNC_4(VAR_16, VAR_3->i_ino));
 if (!VAR_7)
  goto out;

 VAR_14 = (struct omfs_extent *)(&VAR_7->b_data[VAR_2]);
 VAR_12 = FUNC_11(VAR_16, VAR_2);
 VAR_8 = VAR_3->i_ino;

 for (;;) {

  if (FUNC_10(VAR_16, (struct omfs_header *) VAR_7->b_data, VAR_8))
   goto out_brelse;

  VAR_13 = FUNC_1(VAR_14->e_extent_count);
  VAR_8 = FUNC_2(VAR_14->e_next);
  VAR_15 = &VAR_14->e_entry;

  if (VAR_13 > VAR_12)
   goto out_brelse;

  VAR_9 = FUNC_5(VAR_3, VAR_15, VAR_4, VAR_13, &VAR_18);
  if (VAR_9 > 0) {
   VAR_10 = 0;
   FUNC_6(VAR_5, VAR_3->i_sb, VAR_9);
   if (VAR_18 > VAR_17)
    VAR_18 = VAR_17;
   VAR_5->b_size = (VAR_18 << VAR_3->i_blkbits);
   goto out_brelse;
  }
  if (VAR_8 == ~0)
   break;

  FUNC_3(VAR_7);
  VAR_7 = FUNC_12(VAR_3->i_sb, FUNC_4(VAR_16, VAR_8));
  if (!VAR_7)
   goto out;
  VAR_14 = (struct omfs_extent *) (&VAR_7->b_data[VAR_1]);
  VAR_12 = FUNC_11(VAR_16, VAR_1);
 }
 if (VAR_6) {
  VAR_10 = FUNC_9(VAR_3, VAR_14, &VAR_11);
  if (VAR_10 == 0) {
   FUNC_7(VAR_7);
   FUNC_8(VAR_3);
   FUNC_6(VAR_5, VAR_3->i_sb,
     FUNC_4(VAR_16, VAR_11));
  }
 }
out_brelse:
 FUNC_3(VAR_7);
out:
 return VAR_10;
}
