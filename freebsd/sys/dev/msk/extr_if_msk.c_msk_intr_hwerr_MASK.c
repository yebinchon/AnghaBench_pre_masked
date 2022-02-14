
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct msk_softc {int msk_intrhwemask; int ** msk_if; int msk_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msk_softc*,scalar_t__) ;
 int FUNC_1 (struct msk_softc*,scalar_t__,int) ;
 int FUNC_2 (struct msk_softc*,int ) ;
 int FUNC_3 (struct msk_softc*,int ,int ) ;
 int FUNC_4 (struct msk_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_9(struct msk_softc *VAR_27)
{
 uint32_t VAR_28;
 uint32_t VAR_29[4];

 VAR_28 = FUNC_2(VAR_27, VAR_1);

 if ((VAR_28 & VAR_26) != 0)
  FUNC_3(VAR_27, VAR_3, VAR_4);
 if ((VAR_28 & VAR_25) != 0) {







  FUNC_5(VAR_27->msk_dev,
      "PCI Express protocol violation error\n");
 }

 if ((VAR_28 & (VAR_23 | VAR_22)) != 0) {
  uint16_t VAR_30;

  if ((VAR_28 & VAR_23) != 0)
   FUNC_5(VAR_27->msk_dev,
       "unexpected IRQ Status error\n");
  else
   FUNC_5(VAR_27->msk_dev,
       "unexpected IRQ Master error\n");

  VAR_30 = FUNC_7(VAR_27->msk_dev, VAR_12, 2);
  FUNC_3(VAR_27, VAR_2, VAR_19);
  FUNC_8(VAR_27->msk_dev, VAR_12, VAR_30 |
      VAR_8 | VAR_11 | VAR_9 |
      VAR_10 | VAR_7, 2);
  FUNC_3(VAR_27, VAR_2, VAR_18);
 }


 if ((VAR_28 & VAR_24) != 0) {
  uint32_t VAR_31;
  VAR_31 = FUNC_0(VAR_27, VAR_16);
  if ((VAR_31 & VAR_17) != 0) {

   FUNC_5(VAR_27->msk_dev,
       "Uncorrectable PCI Express error\n");
  }
  if ((VAR_31 & (VAR_13 | VAR_15)) != 0) {
   int VAR_32;


   for (VAR_32 = 0; VAR_32 < 4; VAR_32++)
    VAR_29[VAR_32] = FUNC_0(VAR_27,
        VAR_14 + VAR_32 * 4);

   if (!(VAR_29[0] == 0x73004001 && VAR_29[1] == 0x7f)) {
    VAR_27->msk_intrhwemask &= ~VAR_24;
    FUNC_4(VAR_27, VAR_0,
        VAR_27->msk_intrhwemask);
    FUNC_2(VAR_27, VAR_0);
   }
  }

  FUNC_3(VAR_27, VAR_2, VAR_19);
  FUNC_1(VAR_27, VAR_16, 0xffffffff);
  FUNC_3(VAR_27, VAR_2, VAR_18);
 }

 if ((VAR_28 & VAR_20) != 0 && VAR_27->msk_if[VAR_5] != ((void*)0))
  FUNC_6(VAR_27->msk_if[VAR_5], VAR_28);
 if ((VAR_28 & VAR_21) != 0 && VAR_27->msk_if[VAR_6] != ((void*)0))
  FUNC_6(VAR_27->msk_if[VAR_6], VAR_28 >> 8);
}
