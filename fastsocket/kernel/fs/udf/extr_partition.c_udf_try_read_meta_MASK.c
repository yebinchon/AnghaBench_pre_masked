
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct udf_part_map {int s_partition_num; } ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int logicalBlockNum; } ;
struct inode {struct super_block* i_sb; } ;
struct extent_position {int bh; } ;
typedef int sector_t ;
struct TYPE_2__ {struct udf_part_map* s_partmaps; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int,struct extent_position*,struct kernel_lb_addr*,int*,int*) ;
 int FUNC_3 (struct super_block*,int ,int ,int) ;

__attribute__((used)) static uint32_t FUNC_4(struct inode *VAR_1, uint32_t VAR_2,
     uint16_t VAR_3, uint32_t VAR_4)
{
 struct super_block *VAR_5 = VAR_1->i_sb;
 struct udf_part_map *VAR_6;
 struct kernel_lb_addr VAR_7;
 uint32_t VAR_8;
 sector_t VAR_9;
 struct extent_position VAR_10 = {};
 uint32_t VAR_11;

 if (FUNC_2(VAR_1, VAR_2, &VAR_10, &VAR_7, &VAR_8, &VAR_9) !=
      (VAR_0 >> 30))
  VAR_11 = 0xFFFFFFFF;
 else {
  VAR_6 = &FUNC_0(VAR_5)->s_partmaps[VAR_3];

  VAR_11 = FUNC_3(VAR_5, VAR_7.logicalBlockNum,
   VAR_6->s_partition_num, VAR_9 + VAR_4);
 }

 FUNC_1(VAR_10.bh);
 return VAR_11;
}
