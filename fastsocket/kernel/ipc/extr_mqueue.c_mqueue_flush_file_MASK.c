
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mqueue_inode_info {scalar_t__ notify_owner; int lock; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int fl_owner_t ;
struct TYPE_3__ {int d_inode; } ;


 struct mqueue_inode_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mqueue_inode_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, fl_owner_t VAR_2)
{
 struct mqueue_inode_info *VAR_3 = FUNC_0(VAR_1->f_path.dentry->d_inode);

 FUNC_2(&VAR_3->lock);
 if (FUNC_4(VAR_0) == VAR_3->notify_owner)
  FUNC_1(VAR_3);

 FUNC_3(&VAR_3->lock);
 return 0;
}
