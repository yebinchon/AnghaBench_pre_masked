
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint16_t ;
struct rtl8366rb_softc {int chip_type; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*,char) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 struct rtl8366rb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int,int *) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int,int*,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_13)
{
 struct rtl8366rb_softc *VAR_14;
 device_t VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 uint16_t VAR_20;
 char VAR_21[2];
 int VAR_22;

 VAR_14 = FUNC_3(VAR_13);

 VAR_15 = FUNC_2(VAR_13);
 VAR_16 = FUNC_2(VAR_15);

 for (VAR_18 = 0; VAR_18 < 2; ++VAR_18) {
  FUNC_7(VAR_15, VAR_1, VAR_10, ((void*)0));
  for (VAR_19=3; VAR_19--; ) {
   FUNC_1(VAR_16);




  }
  VAR_17 = FUNC_6(VAR_15, VAR_13, VAR_3);
  if (VAR_17 != 0)
   goto out;
  VAR_17 = FUNC_8(VAR_15, VAR_10 | VAR_11, VAR_12);
  if (VAR_17 != 0)
   goto out;
  if (VAR_18 == 0) {
   VAR_21[0] = VAR_5 & 0xff;
   VAR_21[1] = (VAR_5 >> 8) & 0xff;
  } else {
   VAR_21[0] = VAR_8 & 0xff;
   VAR_21[1] = (VAR_8 >> 8) & 0xff;
  }
  VAR_17 = FUNC_10(VAR_15, VAR_21, 2, &VAR_22, VAR_12);
  if (VAR_17 != 0)
   goto out;
  VAR_17 = FUNC_4(VAR_15, VAR_21, 2, &VAR_22, VAR_2, 0);
  if (VAR_17 != 0)
   goto out;
  VAR_20 = ((VAR_21[1] & 0xff) << 8) | (VAR_21[0] & 0xff);
  if (VAR_18 == 0 && VAR_20 == VAR_6) {
   FUNC_0(VAR_13, "chip id 0x%04x\n", VAR_20);
   VAR_14->chip_type = VAR_4;
   VAR_17 = 0;
   break;
  }
  if (VAR_18 == 1 && VAR_20 == VAR_9) {
   FUNC_0(VAR_13, "chip id 0x%04x\n", VAR_20);
   VAR_14->chip_type = VAR_7;
   VAR_17 = 0;
   break;
  }
  if (VAR_18 == 0) {
   FUNC_9(VAR_15);
   FUNC_5(VAR_15, VAR_13);
  }
 }
 if (VAR_18 == 2)
  VAR_17 = VAR_0;
out:
 FUNC_9(VAR_15);
 FUNC_5(VAR_15, VAR_13);
 return (VAR_17 == 0 ? 0 : VAR_0);
}
