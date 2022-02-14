
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned char uint16_t ;
typedef int ldns_signing_algorithm ;
typedef int ldns_algorithm ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 unsigned char FUNC_1 (unsigned char) ;

size_t
FUNC_2(const unsigned char* VAR_0,
                            const size_t VAR_1,
                            const ldns_algorithm VAR_2)
{

 uint8_t VAR_3;


 uint16_t VAR_4;
 uint16_t VAR_5;

 switch ((ldns_signing_algorithm)VAR_2) {
 case 140:
 case 139:
  if (VAR_1 > 0) {
   VAR_3 = VAR_0[0];
   return (64 + VAR_3*8)*8;
  } else {
   return 0;
  }
  break;
 case 132:
 case 131:
 case 130:




  if (VAR_1 > 0) {
   if (VAR_0[0] == 0) {

    if (VAR_1 > 3) {
     FUNC_0(&VAR_5, VAR_0 + 1, 2);
     VAR_4 = FUNC_1(VAR_5);
     return (VAR_1 - VAR_4 - 3)*8;
    } else {
     return 0;
    }
   } else {
    VAR_4 = VAR_0[0];
    return (VAR_1-VAR_4-1)*8;
   }
  } else {
   return 0;
  }
  break;
 case 133:
  return VAR_1;
 default:
  return 0;
 }
}
