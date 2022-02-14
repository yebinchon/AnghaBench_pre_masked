
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int,int) ;
 int FUNC_1 (struct inode*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct inode*,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, loff_t VAR_2, loff_t VAR_3)
{
 int VAR_4;



 if (VAR_3 == 0) {
  if (FUNC_2(VAR_2 >> 32))
   return -VAR_0;

  return FUNC_1(VAR_1, VAR_2);
 }


 if (VAR_2 < VAR_3) {
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_4 < 0)
   return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_1, VAR_2);

 return VAR_4;
}
