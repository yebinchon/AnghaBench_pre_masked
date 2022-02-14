
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udf_sb_info {unsigned int s_partition; struct udf_part_map* s_partmaps; TYPE_1__* s_lvid_bh; } ;
struct TYPE_6__ {int s_table; int s_bitmap; } ;
struct TYPE_5__ {int s_table; int s_bitmap; } ;
struct udf_part_map {int s_partition_flags; TYPE_3__ s_fspace; TYPE_2__ s_uspace; } ;
struct super_block {int dummy; } ;
struct logicalVolIntegrityDesc {int * freeSpaceTable; int numOfPartitions; } ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct super_block*,int ) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct super_block *VAR_4)
{
 unsigned int VAR_5 = 0;
 struct udf_sb_info *VAR_6;
 struct udf_part_map *VAR_7;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6->s_lvid_bh) {
  struct logicalVolIntegrityDesc *VAR_8 =
   (struct logicalVolIntegrityDesc *)
   VAR_6->s_lvid_bh->b_data;
  if (FUNC_1(VAR_8->numOfPartitions) > VAR_6->s_partition) {
   VAR_5 = FUNC_1(
     VAR_8->freeSpaceTable[VAR_6->s_partition]);
   if (VAR_5 == 0xFFFFFFFF)
    VAR_5 = 0;
  }
 }

 if (VAR_5)
  return VAR_5;

 VAR_7 = &VAR_6->s_partmaps[VAR_6->s_partition];
 if (VAR_7->s_partition_flags & VAR_2) {
  VAR_5 += FUNC_2(VAR_4,
            VAR_7->s_uspace.s_bitmap);
 }
 if (VAR_7->s_partition_flags & VAR_0) {
  VAR_5 += FUNC_2(VAR_4,
            VAR_7->s_fspace.s_bitmap);
 }
 if (VAR_5)
  return VAR_5;

 if (VAR_7->s_partition_flags & VAR_3) {
  VAR_5 += FUNC_3(VAR_4,
           VAR_7->s_uspace.s_table);
 }
 if (VAR_7->s_partition_flags & VAR_1) {
  VAR_5 += FUNC_3(VAR_4,
           VAR_7->s_fspace.s_table);
 }

 return VAR_5;
}
