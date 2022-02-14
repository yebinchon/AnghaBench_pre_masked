
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kernel_lb_addr {scalar_t__ partitionReferenceNum; int logicalBlockNum; } ;
struct inode {int i_generation; int i_mode; } ;
struct TYPE_5__ {int parent_generation; scalar_t__ parent_partref; int parent_block; int generation; scalar_t__ partref; int block; } ;
struct fid {TYPE_2__ udf; } ;
struct dentry {int d_lock; TYPE_1__* d_parent; struct inode* d_inode; } ;
typedef int __u32 ;
struct TYPE_6__ {struct kernel_lb_addr i_location; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_2, __u32 *VAR_3, int *VAR_4,
    int VAR_5)
{
 int VAR_6 = *VAR_4;
 struct inode *VAR_7 = VAR_2->d_inode;
 struct kernel_lb_addr VAR_8 = FUNC_1(VAR_7)->i_location;
 struct fid *VAR_9 = (struct fid *)VAR_3;
 int VAR_10 = VAR_0;

 if (VAR_6 < 3 || (VAR_5 && VAR_6 < 5))
  return 255;

 *VAR_4 = 3;
 VAR_9->udf.block = VAR_8.logicalBlockNum;
 VAR_9->udf.partref = VAR_8.partitionReferenceNum;
 VAR_9->udf.parent_partref = 0;
 VAR_9->udf.generation = VAR_7->i_generation;

 if (VAR_5 && !FUNC_0(VAR_7->i_mode)) {
  FUNC_2(&VAR_2->d_lock);
  VAR_7 = VAR_2->d_parent->d_inode;
  VAR_8 = FUNC_1(VAR_7)->i_location;
  VAR_9->udf.parent_block = VAR_8.logicalBlockNum;
  VAR_9->udf.parent_partref = VAR_8.partitionReferenceNum;
  VAR_9->udf.parent_generation = VAR_7->i_generation;
  FUNC_3(&VAR_2->d_lock);
  *VAR_4 = 5;
  VAR_10 = VAR_1;
 }

 return VAR_10;
}
