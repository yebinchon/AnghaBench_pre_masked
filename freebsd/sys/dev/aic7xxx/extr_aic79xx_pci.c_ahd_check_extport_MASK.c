
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpd ;
typedef int uint16_t ;
typedef int u_int ;
struct vpd_config {int dummy; } ;
struct seeprom_config {int adapter_control; } ;
struct ahd_softc {char channel; struct seeprom_config* seep_config; int flags; } ;


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
 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*,int) ;
 int VAR_10 ;
 int FUNC_2 (struct ahd_softc*) ;
 char FUNC_3 (struct ahd_softc*,scalar_t__) ;
 int FUNC_4 (struct ahd_softc*,scalar_t__) ;
 char* FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*,struct seeprom_config*) ;
 int FUNC_7 (struct ahd_softc*,struct vpd_config*) ;
 int FUNC_8 (struct ahd_softc*,int*,int,int,int ) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct ahd_softc*,int) ;
 int FUNC_11 (struct seeprom_config*) ;
 scalar_t__ VAR_11 ;
 int FUNC_12 (struct seeprom_config*,int ) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static int
FUNC_14(struct ahd_softc *VAR_12)
{
 struct vpd_config VAR_13;
 struct seeprom_config *VAR_14;
 u_int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_14 = VAR_12->seep_config;
 VAR_16 = FUNC_0(VAR_12);
 if (VAR_16) {
  u_int VAR_18;




  if (VAR_11)
   FUNC_13("%s: Reading VPD from SEEPROM...",
          FUNC_5(VAR_12));


  VAR_18 = ((2 * sizeof(*VAR_14))
       + (sizeof(VAR_13) * (VAR_12->channel - 'A'))) / 2;

  VAR_17 = FUNC_8(VAR_12, (uint16_t *)&VAR_13,
      VAR_18, sizeof(VAR_13)/2,
                    VAR_9);
  if (VAR_17 == 0)
   VAR_17 = FUNC_7(VAR_12, &VAR_13);
  if (VAR_11)
   FUNC_13("%s: VPD parsing %s\n",
          FUNC_5(VAR_12),
          VAR_17 == 0 ? "successful" : "failed");

  if (VAR_11)
   FUNC_13("%s: Reading SEEPROM...", FUNC_5(VAR_12));


  VAR_18 = (sizeof(*VAR_14) / 2) * (VAR_12->channel - 'A');

  VAR_17 = FUNC_8(VAR_12, (uint16_t *)VAR_14,
      VAR_18, sizeof(*VAR_14)/2,
                    VAR_5);

  if (VAR_17 != 0) {
   FUNC_13("Unable to read SEEPROM\n");
   VAR_16 = 0;
  } else {
   VAR_16 = FUNC_11(VAR_14);

   if (VAR_11) {
    if (VAR_16 == 0)
     FUNC_13 ("checksum error\n");
    else
     FUNC_13 ("done.\n");
   }
  }
  FUNC_9(VAR_12);
 }

 if (!VAR_16) {
  u_int VAR_19;
  FUNC_10(VAR_12, 0xFF);
  VAR_19 = FUNC_3(VAR_12, VAR_8 + VAR_7);
  if (VAR_19 != 0xFF
   && ((FUNC_3(VAR_12, VAR_8 + 0) == 'A'
     && FUNC_3(VAR_12, VAR_8 + 1) == 'D'
     && FUNC_3(VAR_12, VAR_8 + 2) == 'P'
     && FUNC_3(VAR_12, VAR_8 + 3) == 'T')
    || (FUNC_3(VAR_12, VAR_8 + 0) == 'B'
     && FUNC_3(VAR_12, VAR_8 + 1) == 'I'
     && FUNC_3(VAR_12, VAR_8 + 2) == 'O'
     && FUNC_3(VAR_12, VAR_8 + 3) == 'S')
    || (FUNC_3(VAR_12, VAR_8 + 0) == 'A'
     && FUNC_3(VAR_12, VAR_8 + 1) == 'S'
     && FUNC_3(VAR_12, VAR_8 + 2) == 'P'
     && FUNC_3(VAR_12, VAR_8 + 3) == 'I'))) {
   uint16_t *VAR_20;
   int VAR_21;

   FUNC_10(VAR_12, VAR_19);
   VAR_20 = (uint16_t *)VAR_14;
   for (VAR_21 = 0; VAR_21 < 64; VAR_21 += 2)
    *VAR_20++ = FUNC_4(VAR_12, VAR_8+VAR_21);
   VAR_16 = FUNC_11(VAR_14);
   if (VAR_16)
    VAR_12->flags |= VAR_1;
  }
 }
 if (!VAR_16) {
  if (VAR_11)
   FUNC_13("%s: No SEEPROM available.\n", FUNC_5(VAR_12));
  VAR_12->flags |= VAR_2;
  VAR_17 = FUNC_2(VAR_12);
  VAR_15 = VAR_3|VAR_4;
  FUNC_12(VAR_12->seep_config, VAR_6);
  VAR_12->seep_config = ((void*)0);
 } else {
  VAR_17 = FUNC_6(VAR_12, VAR_14);
  VAR_15 = VAR_14->adapter_control;
 }
 if (VAR_17 != 0)
  return (VAR_17);

 FUNC_1(VAR_12, VAR_15);

 return (0);
}
