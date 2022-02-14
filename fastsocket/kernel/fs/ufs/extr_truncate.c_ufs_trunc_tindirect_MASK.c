
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {scalar_t__ s_apb; scalar_t__ s_2apb; scalar_t__ s_2apbshift; int s_fpb; int s_bsize; } ;
struct ufs_inode_info {int dummy; } ;
struct ufs_buffer_head {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int ) ;
 struct ufs_inode_info* FUNC_2 (struct inode*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 int VAR_2 ;
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
 int FUNC_14 (struct inode*,scalar_t__,int ) ;
 void* FUNC_15 (struct ufs_sb_private_info*,struct ufs_inode_info*,int ) ;
 int FUNC_16 (struct ufs_sb_private_info*,void*) ;
 int FUNC_17 (struct inode*,scalar_t__,void*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_3)
{
 struct super_block *VAR_4 = VAR_3->i_sb;
 struct ufs_sb_private_info *VAR_5 = FUNC_3(VAR_4)->s_uspi;
 struct ufs_inode_info *VAR_6 = FUNC_2(VAR_3);
 struct ufs_buffer_head * VAR_7;
 u64 VAR_8, VAR_9, VAR_10;
 void *VAR_11, *VAR_12;
 int VAR_13;

 FUNC_1("ENTER: ino %lu\n", VAR_3->i_ino);

 VAR_13 = 0;

 VAR_8 = (VAR_0 > (VAR_1 + VAR_5->s_apb + VAR_5->s_2apb))
  ? ((VAR_0 - VAR_1 - VAR_5->s_apb - VAR_5->s_2apb) >> VAR_5->s_2apbshift) : 0;

 VAR_12 = FUNC_15(VAR_5, VAR_6, VAR_2);
 if (!(VAR_9 = FUNC_13(VAR_4, VAR_12)))
  return 0;
 VAR_7 = FUNC_6 (VAR_4, VAR_9, VAR_5->s_bsize);
 if (VAR_9 != FUNC_13(VAR_4, VAR_12)) {
  FUNC_7 (VAR_7);
  return 1;
 }
 if (!VAR_7) {
  FUNC_12(VAR_5, VAR_12);
  return 0;
 }

 for (VAR_10 = VAR_8 ; VAR_10 < VAR_5->s_apb ; VAR_10++) {
  VAR_11 = FUNC_9(VAR_5, VAR_7, VAR_10);
  VAR_13 |= FUNC_17(VAR_3, VAR_1 +
   VAR_5->s_apb + ((VAR_10 + 1) << VAR_5->s_2apbshift), VAR_11);
  FUNC_10(VAR_7);
 }
 for (VAR_10 = 0; VAR_10 < VAR_5->s_apb; VAR_10++)
  if (!FUNC_16(VAR_5,
       FUNC_9(VAR_5, VAR_7, VAR_10)))
   break;
 if (VAR_10 >= VAR_5->s_apb) {
  VAR_9 = FUNC_13(VAR_4, VAR_12);
  FUNC_12(VAR_5, VAR_12);

  FUNC_14(VAR_3, VAR_9, VAR_5->s_fpb);
  FUNC_4(VAR_3);
  FUNC_5(VAR_7);
  VAR_7 = ((void*)0);
 }
 if (FUNC_0(VAR_3) && VAR_7 && FUNC_8(VAR_7))
  FUNC_11(VAR_7);
 FUNC_7 (VAR_7);

 FUNC_1("EXIT: ino %lu\n", VAR_3->i_ino);
 return VAR_13;
}
