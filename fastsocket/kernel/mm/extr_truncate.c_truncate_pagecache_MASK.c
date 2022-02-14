
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct address_space*,int ) ;
 int FUNC_2 (struct address_space*,int ,int ,int) ;

void FUNC_3(struct inode *VAR_1, loff_t VAR_2, loff_t VAR_3)
{
 struct address_space *VAR_4 = VAR_1->i_mapping;
 loff_t VAR_5 = FUNC_0(VAR_3, VAR_0);
 FUNC_2(VAR_4, VAR_5, 0, 1);
 FUNC_1(VAR_4, VAR_3);
 FUNC_2(VAR_4, VAR_5, 0, 1);
}
