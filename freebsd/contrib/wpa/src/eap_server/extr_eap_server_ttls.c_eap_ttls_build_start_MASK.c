
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ttls_data {int ttls_version; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wpabuf* FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (struct eap_ttls_data*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_sm *VAR_7,
         struct eap_ttls_data *VAR_8, u8 VAR_9)
{
 struct wpabuf *VAR_10;

 VAR_10 = FUNC_0(VAR_3, VAR_2, 1,
       VAR_0, VAR_9);
 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_5, "EAP-TTLS: Failed to allocate memory for"
      " request");
  FUNC_1(VAR_8, VAR_4);
  return ((void*)0);
 }

 FUNC_3(VAR_10, VAR_1 | VAR_8->ttls_version);

 FUNC_1(VAR_8, VAR_6);

 return VAR_10;
}
