
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fp16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

fp16_t
FUNC_4(fp16_t VAR_0)
{
 fp16_t VAR_1, VAR_2;
 signed int VAR_3;


 if (VAR_0 == 0)
  return (0);


 VAR_3 = FUNC_0(VAR_0) - 1;
 if (VAR_3 >= 16) {
  VAR_1 = VAR_0 >> (VAR_3 - 16) / 2;
 } else {




  return (0);

 }
 while (VAR_1 > 0) {

  VAR_2 = FUNC_1(FUNC_3(FUNC_2(VAR_1, VAR_1), VAR_0), VAR_1 * 2);
  if (VAR_2 == 0)
   break;
  VAR_1 = FUNC_3(VAR_1, VAR_2);
 }
 return (VAR_1);
}
