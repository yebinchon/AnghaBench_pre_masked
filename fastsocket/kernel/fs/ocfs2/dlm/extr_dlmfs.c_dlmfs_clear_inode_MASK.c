
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int * i_ino; } ;
struct dlmfs_inode_private {int * ip_dlm; int * ip_parent; int ip_lockres; } ;


 struct dlmfs_inode_private* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_0)
{
 int VAR_1;
 struct dlmfs_inode_private *VAR_2;

 if (!VAR_0)
  return;

 FUNC_3(0, "inode %lu\n", VAR_0->i_ino);

 VAR_2 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0->i_mode)) {
  VAR_1 = FUNC_5(&VAR_2->ip_lockres);
  if (VAR_1 < 0)
   FUNC_4(VAR_1);
  FUNC_2(VAR_2->ip_parent);
  goto clear_fields;
 }

 FUNC_3(0, "we're a directory, ip->ip_dlm = 0x%p\n", VAR_2->ip_dlm);


 if (VAR_2->ip_dlm)
  FUNC_6(VAR_2->ip_dlm);
clear_fields:
 VAR_2->ip_parent = ((void*)0);
 VAR_2->ip_dlm = ((void*)0);
}
