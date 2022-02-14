
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; int i_mode; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct inode *VAR_0)
{

 if (!FUNC_0(VAR_0->i_mode) || VAR_0->i_nlink > 2)
  VAR_0->i_nlink--;
}
