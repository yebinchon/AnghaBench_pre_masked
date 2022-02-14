
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hostapd_data {int dummy; } ;
struct eapol_state_machine {scalar_t__* identity; size_t identity_len; int dot1xAuthEapolRespIdFramesRx; int addr; int eap; } ;
struct eap_hdr {scalar_t__ code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,size_t) ;
 int FUNC_1 (int ,scalar_t__ const*,size_t) ;
 scalar_t__* FUNC_2 (int ,size_t*) ;
 int FUNC_3 (struct hostapd_data*,int ,int ,int ,char*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static void FUNC_5(struct hostapd_data *VAR_6,
          struct eapol_state_machine *VAR_7,
          const u8 *VAR_8, size_t VAR_9)
{
 const u8 *VAR_10;
 size_t VAR_11;
 const struct eap_hdr *VAR_12 = (const struct eap_hdr *) VAR_8;

 if (VAR_9 <= sizeof(struct eap_hdr) ||
     (VAR_12->code == VAR_1 &&
      VAR_8[sizeof(struct eap_hdr)] != VAR_3) ||
     (VAR_12->code == VAR_0 &&
      VAR_8[sizeof(struct eap_hdr)] != VAR_2) ||
     (VAR_12->code != VAR_1 &&
      VAR_12->code != VAR_0))
  return;

 FUNC_1(VAR_7->eap, VAR_8, VAR_9);
 VAR_10 = FUNC_2(VAR_7->eap, &VAR_11);
 if (VAR_10 == ((void*)0))
  return;


 FUNC_4(VAR_7->identity);
 VAR_7->identity = (u8 *) FUNC_0(VAR_10, VAR_11);
 if (VAR_7->identity == ((void*)0)) {
  VAR_7->identity_len = 0;
  return;
 }

 VAR_7->identity_len = VAR_11;
 FUNC_3(VAR_6, VAR_7->addr, VAR_5,
         VAR_4, "STA identity '%s'", VAR_7->identity);
 VAR_7->dot1xAuthEapolRespIdFramesRx++;
}
