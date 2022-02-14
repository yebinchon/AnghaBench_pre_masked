
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmm_information_element {scalar_t__ oui_subtype; scalar_t__ version; int qos_info; int oui_type; int * oui; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int const*,size_t) ;
 int FUNC_1 (int ,char*,...) ;

int FUNC_2(struct hostapd_data *VAR_4, const u8 *VAR_5, size_t VAR_6)
{
 struct wmm_information_element *VAR_7;

 FUNC_0(VAR_1, "WMM IE", VAR_5, VAR_6);

 if (VAR_6 < sizeof(struct wmm_information_element)) {
  FUNC_1(VAR_0, "Too short WMM IE (len=%lu)",
      (unsigned long) VAR_6);
  return 0;
 }

 VAR_7 = (struct wmm_information_element *) VAR_5;
 FUNC_1(VAR_0, "Validating WMM IE: OUI %02x:%02x:%02x  "
     "OUI type %d  OUI sub-type %d  version %d  QoS info 0x%x",
     VAR_7->oui[0], VAR_7->oui[1], VAR_7->oui[2], VAR_7->oui_type,
     VAR_7->oui_subtype, VAR_7->version, VAR_7->qos_info);
 if (VAR_7->oui_subtype != VAR_2 ||
     VAR_7->version != VAR_3) {
  FUNC_1(VAR_0, "Unsupported WMM IE Subtype/Version");
  return 0;
 }

 return 1;
}
