
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_sb_info {int s_partitions; int * s_partmaps; int s_lvid_bh; int s_nls_map; scalar_t__ s_vat_inode; } ;
struct super_block {int s_flags; int * s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct super_block *VAR_2)
{
 int VAR_3;
 struct udf_sb_info *VAR_4;

 VAR_4 = FUNC_1(VAR_2);

 FUNC_5();

 if (VAR_4->s_vat_inode)
  FUNC_3(VAR_4->s_vat_inode);
 if (VAR_4->s_partitions)
  for (VAR_3 = 0; VAR_3 < VAR_4->s_partitions; VAR_3++)
   FUNC_7(&VAR_4->s_partmaps[VAR_3]);




 if (!(VAR_2->s_flags & VAR_0))
  FUNC_6(VAR_2);
 FUNC_2(VAR_4->s_lvid_bh);
 FUNC_4(VAR_4->s_partmaps);
 FUNC_4(VAR_2->s_fs_info);
 VAR_2->s_fs_info = ((void*)0);

 FUNC_9();
}
