
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int boolean_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
int FUNC_3(uint8_t *VAR_2, boolean_t *VAR_3, uint64_t *VAR_4,
    uint32_t *VAR_5) {

 switch (VAR_2[0]) {
 case 128:
  *VAR_3 = 1;
 case 132:
  *VAR_4 = (uint64_t)(((VAR_2[1] & 0x1F) << 16) |
    (VAR_2[2] << 8) | VAR_2[3]);
  *VAR_5 = (uint32_t)VAR_2[4];
  if (*VAR_5 == 0)
   *VAR_5 = 256;
  break;
 case 131:
  *VAR_3 = 1;
 case 135:
  *VAR_4 = (uint64_t)FUNC_1(&VAR_2[2]);
  *VAR_5 = (uint32_t)FUNC_0(&VAR_2[7]);
  break;
 case 130:
  *VAR_3 = 1;
 case 134:
  *VAR_4 = (uint64_t)FUNC_1(&VAR_2[2]);
  *VAR_5 = FUNC_1(&VAR_2[6]);
  break;
 case 129:
  *VAR_3 = 1;
 case 133:
  *VAR_4 = FUNC_2(&VAR_2[2]);
  *VAR_5 = FUNC_1(&VAR_2[10]);
  break;
 default:

  return VAR_0;
 }
 return VAR_1;
}
