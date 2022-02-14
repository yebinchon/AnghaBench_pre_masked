
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct seeprom_descriptor {int sd_DI; int sd_DO; int sd_CK; int sd_CS; int sd_RDY; scalar_t__ sd_MS; int sd_chip; void* sd_dataout_offset; void* sd_status_offset; int sd_control_offset; struct ahc_softc* sd_ahc; } ;
struct seeprom_config {int* device_flags; int brtime_id; int adapter_control; int bios_control; } ;
struct ahc_softc {int features; int our_id; int flags; struct seeprom_config* seep_config; } ;


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
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 char* FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,scalar_t__,int) ;
 int FUNC_2 (struct seeprom_descriptor*,int*,int ,int) ;
 scalar_t__ FUNC_3 (struct seeprom_config*) ;
 scalar_t__ VAR_28 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(struct ahc_softc *VAR_29)
{
 struct seeprom_descriptor VAR_30;
 struct seeprom_config *VAR_31;
 int VAR_32;
 uint8_t VAR_33;

 VAR_30.sd_ahc = VAR_29;
 VAR_30.sd_control_offset = VAR_23;
 VAR_30.sd_status_offset = VAR_25;
 VAR_30.sd_dataout_offset = VAR_25;
 VAR_30.sd_chip = VAR_4;
 VAR_30.sd_MS = 0;
 VAR_30.sd_RDY = VAR_19;
 VAR_30.sd_CS = VAR_15;
 VAR_30.sd_CK = VAR_14;
 VAR_30.sd_DO = VAR_18;
 VAR_30.sd_DI = VAR_17;
 VAR_31 = VAR_29->seep_config;

 if (VAR_28)
  FUNC_4("%s: Reading SEEPROM...", FUNC_0(VAR_29));
 VAR_32 = FUNC_2(&VAR_30, (uint16_t *)VAR_31,
                   0, sizeof(*VAR_31)/2);

 if (VAR_32) {

  if (FUNC_3(VAR_31) == 0) {
   if(VAR_28)
    FUNC_4 ("checksum error\n");
   VAR_32 = 0;
  } else if (VAR_28) {
   FUNC_4("done.\n");
  }
 }

 if (!VAR_32) {
  if (VAR_28)
   FUNC_4("%s: No SEEPROM available\n", FUNC_0(VAR_29));
  VAR_29->flags |= VAR_2;
 } else {




  int VAR_34;
  int VAR_35;
  uint16_t VAR_36;

  VAR_35 = (VAR_29->features & VAR_3) != 0 ? 16 : 8;
  VAR_36 = 0;
  for (VAR_34 = 0; VAR_34 < VAR_35; VAR_34++){
   uint8_t VAR_37;

   VAR_37 = (VAR_31->device_flags[VAR_34] & VAR_13) << 4;
   if (VAR_31->device_flags[VAR_34] & VAR_11)
    VAR_37 |= VAR_24;
   if (VAR_31->device_flags[VAR_34] & VAR_12)
    VAR_37 |= VAR_27;
   if (VAR_31->device_flags[VAR_34] & VAR_7)
    VAR_36 |= (0x01 << VAR_34);
   FUNC_1(VAR_29, VAR_26 + VAR_34, VAR_37);
  }
  FUNC_1(VAR_29, VAR_16, ~(VAR_36 & 0xff));
  FUNC_1(VAR_29, VAR_16 + 1, ~((VAR_36 >> 8) & 0xff));

  VAR_29->our_id = VAR_31->brtime_id & VAR_9;

  VAR_33 = (VAR_29->our_id & 0x7);
  if (VAR_31->adapter_control & VAR_10)
   VAR_33 |= VAR_20;
  if (VAR_31->adapter_control & VAR_8)
   VAR_33 |= VAR_21;

  if (VAR_31->bios_control & VAR_5)
   VAR_29->flags |= VAR_0;

  FUNC_1(VAR_29, VAR_22, VAR_33);

  if (VAR_31->adapter_control & VAR_6)
   VAR_29->flags |= VAR_1;
 }
 return (VAR_32);
}
