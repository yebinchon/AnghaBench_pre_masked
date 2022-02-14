
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct udf_sb_info {TYPE_1__* s_lvid_bh; } ;
struct super_block {int dummy; } ;
struct logicalVolIntegrityDesc {int * freeSpaceTable; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0, u16 VAR_1, u32 VAR_2)
{
 struct udf_sb_info *VAR_3 = FUNC_0(VAR_0);
 struct logicalVolIntegrityDesc *VAR_4;

 if (!VAR_3->s_lvid_bh)
  return;

 VAR_4 = (struct logicalVolIntegrityDesc *)VAR_3->s_lvid_bh->b_data;
 FUNC_1(&VAR_4->freeSpaceTable[VAR_1], VAR_2);
 FUNC_2(VAR_0);
}
