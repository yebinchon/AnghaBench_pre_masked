
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct address_space*,scalar_t__,scalar_t__,int ) ;

void FUNC_4(struct inode *VAR_1, loff_t VAR_2, loff_t VAR_3)
{
 struct address_space *VAR_4 = VAR_1->i_mapping;
 loff_t VAR_5 = FUNC_1(VAR_2, VAR_0);
 loff_t VAR_6 = FUNC_0(1 + VAR_3, VAR_0) - 1;
 if ((u64)VAR_6 > (u64)VAR_5)
  FUNC_3(VAR_4, VAR_5,
        1 + VAR_6 - VAR_5, 0);
 FUNC_2(VAR_4, VAR_2, VAR_3);
}
