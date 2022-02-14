
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_wsc_data {int state; int out_used; int * out_buf; int out_op_code; int wps; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;


 struct wpabuf* FUNC_0 (int ,int ) ;
 struct wpabuf* FUNC_1 (struct eap_wsc_data*,int ) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,struct eap_wsc_data*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int * FUNC_4 (int ,int *) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sm *VAR_2, void *VAR_3, u8 VAR_4)
{
 struct eap_wsc_data *VAR_5 = VAR_3;

 switch (VAR_5->state) {
 case 129:
  return FUNC_2(VAR_2, VAR_5, VAR_4);
 case 130:
  if (VAR_5->out_buf == ((void*)0)) {
   VAR_5->out_buf = FUNC_4(VAR_5->wps,
          &VAR_5->out_op_code);
   if (VAR_5->out_buf == ((void*)0)) {
    FUNC_3(VAR_1, "EAP-WSC: Failed to "
        "receive message from WPS");
    return ((void*)0);
   }
   VAR_5->out_used = 0;
  }

 case 128:
  return FUNC_1(VAR_5, VAR_4);
 case 131:
  return FUNC_0(VAR_4, VAR_0);
 default:
  FUNC_3(VAR_1, "EAP-WSC: Unexpected state %d in "
      "buildReq", VAR_5->state);
  return ((void*)0);
 }
}
