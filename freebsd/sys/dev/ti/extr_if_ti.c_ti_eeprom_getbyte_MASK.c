
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ti_softc {int ti_dev; } ;


 int FUNC_0 (struct ti_softc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ti_softc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ti_softc*,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (struct ti_softc*,int) ;

__attribute__((used)) static uint8_t
FUNC_6(struct ti_softc *VAR_8, int VAR_9, uint8_t *VAR_10)
{
 int VAR_11;
 uint8_t VAR_12 = 0;

 VAR_2;




 if (FUNC_5(VAR_8, VAR_1)) {
  FUNC_4(VAR_8->ti_dev,
      "failed to send write command, status: %x\n",
      FUNC_0(VAR_8, VAR_4));
  return (1);
 }




 if (FUNC_5(VAR_8, (VAR_9 >> 8) & 0xFF)) {
  FUNC_4(VAR_8->ti_dev, "failed to send address, status: %x\n",
      FUNC_0(VAR_8, VAR_4));
  return (1);
 }



 if (FUNC_5(VAR_8, VAR_9 & 0xFF)) {
  FUNC_4(VAR_8->ti_dev, "failed to send address, status: %x\n",
      FUNC_0(VAR_8, VAR_4));
  return (1);
 }

 VAR_3;
 VAR_2;



 if (FUNC_5(VAR_8, VAR_0)) {
  FUNC_4(VAR_8->ti_dev,
      "failed to send read command, status: %x\n",
      FUNC_0(VAR_8, VAR_4));
  return (1);
 }




 FUNC_2(VAR_8, VAR_4, VAR_7);
 for (VAR_11 = 0x80; VAR_11; VAR_11 >>= 1) {
  FUNC_3(VAR_8, VAR_4, VAR_5);
  FUNC_1(1);
  if (FUNC_0(VAR_8, VAR_4) & VAR_6)
   VAR_12 |= VAR_11;
  FUNC_2(VAR_8, VAR_4, VAR_5);
  FUNC_1(1);
 }

 VAR_3;





 *VAR_10 = VAR_12;

 return (0);
}
