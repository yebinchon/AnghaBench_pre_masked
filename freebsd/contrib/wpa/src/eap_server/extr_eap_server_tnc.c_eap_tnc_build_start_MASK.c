
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tnc_data {int dummy; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct wpabuf* FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (struct eap_tnc_data*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_sm *VAR_8,
        struct eap_tnc_data *VAR_9, u8 VAR_10)
{
 struct wpabuf *VAR_11;

 VAR_11 = FUNC_0(VAR_5, VAR_4, 1, VAR_1,
       VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_7, "EAP-TNC: Failed to allocate memory for "
      "request");
  FUNC_1(VAR_9, VAR_6);
  return ((void*)0);
 }

 FUNC_3(VAR_11, VAR_2 | VAR_3);

 FUNC_1(VAR_9, VAR_0);

 return VAR_11;
}
