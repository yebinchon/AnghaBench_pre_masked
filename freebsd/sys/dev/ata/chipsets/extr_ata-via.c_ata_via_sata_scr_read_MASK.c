
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int32_t ;
typedef int device_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_11, int VAR_12, int VAR_13, u_int32_t *VAR_14)
{
 device_t VAR_15;
 uint32_t VAR_16;

 VAR_15 = FUNC_0(VAR_11);
 VAR_12 = (VAR_12 == 1) ? 1 : 0;
 switch (VAR_13) {
 case 128:
  VAR_16 = FUNC_1(VAR_15, 0xa0 + VAR_12, 1);
  *VAR_14 = VAR_16 & 0x03;
  if (*VAR_14 != VAR_4) {
   if (VAR_16 & 0x04)
    *VAR_14 |= VAR_6;
   else if (VAR_16 & 0x08)
    *VAR_14 |= VAR_7;
   else
    *VAR_14 |= VAR_5;
   if (VAR_16 & 0x10)
    *VAR_14 |= VAR_9;
   else
    *VAR_14 |= VAR_8;
  }
  break;
 case 129:
  *VAR_14 = FUNC_1(VAR_15, 0xa8 + VAR_12 * 4, 4);
  break;
 case 130:
  VAR_16 = FUNC_1(VAR_15, 0xa4 + VAR_12, 1);
  *VAR_14 = 0;
  if (VAR_16 & 0x01)
   *VAR_14 |= VAR_1;
  if (VAR_16 & 0x02)
   *VAR_14 |= VAR_0;
  if (VAR_16 & 0x04)
   *VAR_14 |= VAR_2;
  if (VAR_16 & 0x08)
   *VAR_14 |= VAR_3;
  break;
 default:
  return (VAR_10);
 }
 return (0);
}
