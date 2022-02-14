
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pac_tlv_hdr {int len; int type; } ;
struct eap_fast_pac {int pac_info; int pac_opaque; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct eap_fast_pac*,int,int *,size_t,int*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct eap_fast_pac *VAR_1,
        u8 *VAR_2, size_t VAR_3)
{
 struct pac_tlv_hdr *VAR_4;
 u8 *VAR_5;
 size_t VAR_6, VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_5 = VAR_2;
 VAR_6 = VAR_3;

 while (VAR_6 > sizeof(*VAR_4)) {
  VAR_4 = (struct pac_tlv_hdr *) VAR_5;
  VAR_8 = FUNC_0(VAR_4->type);
  VAR_7 = FUNC_0(VAR_4->len);
  VAR_5 += sizeof(*VAR_4);
  VAR_6 -= sizeof(*VAR_4);
  if (VAR_7 > VAR_6) {
   FUNC_2(VAR_0, "EAP-FAST: PAC TLV overrun "
       "(type=%d len=%lu left=%lu)",
       VAR_8, (unsigned long) VAR_7,
       (unsigned long) VAR_6);
   return -1;
  }

  FUNC_1(VAR_1, VAR_8, VAR_5, VAR_7, &VAR_9);

  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
 }

 if (!VAR_9 || !VAR_1->pac_opaque || !VAR_1->pac_info) {
  FUNC_2(VAR_0, "EAP-FAST: PAC TLV does not include "
      "all the required fields");
  return -1;
 }

 return 0;
}
