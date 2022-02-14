
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct jedec_dimm_softc {int dev; int spd_addr; int smbus; } ;
typedef enum dram_type { ____Placeholder_dram_type } dram_type ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct jedec_dimm_softc *VAR_10, enum dram_type VAR_11,
    uint32_t *VAR_12)
{
 uint8_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;
 uint8_t VAR_16;
 uint8_t VAR_17;
 uint8_t VAR_18;
 uint8_t VAR_19;
 uint8_t VAR_20;
 uint8_t VAR_21;
 uint8_t VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint32_t VAR_27;
 int VAR_28;

 switch (VAR_11) {
 case 129:
  VAR_14 = VAR_1;
  VAR_16 = VAR_2;
  VAR_18 = VAR_3;
  VAR_22 = VAR_4;
  break;
 case 128:
  VAR_14 = VAR_5;
  VAR_16 = VAR_6;
  VAR_18 = VAR_7;
  VAR_20 = VAR_8;
  VAR_22 = VAR_9;
  break;
 default:
  FUNC_0(VAR_10->dev, "unsupported dram_type 0x%02x\n", VAR_11);
  VAR_28 = VAR_0;
  goto out;
 }

 VAR_28 = FUNC_1(VAR_10->smbus, VAR_10->spd_addr, VAR_14,
     &VAR_13);
 if (VAR_28 != 0) {
  FUNC_0(VAR_10->dev, "failed to read bus_width: %d\n", VAR_28);
  goto out;
 }

 VAR_28 = FUNC_1(VAR_10->smbus, VAR_10->spd_addr, VAR_16,
     &VAR_15);
 if (VAR_28 != 0) {
  FUNC_0(VAR_10->dev, "failed to read dimm_ranks: %d\n", VAR_28);
  goto out;
 }

 VAR_28 = FUNC_1(VAR_10->smbus, VAR_10->spd_addr, VAR_18,
     &VAR_17);
 if (VAR_28 != 0) {
  FUNC_0(VAR_10->dev, "failed to read sdram_capacity: %d\n",
      VAR_28);
  goto out;
 }

 VAR_28 = FUNC_1(VAR_10->smbus, VAR_10->spd_addr, VAR_22,
     &VAR_21);
 if (VAR_28 != 0) {
  FUNC_0(VAR_10->dev, "failed to read sdram_width: %d\n", VAR_28);
  goto out;
 }


 if (VAR_11 == 128) {
  VAR_28 = FUNC_1(VAR_10->smbus, VAR_10->spd_addr, VAR_20,
      &VAR_19);
  if (VAR_28 != 0) {
   FUNC_0(VAR_10->dev,
       "failed to read sdram_pkg_type: %d\n", VAR_28);
   goto out;
  }
 }


 VAR_13 &= 0x07;
 if (VAR_13 <= 3) {
  VAR_23 = 1 << VAR_13;
  VAR_23 *= 8;
 } else {
  FUNC_0(VAR_10->dev, "invalid bus width info\n");
  VAR_28 = VAR_0;
  goto out;
 }




 VAR_15 >>= 3;
 VAR_15 &= 0x07;
 if (VAR_15 <= 7) {
  VAR_24 = VAR_15 + 1;
 } else {
  FUNC_0(VAR_10->dev, "invalid DIMM Rank info\n");
  VAR_28 = VAR_0;
  goto out;
 }
 if ((VAR_15 >= 4) && (VAR_11 != 128)) {
  FUNC_0(VAR_10->dev, "invalid DIMM Rank info\n");
  VAR_28 = VAR_0;
  goto out;
 }





 VAR_17 &= 0x0f;
 if (VAR_17 <= 7) {
  VAR_25 = 1 << VAR_17;
  VAR_25 *= 256;
 } else if (VAR_17 <= 9) {
  VAR_25 = 12 << (VAR_17 - 8);
  VAR_25 *= 1024;
 } else {
  FUNC_0(VAR_10->dev, "invalid SDRAM capacity info\n");
  VAR_28 = VAR_0;
  goto out;
 }
 if ((VAR_17 >= 7) && (VAR_11 != 128)) {
  FUNC_0(VAR_10->dev, "invalid SDRAM capacity info\n");
  VAR_28 = VAR_0;
  goto out;
 }


 VAR_21 &= 0x7;
 if (VAR_21 <= 3) {
  VAR_27 = 1 << VAR_21;
  VAR_27 *= 4;
 } else {
  FUNC_0(VAR_10->dev, "invalid SDRAM width info\n");
  VAR_28 = VAR_0;
  goto out;
 }





 if ((VAR_11 == 128) &&
     ((VAR_19 & 0x3) == 2)) {
  VAR_19 >>= 4;
  VAR_19 &= 0x07;
  VAR_26 = VAR_19 + 1;
  VAR_24 *= VAR_26;
 }




 *VAR_12 = VAR_25 / 8 * VAR_23 / VAR_27 *
     VAR_24;

out:
 return (VAR_28);
}
