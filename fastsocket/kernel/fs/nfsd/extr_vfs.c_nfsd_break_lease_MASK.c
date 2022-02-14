
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2)
{
 if (!FUNC_0(VAR_2->i_mode))
  return 0;
 return FUNC_1(VAR_2, VAR_1 | VAR_0);
}
