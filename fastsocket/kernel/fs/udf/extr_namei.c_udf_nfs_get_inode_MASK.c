
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct inode {scalar_t__ i_generation; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 struct dentry* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,struct kernel_lb_addr*) ;

__attribute__((used)) static struct dentry *FUNC_4(struct super_block *VAR_2, u32 VAR_3,
     u16 VAR_4, __u32 VAR_5)
{
 struct inode *VAR_6;
 struct kernel_lb_addr VAR_7;

 if (VAR_3 == 0)
  return FUNC_0(-VAR_1);

 VAR_7.logicalBlockNum = VAR_3;
 VAR_7.partitionReferenceNum = VAR_4;
 VAR_6 = FUNC_3(VAR_2, &VAR_7);

 if (VAR_6 == ((void*)0))
  return FUNC_0(-VAR_0);

 if (VAR_5 && VAR_6->i_generation != VAR_5) {
  FUNC_2(VAR_6);
  return FUNC_0(-VAR_1);
 }
 return FUNC_1(VAR_6);
}
