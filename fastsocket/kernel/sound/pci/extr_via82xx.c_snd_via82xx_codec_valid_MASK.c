
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via82xx {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct via82xx*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct via82xx *VAR_4, int VAR_5)
{
 unsigned int VAR_6 = 1000;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9 = !VAR_5 ? VAR_2 :
      VAR_3;

 while (VAR_6-- > 0) {
  VAR_7 = FUNC_0(VAR_4);
  VAR_8 = VAR_7 & (VAR_1 | VAR_9);
  if (VAR_8 == VAR_9)
   return VAR_7 & 0xffff;
  FUNC_1(1);
 }
 return -VAR_0;
}
