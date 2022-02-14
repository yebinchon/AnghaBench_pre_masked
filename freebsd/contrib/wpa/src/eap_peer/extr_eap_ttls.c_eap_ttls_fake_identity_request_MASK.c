
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_hdr {int length; scalar_t__ identifier; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static u8 * FUNC_3(void)
{
 struct eap_hdr *VAR_4;
 u8 *VAR_5;

 FUNC_2(VAR_2, "EAP-TTLS: empty data in beginning of "
     "Phase 2 - use fake EAP-Request Identity");
 VAR_5 = FUNC_1(sizeof(*VAR_4) + 1);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_3, "EAP-TTLS: failed to allocate "
      "memory for fake EAP-Identity Request");
  return ((void*)0);
 }

 VAR_4 = (struct eap_hdr *) VAR_5;
 VAR_4->code = VAR_0;
 VAR_4->identifier = 0;
 VAR_4->length = FUNC_0(sizeof(*VAR_4) + 1);
 VAR_5[sizeof(*VAR_4)] = VAR_1;

 return VAR_5;
}
