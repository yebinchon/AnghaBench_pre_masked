
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_iget_args {int dirid; int objectid; } ;
struct inode {int i_ino; } ;
struct TYPE_2__ {int k_dir_id; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct inode *VAR_0, void *VAR_1)
{
 struct reiserfs_iget_args *VAR_2 = (struct reiserfs_iget_args *)VAR_1;
 VAR_0->i_ino = VAR_2->objectid;
 FUNC_0(VAR_0)->k_dir_id = FUNC_1(VAR_2->dirid);
 return 0;
}
