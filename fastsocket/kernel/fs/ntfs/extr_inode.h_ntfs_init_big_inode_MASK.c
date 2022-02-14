
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct TYPE_4__ {int mft_no; } ;
typedef TYPE_1__ ntfs_inode ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static inline void FUNC_3(struct inode *VAR_0)
{
 ntfs_inode *VAR_1 = FUNC_0(VAR_0);

 FUNC_2("Entering.");
 FUNC_1(VAR_0->i_sb, VAR_1);
 VAR_1->mft_no = VAR_0->i_ino;
}
