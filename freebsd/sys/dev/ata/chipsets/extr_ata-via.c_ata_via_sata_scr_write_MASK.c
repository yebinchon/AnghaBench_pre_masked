
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_5, int VAR_6, int VAR_7, u_int32_t VAR_8)
{
 device_t VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_0(VAR_5);
 VAR_6 = (VAR_6 == 1) ? 1 : 0;
 switch (VAR_7) {
 case 128:
  FUNC_1(VAR_9, 0xa8 + VAR_6 * 4, VAR_8, 4);
  break;
 case 129:
  VAR_10 = 0;
  if (VAR_8 & VAR_1)
   VAR_10 |= 0x01;
  if (VAR_8 & VAR_0)
   VAR_10 |= 0x02;
  if (VAR_8 & VAR_2)
   VAR_10 |= 0x04;
  if (VAR_8 & VAR_3)
   VAR_10 |= 0x08;
  FUNC_1(VAR_9, 0xa4 + VAR_6, VAR_10, 1);
  break;
 default:
  return (VAR_4);
 }
 return (0);
}
