
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicoc_softc {int reg_shift; int i2cfreq; int clockfreq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iicoc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct iicoc_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if ((FUNC_3(VAR_4) == 0x184e) &&
     (FUNC_2(VAR_4) == 0x1011)) {
  VAR_5->clockfreq = VAR_2;
  VAR_5->i2cfreq = VAR_3;
  VAR_5->reg_shift = 2;
  FUNC_1(VAR_4, "Netlogic XLP I2C Controller");
  return (VAR_0);
 }
 return (VAR_1);
}
