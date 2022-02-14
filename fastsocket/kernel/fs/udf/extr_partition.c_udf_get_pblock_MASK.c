
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t uint16_t ;
struct udf_sb_info {size_t s_partitions; struct udf_part_map* s_partmaps; } ;
struct udf_part_map {int (* s_partition_func ) (struct super_block*,int,size_t,int) ;int s_partition_root; } ;
struct super_block {int dummy; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int,size_t,int) ;
 int FUNC_2 (char*,int,size_t,int) ;

uint32_t FUNC_3(struct super_block *VAR_0, uint32_t VAR_1,
   uint16_t VAR_2, uint32_t VAR_3)
{
 struct udf_sb_info *VAR_4 = FUNC_0(VAR_0);
 struct udf_part_map *VAR_5;
 if (VAR_2 >= VAR_4->s_partitions) {
  FUNC_2("block=%d, partition=%d, offset=%d: "
     "invalid partition\n", VAR_1, VAR_2, VAR_3);
  return 0xFFFFFFFF;
 }
 VAR_5 = &VAR_4->s_partmaps[VAR_2];
 if (VAR_5->s_partition_func)
  return VAR_5->s_partition_func(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  return VAR_5->s_partition_root + VAR_1 + VAR_3;
}
