
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlmfs_inode_private {int ip_vfs_inode; int * ip_parent; int * ip_dlm; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct dlmfs_inode_private *VAR_1 =
  (struct dlmfs_inode_private *) VAR_0;

 VAR_1->ip_dlm = ((void*)0);
 VAR_1->ip_parent = ((void*)0);

 FUNC_0(&VAR_1->ip_vfs_inode);
}
