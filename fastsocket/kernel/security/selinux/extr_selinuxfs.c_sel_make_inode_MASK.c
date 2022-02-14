
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int i_ctime; int i_mtime; int i_atime; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct super_block*) ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3) {
  VAR_3->i_mode = VAR_2;
  VAR_3->i_atime = VAR_3->i_mtime = VAR_3->i_ctime = VAR_0;
 }
 return VAR_3;
}
