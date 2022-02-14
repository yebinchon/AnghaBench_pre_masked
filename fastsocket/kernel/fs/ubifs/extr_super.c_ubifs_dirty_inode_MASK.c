
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {int dirty; int ui_mutex; } ;
struct inode {int i_ino; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct ubifs_inode* FUNC_3 (struct inode*) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0)
{
 struct ubifs_inode *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(FUNC_1(&VAR_1->ui_mutex));
 if (!VAR_1->dirty) {
  VAR_1->dirty = 1;
  FUNC_0("inode %lu", VAR_0->i_ino);
 }
}
