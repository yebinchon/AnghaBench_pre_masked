
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tls_data {int eap_type; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wpabuf* FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct eap_tls_data*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_sm *VAR_5,
        struct eap_tls_data *VAR_6, u8 VAR_7)
{
 struct wpabuf *VAR_8;

 VAR_8 = FUNC_0(VAR_6->eap_type, 1, VAR_1, VAR_7);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_4, "EAP-TLS: Failed to allocate memory for "
      "request");
  FUNC_1(VAR_6, VAR_3);
  return ((void*)0);
 }

 FUNC_3(VAR_8, VAR_2);

 FUNC_1(VAR_6, VAR_0);

 return VAR_8;
}
