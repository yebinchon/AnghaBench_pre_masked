
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_fop; } ;


 int VAR_0 ;

bool FUNC_0(struct inode *VAR_1)
{
 return VAR_1->i_fop == &VAR_0;
}
