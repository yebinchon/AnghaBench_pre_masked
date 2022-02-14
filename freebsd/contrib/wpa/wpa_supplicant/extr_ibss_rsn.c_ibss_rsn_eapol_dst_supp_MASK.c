
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_eapol_key {scalar_t__ type; int key_info; } ;
struct ieee802_1x_hdr {scalar_t__ version; scalar_t__ type; int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_5, size_t VAR_6)
{
 const struct ieee802_1x_hdr *VAR_7;
 const struct wpa_eapol_key *VAR_8;
 u16 VAR_9;
 size_t VAR_10;



 if (VAR_6 < sizeof(*VAR_7) + sizeof(*VAR_8))
  return -1;

 VAR_7 = (const struct ieee802_1x_hdr *) VAR_5;
 VAR_8 = (const struct wpa_eapol_key *) (VAR_7 + 1);
 VAR_10 = FUNC_1(VAR_7->length);

 if (VAR_7->version < VAR_1) {

 }
 if (VAR_7->type != VAR_2) {
  FUNC_2(VAR_3, "RSN: EAPOL frame (type %u) discarded, "
   "not a Key frame", VAR_7->type);
  return -1;
 }
 if (VAR_10 > VAR_6 - sizeof(*VAR_7) || VAR_10 < sizeof(*VAR_8)) {
  FUNC_2(VAR_3, "RSN: EAPOL frame payload size %lu "
      "invalid (frame size %lu)",
      (unsigned long) VAR_10, (unsigned long) VAR_6);
  return -1;
 }

 if (VAR_8->type != VAR_0) {
  FUNC_2(VAR_3, "RSN: EAPOL-Key type (%d) unknown, "
      "discarded", VAR_8->type);
  return -1;
 }

 VAR_9 = FUNC_0(VAR_8->key_info);

 return !!(VAR_9 & VAR_4);
}
