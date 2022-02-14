
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_aka_data {int state; scalar_t__ auts_reported; } ;




 int VAR_0 ;


 struct wpabuf* FUNC_0 (struct eap_sm*,struct eap_aka_data*,int ) ;
 struct wpabuf* FUNC_1 (struct eap_sm*,struct eap_aka_data*,int ) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,struct eap_aka_data*,int ) ;
 struct wpabuf* FUNC_3 (struct eap_sm*,struct eap_aka_data*,int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sm *VAR_1, void *VAR_2, u8 VAR_3)
{
 struct eap_aka_data *VAR_4 = VAR_2;

 VAR_4->auts_reported = 0;
 switch (VAR_4->state) {
 case 130:
  return FUNC_1(VAR_1, VAR_4, VAR_3);
 case 131:
  return FUNC_0(VAR_1, VAR_4, VAR_3);
 case 128:
  return FUNC_3(VAR_1, VAR_4, VAR_3);
 case 129:
  return FUNC_2(VAR_1, VAR_4, VAR_3);
 default:
  FUNC_4(VAR_0, "EAP-AKA: Unknown state %d in "
      "buildReq", VAR_4->state);
  break;
 }
 return ((void*)0);
}
