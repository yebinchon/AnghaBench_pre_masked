
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtl8366rb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct rtl8366rb_softc* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int VAR_10 ;
 int FUNC_6 (struct rtl8366rb_softc*,int) ;
 int FUNC_7 (struct rtl8366rb_softc*,int ,int*,int) ;
 int FUNC_8 (struct rtl8366rb_softc*,int) ;
 int FUNC_9 (struct rtl8366rb_softc*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_11, int VAR_12, int VAR_13)
{
 struct rtl8366rb_softc *VAR_14;
 uint16_t VAR_15;
 int VAR_16, VAR_17, VAR_18;

 VAR_14 = FUNC_4(VAR_11);

 VAR_15 = 0;

 if (VAR_12 < 0 || VAR_12 >= VAR_2)
  return (VAR_1);
 if (VAR_13 < 0 || VAR_13 >= VAR_3)
  return (VAR_1);
 VAR_18 = VAR_9;
 VAR_16 = FUNC_6(VAR_14, VAR_18);
 if (VAR_16 != 0)
  return (VAR_0);
 for (VAR_17 = VAR_7; VAR_17--; ) {
  VAR_16 = FUNC_9(VAR_14, VAR_4, VAR_5, VAR_18);
  if (VAR_16 == 0)
   VAR_16 = FUNC_9(VAR_14, FUNC_3(VAR_12, 0, VAR_13), 0, VAR_18);
  if (VAR_16 == 0) {
   VAR_16 = FUNC_7(VAR_14, VAR_6, &VAR_15, VAR_18);
   break;
  }
  FUNC_0(VAR_10);
  FUNC_2(VAR_11, "rtl_readphy(): chip not responsive, retrying %d more times\n", VAR_17);
  FUNC_5("rtl_readphy", VAR_8);
 }
 FUNC_8(VAR_14, VAR_18);
 FUNC_1(VAR_11, VAR_16, "rtl_readphy()=%d: phy=%d.%02x\n", VAR_12, VAR_13);
 return (VAR_15);
}
