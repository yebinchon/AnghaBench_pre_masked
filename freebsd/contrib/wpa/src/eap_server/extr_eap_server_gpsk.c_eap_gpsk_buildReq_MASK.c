
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_gpsk_data {int state; } ;




 int VAR_0 ;
 struct wpabuf* FUNC_0 (struct eap_sm*,struct eap_gpsk_data*,int ) ;
 struct wpabuf* FUNC_1 (struct eap_sm*,struct eap_gpsk_data*,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_3(struct eap_sm *VAR_1, void *VAR_2, u8 VAR_3)
{
 struct eap_gpsk_data *VAR_4 = VAR_2;

 switch (VAR_4->state) {
 case 129:
  return FUNC_0(VAR_1, VAR_4, VAR_3);
 case 128:
  return FUNC_1(VAR_1, VAR_4, VAR_3);
 default:
  FUNC_2(VAR_0, "EAP-GPSK: Unknown state %d in buildReq",
      VAR_4->state);
  break;
 }
 return ((void*)0);
}
