
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; } ;
typedef int loff_t ;


 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*,int ,int ) ;

void FUNC_2(struct inode *VAR_0, loff_t VAR_1)
{
 loff_t VAR_2;

 VAR_2 = VAR_0->i_size;
 FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_2, VAR_1);
}
