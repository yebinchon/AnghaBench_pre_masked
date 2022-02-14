
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_tlv_hdr {void* length; void* tlv_type; } ;
struct eap_sm {int ssl_ctx; } ;
struct eap_fast_pac {size_t pac_opaque_len; int pac_opaque; } ;
struct TYPE_2__ {int conn; } ;
struct eap_fast_data {TYPE_1__ ssl; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (struct eap_tlv_hdr*,int ,size_t) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *,size_t) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_3,
       struct eap_fast_data *VAR_4,
       struct eap_fast_pac *VAR_5)
{
 u8 *VAR_6;
 size_t VAR_7, VAR_8;
 struct eap_tlv_hdr *VAR_9;

 VAR_8 = VAR_5->pac_opaque_len;
 VAR_7 = sizeof(*VAR_9) + VAR_8;
 VAR_6 = FUNC_2(VAR_7);
 if (VAR_6) {
  VAR_9 = (struct eap_tlv_hdr *) VAR_6;
  VAR_9->tlv_type = FUNC_0(VAR_1);
  VAR_9->length = FUNC_0(VAR_8);
  FUNC_3(VAR_9 + 1, VAR_5->pac_opaque, VAR_8);
 }
 if (VAR_6 == ((void*)0) ||
     FUNC_4(VAR_3->ssl_ctx, VAR_4->ssl.conn,
         VAR_2,
         VAR_6, VAR_7) < 0) {
  FUNC_5(VAR_0, "EAP-FAST: Failed to add PAC-Opaque TLS "
      "extension");
  FUNC_1(VAR_6);
  return -1;
 }
 FUNC_1(VAR_6);

 return 0;
}
