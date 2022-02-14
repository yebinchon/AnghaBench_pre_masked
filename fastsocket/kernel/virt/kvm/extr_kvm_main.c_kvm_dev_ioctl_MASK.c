
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;







 long VAR_3 ;
 long FUNC_0 (struct file*,unsigned int,unsigned long) ;
 long FUNC_1 (unsigned long) ;
 long FUNC_2 () ;

__attribute__((used)) static long FUNC_3(struct file *VAR_4,
     unsigned int VAR_5, unsigned long VAR_6)
{
 long VAR_7 = -VAR_0;

 switch (VAR_5) {
 case 132:
  VAR_7 = -VAR_0;
  if (VAR_6)
   goto out;
  VAR_7 = VAR_2;
  break;
 case 133:
  VAR_7 = -VAR_0;
  if (VAR_6)
   goto out;
  VAR_7 = FUNC_2();
  break;
 case 134:
  VAR_7 = FUNC_1(VAR_6);
  break;
 case 131:
  VAR_7 = -VAR_0;
  if (VAR_6)
   goto out;
  VAR_7 = VAR_3;






  break;
 case 129:
 case 128:
 case 130:
  VAR_7 = -VAR_1;
  break;
 default:
  return FUNC_0(VAR_4, VAR_5, VAR_6);
 }
out:
 return VAR_7;
}
