
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct ahc_softc {int dev_softc; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 scalar_t__ FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 int FUNC_4 (struct ahc_softc*,int ,int) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ,scalar_t__,int,int) ;

int
FUNC_7(struct ahc_softc *VAR_16)
{
 int VAR_17;
 u_int VAR_18;
 uint32_t VAR_19;
 uint8_t VAR_20;

 VAR_17 = VAR_4;





 VAR_19 = FUNC_5(VAR_16->dev_softc, VAR_9, 2);
 FUNC_6(VAR_16->dev_softc, VAR_9,
        VAR_19 & ~VAR_8, 2);
 VAR_20 = FUNC_0(VAR_16, VAR_6);

 if (VAR_20 == 0xFF)
  goto fail;

 if ((VAR_20 & VAR_1) != 0) {





  VAR_16->flags |= VAR_0;
 }
 VAR_20 &= ~VAR_1;
 FUNC_3(VAR_16, VAR_6, VAR_20|VAR_7);
 while (FUNC_2(VAR_16) == 0)
  ;


 VAR_18 = FUNC_5(VAR_16->dev_softc,
          VAR_10 + 1, 1);
 FUNC_6(VAR_16->dev_softc, VAR_10 + 1,
        VAR_18, 1);
 FUNC_3(VAR_16, VAR_2, VAR_3);

 FUNC_3(VAR_16, VAR_14, VAR_11);
 FUNC_3(VAR_16, VAR_12, 0);
 FUNC_4(VAR_16, VAR_13, 0x5aa555aa);
 if (FUNC_1(VAR_16, VAR_13) != 0x5aa555aa)
  goto fail;

 VAR_18 = FUNC_5(VAR_16->dev_softc,
          VAR_10 + 1, 1);
 if ((VAR_18 & VAR_15) != 0)
  goto fail;

 VAR_17 = 0;

fail:

 VAR_18 = FUNC_5(VAR_16->dev_softc,
          VAR_10 + 1, 1);
 FUNC_6(VAR_16->dev_softc, VAR_10 + 1,
        VAR_18, 1);
 FUNC_3(VAR_16, VAR_2, VAR_3);
 FUNC_3(VAR_16, VAR_14, VAR_11|VAR_5);
 FUNC_6(VAR_16->dev_softc, VAR_9, VAR_19, 2);
 return (VAR_17);
}
