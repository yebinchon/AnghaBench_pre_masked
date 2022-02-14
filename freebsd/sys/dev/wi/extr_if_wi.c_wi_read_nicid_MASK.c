
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver ;
typedef char u_int16_t ;
struct wi_softc {size_t sc_firmware_type; int sc_nic_id; char* sc_nic_name; int sc_pri_firmware_ver; int sc_sta_firmware_ver; int sc_dev; } ;
struct wi_card_ident {char* card_name; scalar_t__ card_id; size_t firm_type; } ;
typedef int ident ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int,int,int) ;
 struct wi_card_ident* VAR_9 ;
 char** VAR_10 ;
 scalar_t__ FUNC_4 (struct wi_softc*,int ,char*,int*) ;

__attribute__((used)) static void
FUNC_5(struct wi_softc *VAR_11)
{
 struct wi_card_ident *VAR_12;
 char *VAR_13;
 int VAR_14;
 u_int16_t VAR_15[4];


 FUNC_2(VAR_15, 0, sizeof(VAR_15));
 VAR_14 = sizeof(VAR_15);
 FUNC_4(VAR_11, VAR_3, VAR_15, &VAR_14);

 VAR_11->sc_firmware_type = VAR_2;
 VAR_11->sc_nic_id = FUNC_1(VAR_15[0]);
 for (VAR_12 = VAR_9; VAR_12->card_name != ((void*)0); VAR_12++) {
  if (VAR_11->sc_nic_id == VAR_12->card_id) {
   VAR_11->sc_nic_name = VAR_12->card_name;
   VAR_11->sc_firmware_type = VAR_12->firm_type;
   break;
  }
 }
 if (VAR_11->sc_firmware_type == VAR_2) {
  if (VAR_11->sc_nic_id & 0x8000) {
   VAR_11->sc_firmware_type = VAR_0;
   VAR_11->sc_nic_name = "Unknown Prism chip";
  } else {
   VAR_11->sc_firmware_type = VAR_1;
   VAR_11->sc_nic_name = "Unknown Lucent chip";
  }
 }
 if (VAR_8)
  FUNC_0(VAR_11->sc_dev, "using %s\n", VAR_11->sc_nic_name);


 if (VAR_11->sc_firmware_type != VAR_1) {
  FUNC_2(VAR_15, 0, sizeof(VAR_15));
  VAR_14 = sizeof(VAR_15);
  FUNC_4(VAR_11, VAR_4, VAR_15, &VAR_14);
  VAR_11->sc_pri_firmware_ver = FUNC_1(VAR_15[2]) * 10000 +
      FUNC_1(VAR_15[3]) * 100 + FUNC_1(VAR_15[1]);
 }


 FUNC_2(VAR_15, 0, sizeof(VAR_15));
 VAR_14 = sizeof(VAR_15);
 FUNC_4(VAR_11, VAR_5, VAR_15, &VAR_14);
 VAR_11->sc_sta_firmware_ver = FUNC_1(VAR_15[2]) * 10000 +
     FUNC_1(VAR_15[3]) * 100 + FUNC_1(VAR_15[1]);
 if (VAR_11->sc_firmware_type == VAR_0 &&
     (VAR_11->sc_sta_firmware_ver == 10102 ||
      VAR_11->sc_sta_firmware_ver == 20102)) {
  char VAR_16[12];
  FUNC_2(VAR_16, 0, sizeof(VAR_16));
  VAR_14 = sizeof(VAR_16);

  if (FUNC_4(VAR_11, VAR_6, VAR_16, &VAR_14) == 0 &&
      *(VAR_13 = (char *)VAR_16) >= 'A' &&
      VAR_13[2] == '.' && VAR_13[5] == '-' && VAR_13[8] == '\0') {
   VAR_11->sc_firmware_type = VAR_7;
   VAR_11->sc_sta_firmware_ver = (VAR_13[1] - '0') * 10000 +
       (VAR_13[3] - '0') * 1000 + (VAR_13[4] - '0') * 100 +
       (VAR_13[6] - '0') * 10 + (VAR_13[7] - '0');
  }
 }
 if (VAR_8) {
  FUNC_0(VAR_11->sc_dev, "%s Firmware: ",
      VAR_10[VAR_11->sc_firmware_type]);
  if (VAR_11->sc_firmware_type != VAR_1)
   FUNC_3("Primary (%u.%u.%u), ",
       VAR_11->sc_pri_firmware_ver / 10000,
       (VAR_11->sc_pri_firmware_ver % 10000) / 100,
       VAR_11->sc_pri_firmware_ver % 100);
  FUNC_3("Station (%u.%u.%u)\n",
      VAR_11->sc_sta_firmware_ver / 10000,
      (VAR_11->sc_sta_firmware_ver % 10000) / 100,
      VAR_11->sc_sta_firmware_ver % 100);
 }
}
