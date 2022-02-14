
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_1__ ntfs_inode ;


 int VAR_0 ;
 struct inode* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct super_block*,char*) ;

struct inode *FUNC_5(struct super_block *VAR_2)
{
 ntfs_inode *VAR_3;

 FUNC_3("Entering.");
 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (FUNC_2(VAR_3 != ((void*)0))) {
  VAR_3->state = 0;
  return FUNC_0(VAR_3);
 }
 FUNC_4(VAR_2, "Allocation of NTFS big inode structure failed.");
 return ((void*)0);
}
