
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * i_data; } ;
struct udf_inode_info {int vfs_inode; TYPE_1__ i_ext; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct udf_inode_info *VAR_1 = (struct udf_inode_info *)VAR_0;

 VAR_1->i_ext.i_data = ((void*)0);
 FUNC_0(&VAR_1->vfs_inode);
}
