
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_super_block_first {void* fs_optim; } ;
struct TYPE_4__ {int cs_nffree; } ;
struct ufs_sb_private_info {unsigned int s_fpb; scalar_t__ s_size; int s_minfree; int s_dsize; scalar_t__ s_sbbase; TYPE_1__ cs_total; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct TYPE_6__ {scalar_t__ i_lastfrag; } ;
struct TYPE_5__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_3 ;


 TYPE_2__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct super_block*,int const) ;
 int FUNC_5 (struct super_block*,void*) ;
 int FUNC_6 (struct super_block*) ;
 void* FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 struct ufs_super_block_first* FUNC_8 (struct ufs_sb_private_info*) ;
 scalar_t__ FUNC_9 (struct inode*,scalar_t__,unsigned int,unsigned int,int*) ;
 scalar_t__ FUNC_10 (struct inode*,unsigned int,scalar_t__,scalar_t__,int*) ;
 int FUNC_11 (struct inode*,scalar_t__,unsigned int,scalar_t__,scalar_t__,struct page*) ;
 int FUNC_12 (struct inode*,scalar_t__,unsigned int,int ) ;
 int FUNC_13 (struct super_block*,void*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct super_block*,void*) ;
 unsigned int FUNC_15 (struct ufs_sb_private_info*,scalar_t__) ;
 int FUNC_16 (struct super_block*,char*,char*,unsigned long long,unsigned long long) ;
 unsigned int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct inode*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_19 (struct ufs_sb_private_info*,int ) ;
 unsigned int FUNC_20 (int ) ;
 int FUNC_21 (struct super_block*,char*,char*,unsigned long long,unsigned int) ;
 int FUNC_22 (struct super_block*) ;

u64 FUNC_23(struct inode *VAR_5, void *VAR_6, u64 VAR_7,
      u64 VAR_8, unsigned VAR_9, int *VAR_10,
      struct page *VAR_11)
{
 struct super_block * VAR_12;
 struct ufs_sb_private_info * VAR_13;
 struct ufs_super_block_first * VAR_14;
 unsigned VAR_15, VAR_16, VAR_17;
 u64 VAR_18, VAR_19, VAR_20;

 FUNC_0("ENTER, ino %lu, fragment %llu, goal %llu, count %u\n",
      VAR_5->i_ino, (unsigned long long)VAR_7,
      (unsigned long long)VAR_8, VAR_9);

 VAR_12 = VAR_5->i_sb;
 VAR_13 = FUNC_2(VAR_12)->s_uspi;
 VAR_14 = FUNC_8(VAR_13);
 *VAR_10 = -VAR_1;

 FUNC_6 (VAR_12);
 VAR_18 = FUNC_14(VAR_12, VAR_6);

 if (VAR_9 + FUNC_17(VAR_7) > VAR_13->s_fpb) {
  FUNC_21(VAR_12, "ufs_new_fragments", "internal warning"
       " fragment %llu, count %u",
       (unsigned long long)VAR_7, VAR_9);
  VAR_9 = VAR_13->s_fpb - FUNC_17(VAR_7);
 }
 VAR_16 = FUNC_17 (VAR_7);
 VAR_17 = VAR_16 + VAR_9;




 if (VAR_16) {
  if (!VAR_18) {
   FUNC_16(VAR_12, "ufs_new_fragments", "internal error, "
      "fragment %llu, tmp %llu\n",
      (unsigned long long)VAR_7,
      (unsigned long long)VAR_18);
   FUNC_22(VAR_12);
   return VAR_2;
  }
  if (VAR_7 < FUNC_1(VAR_5)->i_lastfrag) {
   FUNC_0("EXIT (ALREADY ALLOCATED)\n");
   FUNC_22 (VAR_12);
   return 0;
  }
 }
 else {
  if (VAR_18) {
   FUNC_0("EXIT (ALREADY ALLOCATED)\n");
   FUNC_22(VAR_12);
   return 0;
  }
 }




 if (!FUNC_3(VAR_0) && FUNC_19(VAR_13, VAR_3) <= 0) {
  FUNC_22 (VAR_12);
  FUNC_0("EXIT (FAILED)\n");
  return 0;
 }

 if (VAR_8 >= VAR_13->s_size)
  VAR_8 = 0;
 if (VAR_8 == 0)
  VAR_15 = FUNC_20 (VAR_5->i_ino);
 else
  VAR_15 = FUNC_15(VAR_13, VAR_8);




 if (VAR_16 == 0) {
  VAR_20 = FUNC_10 (VAR_5, VAR_15, VAR_8, VAR_9, VAR_10);
  if (VAR_20) {
   FUNC_13(VAR_12, VAR_6, VAR_20);
   *VAR_10 = 0;
   FUNC_1(VAR_5)->i_lastfrag =
    FUNC_7(VAR_4, FUNC_1(VAR_5)->i_lastfrag,
          VAR_7 + VAR_9);
   FUNC_12(VAR_5, VAR_20 + VAR_16,
     VAR_17 - VAR_16, VAR_11 != ((void*)0));
  }
  FUNC_22(VAR_12);
  FUNC_0("EXIT, result %llu\n", (unsigned long long)VAR_20);
  return VAR_20;
 }




 VAR_20 = FUNC_9 (VAR_5, VAR_18, VAR_16, VAR_17, VAR_10);
 if (VAR_20) {
  *VAR_10 = 0;
  FUNC_1(VAR_5)->i_lastfrag = FUNC_7(VAR_4, FUNC_1(VAR_5)->i_lastfrag, VAR_7 + VAR_9);
  FUNC_12(VAR_5, VAR_20 + VAR_16, VAR_17 - VAR_16,
    VAR_11 != ((void*)0));
  FUNC_22(VAR_12);
  FUNC_0("EXIT, result %llu\n", (unsigned long long)VAR_20);
  return VAR_20;
 }




 switch (FUNC_5(VAR_12, VAR_14->fs_optim)) {
     case 129:
  VAR_19 = VAR_17;
  if (VAR_13->s_minfree < 5 || VAR_13->cs_total.cs_nffree
      > VAR_13->s_dsize * VAR_13->s_minfree / (2 * 100))
   break;
  VAR_14->fs_optim = FUNC_4(VAR_12, 128);
  break;
     default:
  VAR_14->fs_optim = FUNC_4(VAR_12, 128);

     case 128:
  VAR_19 = VAR_13->s_fpb;
  if (VAR_13->cs_total.cs_nffree < VAR_13->s_dsize *
      (VAR_13->s_minfree - 2) / 100)
   break;
  VAR_14->fs_optim = FUNC_4(VAR_12, 128);
  break;
 }
 VAR_20 = FUNC_10 (VAR_5, VAR_15, VAR_8, VAR_19, VAR_10);
 if (VAR_20) {
  FUNC_12(VAR_5, VAR_20 + VAR_16, VAR_17 - VAR_16,
    VAR_11 != ((void*)0));
  FUNC_11(VAR_5, VAR_7 - VAR_16, VAR_16,
       VAR_13->s_sbbase + VAR_18,
       VAR_13->s_sbbase + VAR_20, VAR_11);
  FUNC_13(VAR_12, VAR_6, VAR_20);
  *VAR_10 = 0;
  FUNC_1(VAR_5)->i_lastfrag = FUNC_7(VAR_4, FUNC_1(VAR_5)->i_lastfrag, VAR_7 + VAR_9);
  FUNC_22(VAR_12);
  if (VAR_17 < VAR_19)
   FUNC_18 (VAR_5, VAR_20 + VAR_17, VAR_19 - VAR_17);
  FUNC_18 (VAR_5, VAR_18, VAR_16);
  FUNC_0("EXIT, result %llu\n", (unsigned long long)VAR_20);
  return VAR_20;
 }

 FUNC_22(VAR_12);
 FUNC_0("EXIT (FAILED)\n");
 return 0;
}
