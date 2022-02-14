
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct firmware {int datasize; scalar_t__ data; } ;
struct bwi_softc {int sc_dev; } ;
struct bwi_mac {struct bwi_softc* mac_sc; } ;
struct bwi_fwhdr {int fw_iv_cnt; } ;
struct TYPE_2__ {int val16; int val32; } ;
struct bwi_fw_iv {TYPE_1__ iv_val; int iv_ofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bwi_softc*,int,int) ;
 int FUNC_1 (struct bwi_softc*,int,void*) ;
 int FUNC_2 (struct bwi_softc*,int,char*,int) ;
 int VAR_5 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_7(struct bwi_mac *VAR_6, const struct firmware *VAR_7)
{
 struct bwi_softc *VAR_8 = VAR_6->mac_sc;
 const struct bwi_fwhdr *VAR_9;
 const struct bwi_fw_iv *VAR_10;
 int VAR_11, VAR_12, VAR_13;


 VAR_9 = (const struct bwi_fwhdr *)VAR_7->data;
 VAR_11 = FUNC_5(VAR_9->fw_iv_cnt);
 FUNC_2(VAR_8, VAR_2 | VAR_1 | VAR_0,
  "IV count %d\n", VAR_11);


 VAR_13 = VAR_7->datasize - sizeof(*VAR_9);


 VAR_10 = (const struct bwi_fw_iv *)
      ((const uint8_t *)VAR_7->data + sizeof(*VAR_9));

 for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12) {
  uint16_t VAR_14, VAR_15;
  int VAR_16 = 0;

  if (VAR_13 < sizeof(VAR_10->iv_ofs)) {
   FUNC_6(VAR_8->sc_dev, "invalid IV image, ofs\n");
   return VAR_5;
  }
  VAR_13 -= sizeof(VAR_10->iv_ofs);
  VAR_16 += sizeof(VAR_10->iv_ofs);

  VAR_14 = FUNC_4(VAR_10->iv_ofs);

  VAR_15 = FUNC_3(VAR_14, VAR_4);
  if (VAR_15 >= 0x1000) {
   FUNC_6(VAR_8->sc_dev, "invalid ofs (0x%04x) "
      "for %dth iv\n", VAR_15, VAR_12);
   return VAR_5;
  }

  if (VAR_14 & VAR_3) {
   uint32_t VAR_17;

   if (VAR_13 < sizeof(VAR_10->iv_val.val32)) {
    FUNC_6(VAR_8->sc_dev,
        "invalid IV image, val32\n");
    return VAR_5;
   }
   VAR_13 -= sizeof(VAR_10->iv_val.val32);
   VAR_16 += sizeof(VAR_10->iv_val.val32);

   VAR_17 = FUNC_5(VAR_10->iv_val.val32);
   FUNC_1(VAR_8, VAR_15, VAR_17);
  } else {
   uint16_t VAR_18;

   if (VAR_13 < sizeof(VAR_10->iv_val.val16)) {
    FUNC_6(VAR_8->sc_dev,
        "invalid IV image, val16\n");
    return VAR_5;
   }
   VAR_13 -= sizeof(VAR_10->iv_val.val16);
   VAR_16 += sizeof(VAR_10->iv_val.val16);

   VAR_18 = FUNC_4(VAR_10->iv_val.val16);
   FUNC_0(VAR_8, VAR_15, VAR_18);
  }

  VAR_10 = (const struct bwi_fw_iv *)((const uint8_t *)VAR_10 + VAR_16);
 }

 if (VAR_13 != 0) {
  FUNC_6(VAR_8->sc_dev, "invalid IV image, size left %d\n",
      VAR_13);
  return VAR_5;
 }
 return 0;
}
