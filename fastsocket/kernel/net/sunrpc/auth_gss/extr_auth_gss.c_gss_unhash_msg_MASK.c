
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; } ;
struct gss_upcall_msg {int list; TYPE_1__* inode; } ;
struct TYPE_2__ {struct inode vfs_inode; } ;


 int FUNC_0 (struct gss_upcall_msg*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct gss_upcall_msg *VAR_0)
{
 struct inode *VAR_1 = &VAR_0->inode->vfs_inode;

 if (FUNC_1(&VAR_0->list))
  return;
 FUNC_2(&VAR_1->i_lock);
 if (!FUNC_1(&VAR_0->list))
  FUNC_0(VAR_0);
 FUNC_3(&VAR_1->i_lock);
}
