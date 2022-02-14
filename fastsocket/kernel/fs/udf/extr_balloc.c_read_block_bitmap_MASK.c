
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_bitmap {struct buffer_head** s_block_bitmap; int s_extPosition; } ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int partitionReferenceNum; int logicalBlockNum; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int s_partition; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct kernel_lb_addr*,unsigned int) ;
 struct buffer_head* FUNC_2 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1,
        struct udf_bitmap *VAR_2, unsigned int VAR_3,
        unsigned long VAR_4)
{
 struct buffer_head *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 struct kernel_lb_addr VAR_7;

 VAR_7.logicalBlockNum = VAR_2->s_extPosition;
 VAR_7.partitionReferenceNum = FUNC_0(VAR_1)->s_partition;

 VAR_5 = FUNC_2(VAR_1, FUNC_1(VAR_1, &VAR_7, VAR_3));
 if (!VAR_5)
  VAR_6 = -VAR_0;

 VAR_2->s_block_bitmap[VAR_4] = VAR_5;
 return VAR_6;
}
