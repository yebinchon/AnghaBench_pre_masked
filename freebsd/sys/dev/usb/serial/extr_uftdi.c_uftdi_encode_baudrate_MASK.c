
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct uftdi_softc {int sc_devflags; scalar_t__ sc_devtype; } ;
struct uftdi_param_config {int baud_hibits; void* baud_lobits; } ;
typedef int speed_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(struct uftdi_softc *VAR_4, speed_t VAR_5,
 struct uftdi_param_config *VAR_6)
{
 static const uint8_t VAR_7[8] = {0, 3, 2, 4, 1, 5, 6, 7};
 static const uint8_t VAR_8[16] = {
  0, 1, 0, 1, 0, -1, 2, 1,
  0, -1, -2, -3, 4, 3, 2, 1,
 };
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;





 if ((VAR_4->sc_devflags & VAR_1) && VAR_5 >= 1200) {
  VAR_9 = 12000000;
  VAR_11 = (1 << 17);
 } else {
  VAR_9 = 3000000;
  VAR_11 = 0;
 }





 if (VAR_5 < (VAR_9 >> 14) || VAR_5 > VAR_9)
  return (VAR_3);
 VAR_10 = (VAR_9 << 4) / VAR_5;
 if ((VAR_10 & 0xf) == 1)
  VAR_10 &= 0xfffffff8;
 else if (VAR_4->sc_devtype == VAR_2)
  VAR_10 += VAR_8[VAR_10 & 0x0f];
 else
  VAR_10 += 1;
 VAR_10 >>= 1;





 VAR_13 = (VAR_9 << 3) / VAR_10;
 if (!FUNC_0(VAR_13, VAR_5))
  return (VAR_3);
 VAR_12 = VAR_10 & 0x07;
 VAR_10 >>= 3;
 if (VAR_10 == 1) {
  if (VAR_12 == 0)
   VAR_10 = 0;
  else
   VAR_12 = 0;
 }
 VAR_10 |= (VAR_7[VAR_12] << 14) | VAR_11;

 VAR_6->baud_lobits = (uint16_t)VAR_10;
 VAR_6->baud_hibits = (uint16_t)(VAR_10 >> 16);





 if (VAR_4->sc_devflags & VAR_0) {
  VAR_6->baud_hibits <<= 8;
 }

 return (0);
}
