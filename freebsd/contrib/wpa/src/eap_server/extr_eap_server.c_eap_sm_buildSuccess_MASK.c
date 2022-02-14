
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_hdr {int length; int identifier; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 struct wpabuf* FUNC_2 (int) ;
 struct eap_hdr* FUNC_3 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_sm *VAR_2, u8 VAR_3)
{
 struct wpabuf *VAR_4;
 struct eap_hdr *VAR_5;
 FUNC_1(VAR_1, "EAP: Building EAP-Success (id=%d)", VAR_3);

 VAR_4 = FUNC_2(sizeof(*VAR_5));
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_5 = FUNC_3(VAR_4, sizeof(*VAR_5));
 VAR_5->code = VAR_0;
 VAR_5->identifier = VAR_3;
 VAR_5->length = FUNC_0(sizeof(*VAR_5));

 return VAR_4;
}
