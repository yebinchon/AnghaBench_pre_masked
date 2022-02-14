
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366rb_softc {scalar_t__ chip_type; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtl8366rb_softc*,int) ;
 struct rtl8366rb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct rtl8366rb_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4, sizeof(*VAR_4));
 if (FUNC_3(VAR_3) != 0)
  return (VAR_1);
 if (VAR_4->chip_type == VAR_2)
  FUNC_2(VAR_3, "RTL8366RB Ethernet Switch Controller");
 else
  FUNC_2(VAR_3, "RTL8366SR Ethernet Switch Controller");
 return (VAR_0);
}
