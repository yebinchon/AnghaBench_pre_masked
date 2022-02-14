
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802_1x_kay {int participant_list; } ;
struct ieee802_1x_hdr {scalar_t__ type; int version; int length; } ;
struct ieee8023_hdr {int ethertype; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ieee802_1x_kay*,int const*,size_t) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void FUNC_5(void *VAR_6, const u8 *VAR_7, const u8 *VAR_8,
      size_t VAR_9)
{
 struct ieee802_1x_kay *VAR_10 = VAR_6;
 struct ieee8023_hdr *VAR_11;
 struct ieee802_1x_hdr *VAR_12;
 size_t VAR_13;




 if (VAR_9 < sizeof(*VAR_11) + sizeof(*VAR_12)) {
  FUNC_4(VAR_5, "KaY: EAPOL frame too short (%lu)",
      (unsigned long) VAR_9);
  return;
 }

 VAR_11 = (struct ieee8023_hdr *) VAR_8;
 VAR_12 = (struct ieee802_1x_hdr *) (VAR_11 + 1);
 VAR_13 = sizeof(*VAR_11) + sizeof(*VAR_12) +
  FUNC_0(VAR_12->length);
 if (VAR_9 < VAR_13) {
  FUNC_4(VAR_5, "KaY: EAPOL MPDU is invalid: (received len %lu, calculated len %lu, EAPOL length %u)",
      (unsigned long) VAR_9,
      (unsigned long) VAR_13,
      FUNC_0(VAR_12->length));
  return;
 }
 if (VAR_9 > VAR_13) {
  FUNC_3(VAR_3,
       "KaY: Ignore extra octets following the Packey Body field",
       &VAR_8[VAR_13], VAR_9 - VAR_13);
  VAR_9 = VAR_13;
 }

 if (VAR_12->version < VAR_0) {
  FUNC_4(VAR_5, "KaY: version %d does not support MKA",
      VAR_12->version);
  return;
 }
 if (FUNC_0(VAR_11->ethertype) != VAR_1 ||
     VAR_12->type != VAR_2)
  return;

 FUNC_3(VAR_3, "KaY: RX EAPOL-MKA", VAR_8, VAR_9);
 if (FUNC_1(&VAR_10->participant_list)) {
  FUNC_4(VAR_4,
      "KaY: No MKA participant instance - ignore EAPOL-MKA");
  return;
 }

 FUNC_2(VAR_10, VAR_8, VAR_9);
}
