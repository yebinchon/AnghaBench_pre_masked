
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct kernel_lb_addr {scalar_t__ logicalBlockNum; size_t partitionReferenceNum; } ;
struct inode {int i_state; } ;
struct TYPE_6__ {int i_location; } ;
struct TYPE_5__ {TYPE_1__* s_partmaps; } ;
struct TYPE_4__ {scalar_t__ s_partition_len; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,unsigned long) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,struct kernel_lb_addr*,int) ;
 int FUNC_8 (char*,scalar_t__,size_t) ;
 unsigned long FUNC_9 (struct super_block*,struct kernel_lb_addr*,int ) ;
 int FUNC_10 (struct inode*) ;

struct inode *FUNC_11(struct super_block *VAR_1, struct kernel_lb_addr *VAR_2)
{
 unsigned long VAR_3 = FUNC_9(VAR_1, VAR_2, 0);
 struct inode *VAR_4 = FUNC_3(VAR_1, VAR_3);

 if (!VAR_4)
  return ((void*)0);

 if (VAR_4->i_state & VAR_0) {
  FUNC_7(&FUNC_0(VAR_4)->i_location, VAR_2, sizeof(struct kernel_lb_addr));
  FUNC_2(VAR_4);
  FUNC_10(VAR_4);
 }

 if (FUNC_5(VAR_4))
  goto out_iput;

 if (VAR_2->logicalBlockNum >= FUNC_1(VAR_1)->
   s_partmaps[VAR_2->partitionReferenceNum].s_partition_len) {
  FUNC_8("block=%d, partition=%d out of range\n",
     VAR_2->logicalBlockNum, VAR_2->partitionReferenceNum);
  FUNC_6(VAR_4);
  goto out_iput;
 }

 return VAR_4;

 out_iput:
 FUNC_4(VAR_4);
 return ((void*)0);
}
