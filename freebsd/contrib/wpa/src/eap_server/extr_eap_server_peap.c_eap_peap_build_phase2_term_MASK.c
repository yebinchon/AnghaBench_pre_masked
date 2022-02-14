
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {int ssl; } ;
struct eap_hdr {int length; int identifier; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wpabuf* FUNC_0 (struct eap_sm*,int *,struct wpabuf*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct eap_hdr*) ;
 struct eap_hdr* FUNC_3 (size_t) ;
 int FUNC_4 (int ,char*,int *,size_t) ;
 int FUNC_5 (struct wpabuf*,struct eap_hdr*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct eap_sm *VAR_3,
        struct eap_peap_data *VAR_4,
        u8 VAR_5, int VAR_6)
{
 struct wpabuf *VAR_7, VAR_8;
 size_t VAR_9;
 struct eap_hdr *VAR_10;

 VAR_9 = sizeof(*VAR_10);
 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 VAR_10->code = VAR_6 ? VAR_1 : VAR_0;
 VAR_10->identifier = VAR_5;
 VAR_10->length = FUNC_1(VAR_9);

 FUNC_4(VAR_2, "EAP-PEAP: Encrypting Phase 2 data",
   (u8 *) VAR_10, VAR_9);

 FUNC_5(&VAR_8, VAR_10, VAR_9);
 VAR_7 = FUNC_0(VAR_3, &VAR_4->ssl, &VAR_8);
 FUNC_2(VAR_10);

 return VAR_7;
}
