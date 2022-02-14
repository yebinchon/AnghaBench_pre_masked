
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ttls_parse_avp {size_t eap_len; int * eapdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,size_t) ;
 int * FUNC_1 (int const*,size_t) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(const u8 *VAR_2, size_t VAR_3,
       struct ttls_parse_avp *VAR_4)
{
 FUNC_3(VAR_0, "EAP-TTLS: AVP - EAP Message");
 if (VAR_4->eapdata == ((void*)0)) {
  VAR_4->eapdata = FUNC_1(VAR_2, VAR_3);
  if (VAR_4->eapdata == ((void*)0)) {
   FUNC_3(VAR_1, "EAP-TTLS: Failed to allocate "
       "memory for Phase 2 EAP data");
   return -1;
  }
  VAR_4->eap_len = VAR_3;
 } else {
  u8 *VAR_5 = FUNC_2(VAR_4->eapdata, VAR_4->eap_len + VAR_3);
  if (VAR_5 == ((void*)0)) {
   FUNC_3(VAR_1, "EAP-TTLS: Failed to allocate "
       "memory for Phase 2 EAP data");
   return -1;
  }
  FUNC_0(VAR_5 + VAR_4->eap_len, VAR_2, VAR_3);
  VAR_4->eapdata = VAR_5;
  VAR_4->eap_len += VAR_3;
 }

 return 0;
}
