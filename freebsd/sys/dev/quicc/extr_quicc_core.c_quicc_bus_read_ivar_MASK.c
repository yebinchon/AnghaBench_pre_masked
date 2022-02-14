
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct quicc_softc {uintptr_t sc_clock; int sc_rres; } ;
struct quicc_device {uintptr_t qd_devtype; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;



 int VAR_1 ;
 struct quicc_device* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct quicc_softc* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t *VAR_5)
{
 struct quicc_device *VAR_6;
 struct quicc_softc *VAR_7;
 uint32_t VAR_8;

 if (FUNC_1(VAR_3) != VAR_2)
  return (VAR_0);

 VAR_7 = FUNC_2(VAR_2);
 VAR_6 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 129:
  *VAR_5 = VAR_7->sc_clock;
  break;
 case 130:
  VAR_8 = FUNC_3(VAR_7->sc_rres, VAR_1) & 3;
  *VAR_5 = VAR_7->sc_clock / ((1 << (VAR_8 + 1)) << VAR_8);
  break;
 case 128:
  *VAR_5 = VAR_6->qd_devtype;
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
