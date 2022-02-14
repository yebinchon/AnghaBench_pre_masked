
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; int i_mode; int i_gid; int i_uid; int i_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_6(struct inode *VAR_2, int VAR_3)
{
 struct inode *VAR_4;

 VAR_4 = FUNC_4(VAR_2->i_sb);
 if (!VAR_4) {
  FUNC_3(VAR_0, "new_inode failed!\n");
  return ((void*)0);
 }




 if (FUNC_0(VAR_3))
  VAR_4->i_nlink = 2;
 else
  VAR_4->i_nlink = 1;
 VAR_4->i_uid = FUNC_2();
 if (VAR_2->i_mode & VAR_1) {
  VAR_4->i_gid = VAR_2->i_gid;
  if (FUNC_0(VAR_3))
   VAR_3 |= VAR_1;
 } else
  VAR_4->i_gid = FUNC_1();
 VAR_4->i_mode = VAR_3;
 FUNC_5(VAR_4);
 return VAR_4;
}
