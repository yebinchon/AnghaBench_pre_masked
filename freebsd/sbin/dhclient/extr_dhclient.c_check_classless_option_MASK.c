
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int in_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;

int
FUNC_2(unsigned char *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 unsigned char VAR_3;
 in_addr_t VAR_4, VAR_5;

 if (VAR_1 < 5) {
  FUNC_1("Too small length: %d", VAR_1);
  return (0);
 }
 while(VAR_2 < VAR_1) {
  VAR_3 = VAR_0[VAR_2++];
  if (VAR_3 == 0) {
   VAR_2 += 4;
   continue;
  } else if (VAR_3 < 9) {
   VAR_4 = (in_addr_t)(VAR_0[VAR_2] << 24);
   VAR_2 += 1;
  } else if (VAR_3 < 17) {
   VAR_4 = (in_addr_t)(VAR_0[VAR_2] << 24) +
    (in_addr_t)(VAR_0[VAR_2 + 1] << 16);
   VAR_2 += 2;
  } else if (VAR_3 < 25) {
   VAR_4 = (in_addr_t)(VAR_0[VAR_2] << 24) +
    (in_addr_t)(VAR_0[VAR_2 + 1] << 16) +
    (in_addr_t)(VAR_0[VAR_2 + 2] << 8);
   VAR_2 += 3;
  } else if (VAR_3 < 33) {
   VAR_4 = (in_addr_t)(VAR_0[VAR_2] << 24) +
    (in_addr_t)(VAR_0[VAR_2 + 1] << 16) +
    (in_addr_t)(VAR_0[VAR_2 + 2] << 8) +
    VAR_0[VAR_2 + 3];
   VAR_2 += 4;
  } else {
   FUNC_1("Incorrect subnet width: %d", VAR_3);
   return (0);
  }
  VAR_5 = (in_addr_t)(~0) << (32 - VAR_3);
  VAR_4 = FUNC_0(VAR_4);
  VAR_5 = FUNC_0(VAR_5);
  if ((VAR_4 & VAR_5) != VAR_4) {
   VAR_4 &= VAR_5;
   VAR_0[VAR_2 - 1] = (unsigned char)(
    (VAR_4 >> (((32 - VAR_3)/8)*8)) & 0xFF);
  }
  VAR_2 += 4;
 }
 if (VAR_2 > VAR_1) {
  FUNC_1("Incorrect data length: %d (must be %d)", VAR_1, VAR_2);
  return (0);
 }
 return (1);
}
