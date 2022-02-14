
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_sb_info {int s_alloc_mutex; scalar_t__ s_lvid_bh; } ;
struct super_block {int dummy; } ;
struct logicalVolIntegrityDescImpUse {int numFiles; int numDirs; } ;
struct inode {int i_mode; struct super_block* i_sb; } ;
struct TYPE_2__ {int i_location; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct udf_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct super_block*,int *,int *,int ,int) ;
 struct logicalVolIntegrityDescImpUse* FUNC_8 (struct udf_sb_info*) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;

void FUNC_12(struct inode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->i_sb;
 struct udf_sb_info *VAR_2 = FUNC_2(VAR_1);





 FUNC_11(VAR_0);
 FUNC_10(VAR_0);

 FUNC_3(VAR_0);

 FUNC_5(&VAR_2->s_alloc_mutex);
 if (VAR_2->s_lvid_bh) {
  struct logicalVolIntegrityDescImpUse *VAR_3 =
       FUNC_8(VAR_2);
  if (FUNC_0(VAR_0->i_mode))
   FUNC_4(&VAR_3->numDirs, -1);
  else
   FUNC_4(&VAR_3->numFiles, -1);
  FUNC_9(VAR_1);
 }
 FUNC_6(&VAR_2->s_alloc_mutex);

 FUNC_7(VAR_1, ((void*)0), &FUNC_1(VAR_0)->i_location, 0, 1);
}
