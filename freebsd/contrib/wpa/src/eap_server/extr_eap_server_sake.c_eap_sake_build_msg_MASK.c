
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sake_hdr {int subtype; int session_id; int version; } ;
struct eap_sake_data {int session_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wpabuf* FUNC_0 (int ,int ,size_t,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct eap_sake_hdr* FUNC_2 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_3(struct eap_sake_data *VAR_5,
       u8 VAR_6, size_t VAR_7, u8 VAR_8)
{
 struct eap_sake_hdr *VAR_9;
 struct wpabuf *VAR_10;
 size_t VAR_11;

 VAR_11 = sizeof(struct eap_sake_hdr) + VAR_7;

 VAR_10 = FUNC_0(VAR_3, VAR_2, VAR_11,
       VAR_0, VAR_6);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_4, "EAP-SAKE: Failed to allocate memory "
      "request");
  return ((void*)0);
 }

 VAR_9 = FUNC_2(VAR_10, sizeof(*VAR_9));
 VAR_9->version = VAR_1;
 VAR_9->session_id = VAR_5->session_id;
 VAR_9->subtype = VAR_8;

 return VAR_10;
}
