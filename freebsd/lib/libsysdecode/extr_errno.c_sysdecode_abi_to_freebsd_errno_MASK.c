
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sysdecode_abi { ____Placeholder_sysdecode_abi } sysdecode_abi ;


 int VAR_0 ;






 int* VAR_1 ;
 int* VAR_2 ;
 unsigned int FUNC_0 (int*) ;

int
FUNC_1(enum sysdecode_abi VAR_3, int VAR_4)
{

 switch (VAR_3) {
 case 131:
 case 130:
  return (VAR_4);

 case 129:
 case 128: {
  unsigned int VAR_5;





  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
   if (VAR_4 == VAR_2[VAR_5])
    return (VAR_5);
  }
  break;
 }

 case 133:
 case 132:
  if (VAR_4 >= 0 &&
      (unsigned int)VAR_4 < FUNC_0(VAR_1))
   return (VAR_1[VAR_4]);
  break;
 default:
  break;
 }
 return (VAR_0);
}
