
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {scalar_t__ s_apbshift; scalar_t__ s_apb; int s_fpb; int s_bsize; } ;
struct ufs_buffer_head {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct ufs_buffer_head*) ;
 struct ufs_buffer_head* FUNC_5 (struct super_block*,scalar_t__,int ) ;
 int FUNC_6 (struct ufs_buffer_head*) ;
 scalar_t__ FUNC_7 (struct ufs_buffer_head*) ;
 void* FUNC_8 (struct ufs_sb_private_info*,struct ufs_buffer_head*,scalar_t__) ;
 int FUNC_9 (struct ufs_buffer_head*) ;
 int FUNC_10 (struct ufs_buffer_head*) ;
 int FUNC_11 (struct ufs_sb_private_info*,void*) ;
 scalar_t__ FUNC_12 (struct super_block*,void*) ;
 int FUNC_13 (struct inode*,scalar_t__,int ) ;
 int FUNC_14 (struct ufs_sb_private_info*,void*) ;
 int FUNC_15 (struct inode*,scalar_t__,void*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_1, u64 VAR_2, void *VAR_3)
{
 struct super_block * VAR_4;
 struct ufs_sb_private_info * VAR_5;
 struct ufs_buffer_head *VAR_6;
 u64 VAR_7, VAR_8, VAR_9;
 void *VAR_10;
 int VAR_11 = 0;

 FUNC_1("ENTER: ino %lu\n", VAR_1->i_ino);

 VAR_4 = VAR_1->i_sb;
 VAR_5 = FUNC_2(VAR_4)->s_uspi;

 VAR_9 = (VAR_0 > VAR_2)
  ? ((VAR_0 - VAR_2) >> VAR_5->s_apbshift) : 0;
 VAR_11 = 0;

 VAR_8 = FUNC_12(VAR_4, VAR_3);
 if (!VAR_8)
  return 0;
 VAR_6 = FUNC_5(VAR_4, VAR_8, VAR_5->s_bsize);
 if (VAR_8 != FUNC_12(VAR_4, VAR_3)) {
  FUNC_6 (VAR_6);
  return 1;
 }
 if (!VAR_6) {
  FUNC_11(VAR_5, VAR_3);
  return 0;
 }

 for (VAR_7 = VAR_9 ; VAR_7 < VAR_5->s_apb ; VAR_7++) {
  VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_7);
  VAR_8 = FUNC_12(VAR_4, VAR_10);
  if (!VAR_8)
   continue;
  VAR_11 |= FUNC_15 (VAR_1, VAR_2 + (VAR_7 << VAR_5->s_apbshift), VAR_10);
  FUNC_9(VAR_6);
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->s_apb; VAR_7++)
  if (!FUNC_14(VAR_5,
       FUNC_8(VAR_5, VAR_6, VAR_7)))
   break;
 if (VAR_7 >= VAR_5->s_apb) {
  VAR_8 = FUNC_12(VAR_4, VAR_3);
  FUNC_11(VAR_5, VAR_3);

  FUNC_13(VAR_1, VAR_8, VAR_5->s_fpb);
  FUNC_3(VAR_1);
  FUNC_4(VAR_6);
  VAR_6 = ((void*)0);
 }
 if (FUNC_0(VAR_1) && VAR_6 && FUNC_7(VAR_6))
  FUNC_10(VAR_6);
 FUNC_6 (VAR_6);

 FUNC_1("EXIT: ino %lu\n", VAR_1->i_ino);

 return VAR_11;
}
