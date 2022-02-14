
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366rb_softc {scalar_t__ chip_type; } ;
struct iicbus_ivar {int addr; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct iicbus_ivar* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct rtl8366rb_softc*) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 struct rtl8366rb_softc* FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7, int VAR_8, int VAR_9)
{
 struct rtl8366rb_softc *VAR_10;
 int VAR_11, VAR_12;
 device_t VAR_13;
 struct iicbus_ivar *VAR_14;
 int VAR_15;

 VAR_10 = FUNC_5(VAR_7);

 VAR_13 = FUNC_4(VAR_7);
 VAR_14 = FUNC_1(VAR_7);
 VAR_15 = VAR_14->addr;

 FUNC_3((struct rtl8366rb_softc *)FUNC_5(VAR_7));

 if (VAR_10->chip_type == VAR_1) {

  for (int VAR_16=3; VAR_16--; )
   FUNC_2(FUNC_4(FUNC_4(VAR_7)));
 }




 for (VAR_12 = VAR_2; VAR_12--; ) {
  VAR_11 = FUNC_6(VAR_13, VAR_15 | VAR_8, VAR_4);
  if (VAR_11 != VAR_0)
   break;
  if (VAR_9 == VAR_5) {
   FUNC_0(VAR_6);
   FUNC_7("smi_select", VAR_3);
  } else
   break;
 }
 return (VAR_11);
}
