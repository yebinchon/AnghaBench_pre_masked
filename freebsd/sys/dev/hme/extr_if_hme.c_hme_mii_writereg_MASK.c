
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hme_softc {int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hme_softc*,int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct hme_softc*,int ) ;
 int FUNC_3 (struct hme_softc*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct hme_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

int
FUNC_6(device_t VAR_15, int VAR_16, int VAR_17, int VAR_18)
{
 struct hme_softc *VAR_19;
 int VAR_20;
 u_int32_t VAR_21;

 VAR_19 = FUNC_4(VAR_15);

 VAR_21 = FUNC_2(VAR_19, VAR_2);
 if (VAR_16 == VAR_12)
  VAR_21 |= VAR_4;
 else
  VAR_21 &= ~VAR_4;
 FUNC_3(VAR_19, VAR_2, VAR_21);


 VAR_21 = (VAR_13 << VAR_9) |
     VAR_11 |
     (VAR_14 << VAR_6) |
     (VAR_16 << VAR_7) |
     (VAR_17 << VAR_8) |
     (VAR_18 & VAR_5);

 FUNC_3(VAR_19, VAR_3, VAR_21);
 FUNC_1(VAR_19, VAR_3, 4,
     VAR_0 | VAR_1);
 for (VAR_20 = 0; VAR_20 < 100; VAR_20++) {
  FUNC_0(1);
  VAR_21 = FUNC_2(VAR_19, VAR_3);
  if (VAR_21 & VAR_10)
   return (1);
 }

 FUNC_5(VAR_19->sc_dev, "mii_write timeout\n");
 return (0);
}
