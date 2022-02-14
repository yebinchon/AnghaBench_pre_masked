
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ufs_sb_private_info {int s_fpbmask; unsigned int s_fpb; } ;
struct ufs_inode_info {int i_lastfrag; } ;
struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 struct ufs_inode_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct ufs_sb_private_info*,void*) ;
 unsigned int FUNC_6 (struct super_block*,void*) ;
 int FUNC_7 (int) ;
 unsigned int FUNC_8 (int) ;
 int FUNC_9 (struct inode*,unsigned int,unsigned int) ;
 int FUNC_10 (struct inode*,unsigned int,int) ;
 void* FUNC_11 (struct ufs_sb_private_info*,struct ufs_inode_info*,unsigned int) ;
 int FUNC_12 (struct super_block*,char*,char*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_3)
{
 struct ufs_inode_info *VAR_4 = FUNC_1(VAR_3);
 struct super_block * VAR_5;
 struct ufs_sb_private_info * VAR_6;
 void *VAR_7;
 u64 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned VAR_14, VAR_15;
 unsigned VAR_16, VAR_17;
 int VAR_18;

 FUNC_0("ENTER: ino %lu\n", VAR_3->i_ino);

 VAR_5 = VAR_3->i_sb;
 VAR_6 = FUNC_2(VAR_5)->s_uspi;

 VAR_14 = 0;
 VAR_15 = 0;
 VAR_18 = 0;

 VAR_8 = VAR_0;
 VAR_11 = FUNC_4(VAR_2, VAR_1, VAR_4->i_lastfrag);
 VAR_9 = ((VAR_8 & VAR_6->s_fpbmask) ? ((VAR_8 | VAR_6->s_fpbmask) + 1) : VAR_8);
 VAR_10 = VAR_11 & ~VAR_6->s_fpbmask;
 VAR_12 = VAR_13 = 0;
 if (VAR_9 > VAR_10) {
  VAR_9 = VAR_11;
  VAR_10 = VAR_11 = 0;
 } else if (VAR_9 < VAR_10) {
  VAR_12 = FUNC_8 (VAR_9);
  VAR_13 = FUNC_8 (VAR_10);
 }

 FUNC_0("ino %lu, frag1 %llu, frag2 %llu, block1 %llu, block2 %llu,"
      " frag3 %llu, frag4 %llu\n", VAR_3->i_ino,
      (unsigned long long)VAR_8, (unsigned long long)VAR_9,
      (unsigned long long)VAR_12, (unsigned long long)VAR_13,
      (unsigned long long)VAR_10, (unsigned long long)VAR_11);

 if (VAR_8 >= VAR_9)
  goto next1;




 VAR_7 = FUNC_11(VAR_6, VAR_4, FUNC_8(VAR_8));
 VAR_17 = FUNC_6(VAR_5, VAR_7);
 if (!VAR_17 )
  FUNC_12 (VAR_5, "ufs_trunc_direct", "internal error");
 VAR_9 -= VAR_8;
 VAR_8 = FUNC_7 (VAR_8);

 FUNC_10(VAR_3, VAR_17 + VAR_8, VAR_9);
 FUNC_3(VAR_3);
 VAR_14 = VAR_17 + VAR_8;

next1:



 for (VAR_16 = VAR_12 ; VAR_16 < VAR_13; VAR_16++) {
  VAR_7 = FUNC_11(VAR_6, VAR_4, VAR_16);
  VAR_17 = FUNC_6(VAR_5, VAR_7);
  if (!VAR_17)
   continue;
  FUNC_5(VAR_6, VAR_7);

  if (VAR_15 == 0) {
   VAR_14 = VAR_17;
   VAR_15 = VAR_6->s_fpb;
  } else if (VAR_15 > 0 && VAR_14 == VAR_17 - VAR_15)
   VAR_15 += VAR_6->s_fpb;
  else {
   FUNC_9 (VAR_3, VAR_14, VAR_15);
   VAR_14 = VAR_17;
   VAR_15 = VAR_6->s_fpb;
  }
  FUNC_3(VAR_3);
 }

 if (VAR_15 > 0)
  FUNC_9 (VAR_3, VAR_14, VAR_15);

 if (VAR_10 >= VAR_11)
  goto next3;




 VAR_7 = FUNC_11(VAR_6, VAR_4, FUNC_8(VAR_10));
 VAR_17 = FUNC_6(VAR_5, VAR_7);
 if (!VAR_17 )
  FUNC_12(VAR_5, "ufs_truncate_direct", "internal error");
 VAR_11 = FUNC_7 (VAR_11);
 FUNC_5(VAR_6, VAR_7);

 FUNC_10 (VAR_3, VAR_17, VAR_11);
 FUNC_3(VAR_3);
 next3:

 FUNC_0("EXIT: ino %lu\n", VAR_3->i_ino);
 return VAR_18;
}
