
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtl8366rb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rtl8366rb_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct rtl8366rb_softc*,int) ;
 int FUNC_3 (struct rtl8366rb_softc*,int,int*,int) ;
 int FUNC_4 (struct rtl8366rb_softc*,int) ;
 int FUNC_5 (struct rtl8366rb_softc*,int,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, uint16_t VAR_3, uint16_t VAR_4, uint16_t VAR_5, int VAR_6)
{
 struct rtl8366rb_softc *VAR_7;
 int VAR_8;
 uint16_t VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_2);

 VAR_8 = FUNC_2(VAR_7, VAR_6);
 if (VAR_8 != 0)
  return (VAR_0);
 if (VAR_8 == 0) {
  VAR_8 = FUNC_3(VAR_7, VAR_3, &VAR_9, VAR_6);
  if (VAR_8 == 0) {
   VAR_10 = VAR_9 & ~VAR_4;
   VAR_10 |= VAR_5 & VAR_4;
   if (VAR_10 != VAR_9)
    VAR_8 = FUNC_5(VAR_7, VAR_3, VAR_10, VAR_6);
  }
 }
 FUNC_4(VAR_7, VAR_6);
 FUNC_0(VAR_2, VAR_8, "smi_rmw()=%d: addr=%04x\n", VAR_3);
 return (VAR_8 == 0 ? 0 : VAR_1);
}
