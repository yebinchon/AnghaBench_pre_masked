
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sysdecode_abi { ____Placeholder_sysdecode_abi } sysdecode_abi ;


 int VAR_0 ;
 int VAR_1 ;






 int* VAR_2 ;
 int* VAR_3 ;
 unsigned int FUNC_0 (int*) ;

int
FUNC_1(enum sysdecode_abi VAR_4, int VAR_5)
{

 switch (VAR_4) {
 case 131:
 case 130:
  return (VAR_5);

 case 129:
 case 128:
  if (VAR_5 >= 0 && VAR_5 <= VAR_0)
   return (VAR_3[VAR_5]);
  break;

 case 133:
 case 132: {
  unsigned int VAR_6;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
   if (VAR_5 == VAR_2[VAR_6])
    return (VAR_6);
  }
  break;
 }
 default:
  break;
 }
 return (VAR_1);
}
