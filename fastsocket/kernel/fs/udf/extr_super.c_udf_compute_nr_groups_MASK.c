
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct udf_part_map {scalar_t__ s_partition_len; } ;
struct super_block {int s_blocksize; } ;
struct spaceBitmapDesc {int dummy; } ;
struct TYPE_2__ {struct udf_part_map* s_partmaps; } ;


 int FUNC_0 (scalar_t__,int) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;

int FUNC_2(struct super_block *VAR_0, u32 VAR_1)
{
 struct udf_part_map *VAR_2 = &FUNC_1(VAR_0)->s_partmaps[VAR_1];
 return FUNC_0(VAR_2->s_partition_len +
       (sizeof(struct spaceBitmapDesc) << 3),
       VAR_0->s_blocksize * 8);
}
