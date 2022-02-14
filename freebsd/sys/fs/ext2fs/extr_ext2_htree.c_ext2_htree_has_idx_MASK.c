
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_flag; int i_e2fs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;

int
FUNC_1(struct inode *VAR_2)
{
 if (FUNC_0(VAR_2->i_e2fs, VAR_0) &&
     VAR_2->i_flag & VAR_1)
  return (1);
 else
  return (0);
}
