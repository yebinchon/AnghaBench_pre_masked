
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct bwi_softc {int sc_dev; } ;
struct bwi_mac {TYPE_2__* mac_pcm; TYPE_1__* mac_ucode; struct bwi_softc* mac_sc; } ;
struct TYPE_4__ {int datasize; scalar_t__ data; } ;
struct TYPE_3__ {int datasize; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_4 (struct bwi_mac*,int ,int ) ;
 int VAR_19 ;
 int FUNC_5 (scalar_t__ const) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_7(struct bwi_mac *VAR_20)
{
 struct bwi_softc *VAR_21 = VAR_20->mac_sc;
 const uint32_t *VAR_22;
 uint16_t VAR_23;
 int VAR_24, VAR_25;




 VAR_22 = (const uint32_t *)
      ((const uint8_t *)VAR_20->mac_ucode->data + VAR_4);
 VAR_24 = (VAR_20->mac_ucode->datasize - VAR_4) / sizeof(uint32_t);

 FUNC_2(VAR_21, VAR_14,
      FUNC_0(
      VAR_6 | VAR_16, 0));
 for (VAR_25 = 0; VAR_25 < VAR_24; ++VAR_25) {
  FUNC_2(VAR_21, VAR_15, FUNC_5(VAR_22[VAR_25]));
  FUNC_3(10);
 }




 VAR_22 = (const uint32_t *)
      ((const uint8_t *)VAR_20->mac_pcm->data + VAR_4);
 VAR_24 = (VAR_20->mac_pcm->datasize - VAR_4) / sizeof(uint32_t);

 FUNC_2(VAR_21, VAR_14,
      FUNC_0(VAR_5, 0x01ea));
 FUNC_2(VAR_21, VAR_15, 0x4000);

 FUNC_2(VAR_21, VAR_14,
      FUNC_0(VAR_5, 0x01eb));
 for (VAR_25 = 0; VAR_25 < VAR_24; ++VAR_25) {
  FUNC_2(VAR_21, VAR_15, FUNC_5(VAR_22[VAR_25]));
  FUNC_3(10);
 }

 FUNC_2(VAR_21, VAR_9, VAR_0);
 FUNC_2(VAR_21, VAR_10,
      VAR_13 |
      VAR_11 |
      VAR_12);



 for (VAR_25 = 0; VAR_25 < 200; ++VAR_25) {
  uint32_t VAR_26;

  VAR_26 = FUNC_1(VAR_21, VAR_9);
  if (VAR_26 == VAR_8)
   break;
  FUNC_3(10);
 }
 if (VAR_25 == 200) {
  FUNC_6(VAR_21->sc_dev,
      "firmware (ucode&pcm) loading timed out\n");
  return VAR_18;
 }



 FUNC_1(VAR_21, VAR_9);

 VAR_23 = FUNC_4(VAR_20, VAR_1, VAR_3);
 if (VAR_23 > VAR_7) {
  FUNC_6(VAR_21->sc_dev,
      "firmware version 4 is not supported yet\n");
  return VAR_17;
 }

 FUNC_6(VAR_21->sc_dev,
     "firmware rev 0x%04x, patch level 0x%04x\n", VAR_23,
     FUNC_4(VAR_20, VAR_1, VAR_2));
 return 0;
}
