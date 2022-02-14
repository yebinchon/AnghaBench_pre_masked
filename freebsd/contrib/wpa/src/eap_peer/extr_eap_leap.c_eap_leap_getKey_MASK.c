
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct eap_sm {int dummy; } ;
struct eap_leap_data {scalar_t__ state; int const* peer_response; int const* peer_challenge; int const* ap_response; int const* ap_challenge; } ;
typedef int pw_hash_hash ;
typedef int pw_hash ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int const* FUNC_0 (struct eap_sm*,size_t*,int*) ;
 int FUNC_1 (int const*,int) ;
 scalar_t__ FUNC_2 (int const*,int const*) ;
 int FUNC_3 (int,int const**,size_t*,int const*) ;
 scalar_t__ FUNC_4 (int const*,size_t,int const*) ;
 int FUNC_5 (int const*) ;
 int const* FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int const*,size_t) ;
 int FUNC_8 (int ,char*,int const*,int) ;

__attribute__((used)) static u8 * FUNC_9(struct eap_sm *VAR_5, void *VAR_6, size_t *VAR_7)
{
 struct eap_leap_data *VAR_8 = VAR_6;
 u8 *VAR_9, VAR_10[16], VAR_11[16];
 const u8 *VAR_12[5], *VAR_13;
 size_t VAR_14[5], VAR_15;
 int VAR_16;

 if (VAR_8->state != VAR_1)
  return ((void*)0);

 VAR_13 = FUNC_0(VAR_5, &VAR_15, &VAR_16);
 if (VAR_13 == ((void*)0))
  return ((void*)0);

 VAR_9 = FUNC_6(VAR_2);
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 if (VAR_16) {
  if (FUNC_2(VAR_13, VAR_10)) {
   FUNC_5(VAR_9);
   return ((void*)0);
  }
 } else {
  if (FUNC_4(VAR_13, VAR_15, VAR_11) ||
      FUNC_2(VAR_11, VAR_10)) {
   FUNC_5(VAR_9);
   return ((void*)0);
  }
 }
 FUNC_8(VAR_4, "EAP-LEAP: pw_hash_hash",
   VAR_10, 16);
 FUNC_7(VAR_4, "EAP-LEAP: peer_challenge",
      VAR_8->peer_challenge, VAR_0);
 FUNC_7(VAR_4, "EAP-LEAP: peer_response",
      VAR_8->peer_response, VAR_3);
 FUNC_7(VAR_4, "EAP-LEAP: ap_challenge",
      VAR_8->ap_challenge, VAR_0);
 FUNC_7(VAR_4, "EAP-LEAP: ap_response",
      VAR_8->ap_response, VAR_3);

 VAR_12[0] = VAR_10;
 VAR_14[0] = 16;
 VAR_12[1] = VAR_8->ap_challenge;
 VAR_14[1] = VAR_0;
 VAR_12[2] = VAR_8->ap_response;
 VAR_14[2] = VAR_3;
 VAR_12[3] = VAR_8->peer_challenge;
 VAR_14[3] = VAR_0;
 VAR_12[4] = VAR_8->peer_response;
 VAR_14[4] = VAR_3;
 FUNC_3(5, VAR_12, VAR_14, VAR_9);
 FUNC_8(VAR_4, "EAP-LEAP: master key", VAR_9, VAR_2);
 *VAR_7 = VAR_2;

 FUNC_1(VAR_11, sizeof(VAR_11));
 FUNC_1(VAR_10, sizeof(VAR_10));

 return VAR_9;
}
