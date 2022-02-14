
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; int i_e2fs; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_3)
{

 VAR_3->i_nlink++;

 if (FUNC_1(VAR_3->i_mode) &&
     FUNC_0(VAR_3->i_e2fs, VAR_1) &&
     VAR_3->i_nlink > 1) {
  if (VAR_3->i_nlink >= VAR_2 || VAR_3->i_nlink == 2)
   VAR_3->i_nlink = 1;
 } else if (VAR_3->i_nlink > VAR_2) {
  VAR_3->i_nlink--;
  return (VAR_0);
 }

 return (0);
}
