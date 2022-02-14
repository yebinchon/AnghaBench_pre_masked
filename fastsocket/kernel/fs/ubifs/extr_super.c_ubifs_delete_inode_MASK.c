
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {scalar_t__ dirty; scalar_t__ ui_size; scalar_t__ xattr; } ;
struct ubifs_info {scalar_t__ nospace_rp; scalar_t__ nospace; } ;
struct inode {scalar_t__ i_nlink; int i_ino; scalar_t__ i_size; int i_data; int i_count; scalar_t__ i_mode; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ,int) ;
 struct ubifs_inode* FUNC_8 (struct inode*) ;
 int FUNC_9 (struct ubifs_info*,struct inode*) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_inode*) ;

__attribute__((used)) static void FUNC_11(struct inode *VAR_0)
{
 int VAR_1;
 struct ubifs_info *VAR_2 = VAR_0->i_sb->s_fs_info;
 struct ubifs_inode *VAR_3 = FUNC_8(VAR_0);

 if (VAR_3->xattr)





  goto out;

 FUNC_2("inode %lu, mode %#x", VAR_0->i_ino, (int)VAR_0->i_mode);
 FUNC_6(!FUNC_0(&VAR_0->i_count));
 FUNC_6(VAR_0->i_nlink == 0);

 FUNC_5(&VAR_0->i_data, 0);
 if (FUNC_3(VAR_0))
  goto out;

 VAR_3->ui_size = VAR_0->i_size = 0;
 VAR_1 = FUNC_9(VAR_2, VAR_0);
 if (VAR_1)




  FUNC_7("can't delete inode %lu, error %d",
     VAR_0->i_ino, VAR_1);

out:
 if (VAR_3->dirty)
  FUNC_10(VAR_2, VAR_3);
 else {

  VAR_2->nospace = VAR_2->nospace_rp = 0;
  FUNC_4();
 }
 FUNC_1(VAR_0);
}
