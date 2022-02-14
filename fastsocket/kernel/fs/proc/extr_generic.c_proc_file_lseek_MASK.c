
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_pos; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static loff_t
FUNC_0(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 loff_t VAR_5 = -VAR_0;
 switch (VAR_4) {
 case 1:
  VAR_3 += VAR_2->f_pos;

 case 0:
  if (VAR_3 < 0 || VAR_3 > VAR_1)
   break;
  VAR_2->f_pos = VAR_5 = VAR_3;
 }
 return VAR_5;
}
