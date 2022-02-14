
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ufs_sb_private_info {scalar_t__ fs_magic; int s_sbbase; int s_fpb; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_ctime; int i_ino; struct super_block* i_sb; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_data; } ;
typedef scalar_t__ sector_t ;
typedef int __fs64 ;
typedef int __fs32 ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (int ,int,struct buffer_head**) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct inode*) ;
 struct buffer_head* FUNC_10 (struct super_block*,int) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct super_block*,void*) ;
 unsigned int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct inode*,void*,int ,int,int,int*,struct page*) ;
 int FUNC_17 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *
FUNC_18(struct inode *VAR_3, struct buffer_head *VAR_4,
    u64 VAR_5, sector_t VAR_6, int *VAR_7,
    long *VAR_8, int *VAR_9, struct page *VAR_10)
{
 struct super_block *VAR_11 = VAR_3->i_sb;
 struct ufs_sb_private_info *VAR_12 = FUNC_2(VAR_11)->s_uspi;
 struct buffer_head * VAR_13;
 unsigned VAR_14;
 u64 VAR_15, VAR_16, VAR_17;
 void *VAR_18;

 VAR_17 = FUNC_15 (VAR_5);
 VAR_14 = FUNC_14 (VAR_5);

 FUNC_1("ENTER, ino %lu, fragment %llu, new_fragment %llu, metadata %d\n",
      VAR_3->i_ino, (unsigned long long)VAR_5,
      (unsigned long long)VAR_6, !VAR_8);

 VAR_13 = ((void*)0);
 if (!VAR_4)
  goto out;
 if (!FUNC_4(VAR_4)) {
  FUNC_7 (VAR_1, 1, &VAR_4);
  FUNC_17 (VAR_4);
  if (!FUNC_4(VAR_4))
   goto out;
 }
 if (VAR_12->fs_magic == VAR_2)
  VAR_18 = (__fs64 *)VAR_4->b_data + VAR_17;
 else
  VAR_18 = (__fs32 *)VAR_4->b_data + VAR_17;
repeat:
 VAR_15 = FUNC_13(VAR_11, VAR_18);
 if (VAR_15) {
  if (!VAR_8) {
   VAR_13 = FUNC_10(VAR_11, VAR_12->s_sbbase + VAR_15 + VAR_14);
   if (VAR_15 == FUNC_13(VAR_11, VAR_18))
    goto out;
   FUNC_3 (VAR_13);
   goto repeat;
  } else {
   *VAR_8 = VAR_12->s_sbbase + VAR_15 + VAR_14;
   goto out;
  }
 }

 if (VAR_17 && (VAR_12->fs_magic == VAR_2 ?
        (VAR_15 = FUNC_6(VAR_11, ((__fs64 *)VAR_4->b_data)[VAR_17-1])) :
        (VAR_15 = FUNC_5(VAR_11, ((__fs32 *)VAR_4->b_data)[VAR_17-1]))))
  VAR_16 = VAR_15 + VAR_12->s_fpb;
 else
  VAR_16 = VAR_4->b_blocknr + VAR_12->s_fpb;
 VAR_15 = FUNC_16(VAR_3, VAR_18, FUNC_12(VAR_6), VAR_16,
    VAR_12->s_fpb, VAR_7, VAR_10);
 if (!VAR_15) {
  if (FUNC_13(VAR_11, VAR_18))
   goto repeat;
  goto out;
 }


 if (!VAR_8) {
  VAR_13 = FUNC_10(VAR_11, VAR_12->s_sbbase + VAR_15 + VAR_14);
 } else {
  *VAR_8 = VAR_12->s_sbbase + VAR_15 + VAR_14;
  *VAR_9 = 1;
 }

 FUNC_8(VAR_4);
 if (FUNC_0(VAR_3))
  FUNC_11(VAR_4);
 VAR_3->i_ctime = VAR_0;
 FUNC_9(VAR_3);
 FUNC_1("result %llu\n", (unsigned long long)VAR_15 + VAR_14);
out:
 FUNC_3 (VAR_4);
 FUNC_1("EXIT\n");
 return VAR_13;
}
