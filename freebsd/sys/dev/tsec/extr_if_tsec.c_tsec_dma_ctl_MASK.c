
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tsec_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct tsec_softc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct tsec_softc*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_4(struct tsec_softc *VAR_14, int VAR_15)
{
 device_t VAR_16;
 uint32_t VAR_17, VAR_18;

 VAR_16 = VAR_14->dev;

 VAR_17 = FUNC_1(VAR_14, VAR_10);

 switch (VAR_15) {
 case 0:

  FUNC_4(VAR_14, 1000);


  VAR_17 |= (VAR_2 | VAR_3);
  break;
 case 1000:
 case 1:

  VAR_17 |= (VAR_5 | VAR_4 |
      VAR_1 | VAR_0);


  VAR_17 &= ~(VAR_2 | VAR_3);
  break;
 default:
  FUNC_3(VAR_16, "tsec_dma_ctl(): unknown state value: %d\n",
      VAR_15);
 }

 FUNC_2(VAR_14, VAR_10, VAR_17);

 switch (VAR_15) {
 case 0:

  VAR_18 = VAR_9;
  while (--VAR_18 && (!(FUNC_1(VAR_14, VAR_11) &
      (VAR_6 | VAR_7))))
   FUNC_0(VAR_8);

  if (VAR_18 == 0)
   FUNC_3(VAR_16, "tsec_dma_ctl(): timeout!\n");
  break;
 case 1:

  FUNC_2(VAR_14, VAR_12, VAR_13);
 }
}
