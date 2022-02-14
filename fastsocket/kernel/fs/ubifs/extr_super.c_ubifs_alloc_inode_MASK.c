
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ubifs_inode {struct inode vfs_inode; int ui_lock; int ui_mutex; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 struct ubifs_inode* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_4(struct super_block *VAR_2)
{
 struct ubifs_inode *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1((void *)VAR_3 + sizeof(struct inode), 0,
        sizeof(struct ubifs_inode) - sizeof(struct inode));
 FUNC_2(&VAR_3->ui_mutex);
 FUNC_3(&VAR_3->ui_lock);
 return &VAR_3->vfs_inode;
}
