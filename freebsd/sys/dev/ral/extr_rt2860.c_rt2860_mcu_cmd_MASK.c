
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rt2860_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct rt2860_softc*) ;
 int FUNC_3 (struct rt2860_softc*,int ) ;
 int FUNC_4 (struct rt2860_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_5(struct rt2860_softc *VAR_8, uint8_t VAR_9, uint16_t VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 uint32_t VAR_14;
 uint8_t VAR_15;

 for (VAR_13 = 0; VAR_13 < 100; VAR_13++) {
  if (!(FUNC_3(VAR_8, VAR_3) & VAR_2))
   break;
  FUNC_0(2);
 }
 if (VAR_13 == 100)
  return VAR_0;

 VAR_15 = VAR_11 ? VAR_9 : VAR_7;
 FUNC_4(VAR_8, VAR_3, VAR_2 | VAR_15 << 16 | VAR_10);
 FUNC_2(VAR_8);
 FUNC_4(VAR_8, VAR_6, VAR_9);

 if (!VAR_11)
  return 0;

 for (VAR_13 = 0; VAR_13 < 200; VAR_13++) {
  VAR_14 = FUNC_3(VAR_8, VAR_4);

  for (VAR_12 = 0; VAR_12 < 4; VAR_12++, VAR_14 >>= 8)
   if ((VAR_14 & 0xff) == VAR_15)
    break;
  if (VAR_12 < 4)
   break;
  FUNC_0(100);
 }
 if (VAR_13 == 200) {

  FUNC_4(VAR_8, VAR_5, 0xffffffff);
  FUNC_4(VAR_8, VAR_4, 0xffffffff);
  return VAR_1;
 }

 VAR_14 = FUNC_3(VAR_8, VAR_5);
 VAR_14 = (VAR_14 >> (VAR_12 * 8)) & 0xff;
 FUNC_1(("MCU command=0x%02x slot=%d status=0x%02x\n",
     VAR_9, VAR_12, VAR_14));

 FUNC_4(VAR_8, VAR_5, 0xffffffff);
 FUNC_4(VAR_8, VAR_4, 0xffffffff);
 return (VAR_14 == 1) ? 0 : VAR_0;
}
