
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

int
FUNC_3(void)
{
 uint16_t VAR_5[VAR_1/sizeof(uint16_t)];
 uint8_t *VAR_6 = (uint8_t *)&VAR_5;
 uint8_t VAR_7;


 if (!(FUNC_0() & VAR_0)) {
  FUNC_2("SD Card: not present\n");
  return (0);
 }


 FUNC_1(VAR_5);
 VAR_7 = VAR_6[VAR_2];
 VAR_7 &= VAR_3;
 VAR_7 >>= VAR_4;
 if (VAR_7 != 0) {
  FUNC_2("SD Card: unrecognised csd %u\n", VAR_7);
  return (0);
 }

 return (1);
}
