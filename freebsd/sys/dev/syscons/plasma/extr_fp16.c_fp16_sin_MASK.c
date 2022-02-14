
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fp16_t ;


 int VAR_0 ;
 int* VAR_1 ;

fp16_t
FUNC_0(fp16_t VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = 1024 * (VAR_2 % VAR_0) / VAR_0;
 switch (VAR_3 / 256) {
 case 0:
  return (VAR_1[VAR_3 % 256]);
 case 1:
  return (VAR_1[255 - VAR_3 % 256]);
 case 2:
  return (-VAR_1[VAR_3 % 256]);
 case 3:
  return (-VAR_1[255 - VAR_3 % 256]);
 default:

  return (0);
 }
}
