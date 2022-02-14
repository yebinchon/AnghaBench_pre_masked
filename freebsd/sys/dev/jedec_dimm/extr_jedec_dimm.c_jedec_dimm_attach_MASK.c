
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct jedec_dimm_softc {int spd_addr; int tsod_addr; char const* type_str; char const* part_str; char const* serial_str; char const* slotid_str; int capacity_mb; int smbus; int dev; } ;
typedef enum dram_type { ____Placeholder_dram_type } dram_type ;
typedef int device_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,char const*,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_4 (struct jedec_dimm_softc*,int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct jedec_dimm_softc* FUNC_8 (int ) ;
 struct sysctl_ctx_list* FUNC_9 (int ) ;
 struct sysctl_oid* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (struct jedec_dimm_softc*,int,int *) ;
 int FUNC_16 (struct jedec_dimm_softc*,int) ;
 int FUNC_17 (struct jedec_dimm_softc*,char const*,int,int ,int ,int) ;
 int FUNC_18 (struct jedec_dimm_softc*,int ,int *) ;
 int VAR_24 ;
 char* FUNC_19 (int ,int ) ;
 char* FUNC_20 (int,int ,int) ;
 scalar_t__ FUNC_21 (int ,int ,char*,char const**) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int,int ,int*) ;
 int FUNC_24 (char const*,int,char*,...) ;
 char const* FUNC_25 (char const*,int ) ;
 int FUNC_26 (char const*) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_25)
{
 uint8_t VAR_26;
 uint16_t VAR_27;
 uint16_t VAR_28;
 uint16_t VAR_29;
 uint16_t VAR_30;
 uint16_t VAR_31;
 uint16_t VAR_32;
 uint16_t VAR_33;
 bool VAR_34;
 int VAR_35;
 int VAR_36;
 enum dram_type VAR_37;
 struct jedec_dimm_softc *VAR_38;
 struct sysctl_ctx_list *VAR_39;
 struct sysctl_oid *VAR_40;
 struct sysctl_oid_list *VAR_41;
 const char *VAR_42;
 const char *VAR_43;
 char *VAR_44;

 VAR_38 = FUNC_8(VAR_25);
 VAR_39 = FUNC_9(VAR_25);
 VAR_40 = FUNC_10(VAR_25);
 VAR_41 = FUNC_3(VAR_40);

 FUNC_4(VAR_38, sizeof(*VAR_38));
 VAR_38->dev = VAR_25;
 VAR_38->smbus = FUNC_7(VAR_25);
 VAR_38->spd_addr = FUNC_22(VAR_25);




 VAR_38->tsod_addr = VAR_4 | (VAR_38->spd_addr & 0x0f);


 VAR_35 = FUNC_23(VAR_38->smbus, VAR_38->spd_addr, VAR_20, &VAR_26);
 if (VAR_35 != 0) {
  FUNC_12(VAR_25, "failed to read dram_type: %d\n", VAR_35);
  goto out;
 }
 VAR_37 = (enum dram_type) VAR_26;
 switch (VAR_37) {
 case 129:
  (void) FUNC_24(VAR_38->type_str, sizeof(VAR_38->type_str), "DDR3");
  VAR_28 = VAR_10;
  VAR_29 = VAR_14;
  VAR_30 = VAR_11;
  VAR_31 = VAR_15;
  VAR_32 = VAR_16;
  break;
 case 128:
  (void) FUNC_24(VAR_38->type_str, sizeof(VAR_38->type_str), "DDR4");
  VAR_28 = VAR_12;
  VAR_29 = VAR_17;
  VAR_30 = VAR_13;
  VAR_31 = VAR_18;
  VAR_32 = VAR_19;
  break;
 default:
  FUNC_12(VAR_25, "unsupported dram_type 0x%02x\n", VAR_37);
  VAR_35 = VAR_3;
  goto out;
 }

 if (VAR_23) {

  (void) FUNC_16(VAR_38, VAR_37);
 }




 VAR_35 = FUNC_15(VAR_38, VAR_37, &VAR_38->capacity_mb);
 if (VAR_35 != 0) {
  goto out;
 }

 VAR_35 = FUNC_17(VAR_38, VAR_38->part_str, sizeof(VAR_38->part_str),
     VAR_29, VAR_28, 1);
 if (VAR_35 != 0) {
  goto out;
 }

 VAR_35 = FUNC_17(VAR_38, VAR_38->serial_str, sizeof(VAR_38->serial_str),
     VAR_31, VAR_30, 0);
 if (VAR_35 != 0) {
  goto out;
 }
 VAR_35 = FUNC_23(VAR_38->smbus, VAR_38->spd_addr, VAR_32, &VAR_26);
 if (VAR_35 != 0) {
  FUNC_12(VAR_25, "failed to read TSOD-present byte: %d\n",
      VAR_35);
  goto out;
 }
 if (VAR_26 & 0x80) {
  VAR_34 = 1;
  VAR_35 = FUNC_18(VAR_38, VAR_22, &VAR_33);
  if (VAR_35 != 0) {
   FUNC_12(VAR_25,
       "failed to read TSOD Manufacturer ID\n");
   VAR_35 = 0;
   goto no_tsod;
  }
  VAR_35 = FUNC_18(VAR_38, VAR_21, &VAR_27);
  if (VAR_35 != 0) {
   FUNC_12(VAR_25, "failed to read TSOD Device ID\n");
   VAR_35 = 0;
   goto no_tsod;
  }

  VAR_42 = FUNC_19(VAR_33, VAR_27);
  if (VAR_23) {
   if (VAR_42 == ((void*)0)) {
    FUNC_12(VAR_25,
        "Unknown TSOD Manufacturer and Device IDs,"
        " 0x%x and 0x%x\n", VAR_33, VAR_27);
   } else {
    FUNC_12(VAR_25,
        "TSOD: %s\n", VAR_42);
   }
  }
 } else {
no_tsod:
  VAR_42 = ((void*)0);
  VAR_34 = 0;
 }

 FUNC_1(VAR_39, VAR_41, VAR_9, "type",
     VAR_1 | VAR_0, VAR_38->type_str, 0,
     "DIMM type");

 FUNC_2(VAR_39, VAR_41, VAR_9, "capacity",
     VAR_1 | VAR_0, ((void*)0), VAR_38->capacity_mb,
     "DIMM capacity (MB)");

 FUNC_1(VAR_39, VAR_41, VAR_9, "part",
     VAR_1 | VAR_0, VAR_38->part_str, 0,
     "DIMM Part Number");

 FUNC_1(VAR_39, VAR_41, VAR_9, "serial",
     VAR_1 | VAR_0, VAR_38->serial_str, 0,
     "DIMM Serial Number");


 if (VAR_34 && (VAR_42 != ((void*)0))) {
  FUNC_0(VAR_39, VAR_41, VAR_9, "temp",
      VAR_2 | VAR_1 | VAR_0, VAR_25, 0,
      VAR_24, "IK", "DIMM temperature (deg C)");
 }


 if (FUNC_21(FUNC_6(VAR_25), FUNC_11(VAR_25),
     "slotid", &VAR_43) == 0) {
  if (VAR_43 != ((void*)0)) {
   VAR_38->slotid_str = FUNC_25(VAR_43, VAR_5);
   FUNC_1(VAR_39, VAR_41, VAR_9, "slotid",
       VAR_1 | VAR_0, VAR_38->slotid_str, 0,
       "DIMM Slot Identifier");
  }
 }




 if ((VAR_42 != ((void*)0)) || (VAR_38->slotid_str != ((void*)0))) {
  VAR_36 = FUNC_26(FUNC_5(VAR_25));
  if (VAR_42 != ((void*)0)) {
   VAR_36 += FUNC_26(VAR_42);
   VAR_36 += 4;
  }
  if (VAR_38->slotid_str != ((void*)0)) {
   VAR_36 += FUNC_26(VAR_38->slotid_str);
   VAR_36 += 3;
  }
  VAR_36++;
  VAR_44 = FUNC_20(VAR_36, VAR_6, (VAR_7 | VAR_8));
  (void) FUNC_24(VAR_44, VAR_36, "%s%s%s%s%s%s",
      FUNC_5(VAR_25),
      (VAR_42 ? " w/ " : ""),
      (VAR_42 ? VAR_42 : ""),
      (VAR_38->slotid_str ? " (" : ""),
      (VAR_38->slotid_str ? VAR_38->slotid_str : ""),
      (VAR_38->slotid_str ? ")" : ""));
  FUNC_13(VAR_25, VAR_44);
  FUNC_14(VAR_44, VAR_6);
 }

out:
 return (VAR_35);
}
