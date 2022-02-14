
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_wsc_data {int dummy; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wpabuf* FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_3(struct eap_sm *VAR_6,
        struct eap_wsc_data *VAR_7, u8 VAR_8)
{
 struct wpabuf *VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_1, 2,
       VAR_0, VAR_8);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_4, "EAP-WSC: Failed to allocate memory for "
      "request");
  return ((void*)0);
 }

 FUNC_1(VAR_3, "EAP-WSC: Send WSC/Start");
 FUNC_2(VAR_9, VAR_5);
 FUNC_2(VAR_9, 0);

 return VAR_9;
}
