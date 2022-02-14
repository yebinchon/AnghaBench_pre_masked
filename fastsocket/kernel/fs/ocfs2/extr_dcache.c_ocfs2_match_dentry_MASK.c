
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct dentry {TYPE_1__* d_parent; int d_fsdata; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_0,
         u64 VAR_1,
         int VAR_2)
{
 struct inode *VAR_3;







 if (!VAR_0->d_fsdata)
  return 0;

 if (!VAR_0->d_parent)
  return 0;

 if (VAR_2 && FUNC_1(VAR_0))
  return 0;

 VAR_3 = VAR_0->d_parent->d_inode;

 if (!VAR_3)
  return 0;


 if (FUNC_0(VAR_3)->ip_blkno != VAR_1)
  return 0;

 return 1;
}
