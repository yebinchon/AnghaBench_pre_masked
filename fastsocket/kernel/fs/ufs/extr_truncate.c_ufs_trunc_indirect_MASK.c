
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {scalar_t__ s_apb; unsigned int s_fpb; int s_bsize; } ;
struct ufs_buffer_head {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int ,...) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct ufs_buffer_head*) ;
 struct ufs_buffer_head* FUNC_6 (struct super_block*,scalar_t__,int ) ;
 int FUNC_7 (struct ufs_buffer_head*) ;
 scalar_t__ FUNC_8 (struct ufs_buffer_head*) ;
 void* FUNC_9 (struct ufs_sb_private_info*,struct ufs_buffer_head*,scalar_t__) ;
 int FUNC_10 (struct ufs_buffer_head*) ;
 int FUNC_11 (struct ufs_buffer_head*) ;
 int FUNC_12 (struct ufs_sb_private_info*,void*) ;
 scalar_t__ FUNC_13 (struct super_block*,void*) ;
 int FUNC_14 (struct inode*,scalar_t__,unsigned int) ;
 int FUNC_15 (struct ufs_sb_private_info*,void*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_1, u64 VAR_2, void *VAR_3)
{
 struct super_block * VAR_4;
 struct ufs_sb_private_info * VAR_5;
 struct ufs_buffer_head * VAR_6;
 void *VAR_7;
 u64 VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned VAR_12;
 int VAR_13;

 FUNC_2("ENTER: ino %lu, offset %llu, p: %p\n",
      VAR_1->i_ino, (unsigned long long)VAR_2, VAR_3);

 FUNC_0(!VAR_3);

 VAR_4 = VAR_1->i_sb;
 VAR_5 = FUNC_3(VAR_4)->s_uspi;

 VAR_11 = 0;
 VAR_12 = 0;
 VAR_13 = 0;

 VAR_8 = FUNC_13(VAR_4, VAR_3);
 if (!VAR_8)
  return 0;
 VAR_6 = FUNC_6(VAR_4, VAR_8, VAR_5->s_bsize);
 if (VAR_8 != FUNC_13(VAR_4, VAR_3)) {
  FUNC_7 (VAR_6);
  return 1;
 }
 if (!VAR_6) {
  FUNC_12(VAR_5, VAR_3);
  return 0;
 }

 VAR_9 = (VAR_0 > VAR_2) ? (VAR_0 - VAR_2) : 0;
 for (VAR_10 = VAR_9; VAR_10 < VAR_5->s_apb; VAR_10++) {
  VAR_7 = FUNC_9(VAR_5, VAR_6, VAR_10);
  VAR_8 = FUNC_13(VAR_4, VAR_7);
  if (!VAR_8)
   continue;

  FUNC_12(VAR_5, VAR_7);
  FUNC_10(VAR_6);
  if (VAR_12 == 0) {
   VAR_11 = VAR_8;
   VAR_12 = VAR_5->s_fpb;
  } else if (VAR_12 > 0 && VAR_11 == VAR_8 - VAR_12)
   VAR_12 += VAR_5->s_fpb;
  else {
   FUNC_14 (VAR_1, VAR_11, VAR_12);
   VAR_11 = VAR_8;
   VAR_12 = VAR_5->s_fpb;
  }

  FUNC_4(VAR_1);
 }

 if (VAR_12 > 0) {
  FUNC_14 (VAR_1, VAR_11, VAR_12);
 }
 for (VAR_10 = 0; VAR_10 < VAR_5->s_apb; VAR_10++)
  if (!FUNC_15(VAR_5,
       FUNC_9(VAR_5, VAR_6, VAR_10)))
   break;
 if (VAR_10 >= VAR_5->s_apb) {
  VAR_8 = FUNC_13(VAR_4, VAR_3);
  FUNC_12(VAR_5, VAR_3);

  FUNC_14 (VAR_1, VAR_8, VAR_5->s_fpb);
  FUNC_4(VAR_1);
  FUNC_5(VAR_6);
  VAR_6 = ((void*)0);
 }
 if (FUNC_1(VAR_1) && VAR_6 && FUNC_8(VAR_6))
  FUNC_11(VAR_6);
 FUNC_7 (VAR_6);

 FUNC_2("EXIT: ino %lu\n", VAR_1->i_ino);

 return VAR_13;
}
