
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct TYPE_5__ {int s_table; int s_bitmap; } ;
struct TYPE_4__ {int s_table; int s_bitmap; } ;
struct udf_part_map {int s_partition_flags; TYPE_2__ s_fspace; TYPE_1__ s_uspace; } ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {struct udf_part_map* s_partmaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct inode*,int ,size_t,int ,int*) ;
 int FUNC_2 (struct super_block*,struct inode*,int ,size_t,int ,int*) ;

inline int FUNC_3(struct super_block *VAR_5,
    struct inode *VAR_6,
    uint16_t VAR_7, uint32_t VAR_8, int *VAR_9)
{
 struct udf_part_map *VAR_10 = &FUNC_0(VAR_5)->s_partmaps[VAR_7];

 if (VAR_10->s_partition_flags & VAR_3)
  return FUNC_1(VAR_5, VAR_6,
        VAR_10->s_uspace.s_bitmap,
        VAR_7, VAR_8, VAR_9);
 else if (VAR_10->s_partition_flags & VAR_4)
  return FUNC_2(VAR_5, VAR_6,
        VAR_10->s_uspace.s_table,
        VAR_7, VAR_8, VAR_9);
 else if (VAR_10->s_partition_flags & VAR_1)
  return FUNC_1(VAR_5, VAR_6,
         VAR_10->s_fspace.s_bitmap,
         VAR_7, VAR_8, VAR_9);
 else if (VAR_10->s_partition_flags & VAR_2)
  return FUNC_2(VAR_5, VAR_6,
        VAR_10->s_fspace.s_table,
        VAR_7, VAR_8, VAR_9);
 else {
  *VAR_9 = -VAR_0;
  return 0;
 }
}
