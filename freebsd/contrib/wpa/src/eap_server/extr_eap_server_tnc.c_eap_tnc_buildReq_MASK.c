
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tnc_data {int state; int out_used; int * out_buf; int tncs; } ;
struct eap_sm {int dummy; } ;




 int VAR_0 ;


 int VAR_1 ;



 int * FUNC_0 (struct eap_sm*,struct eap_tnc_data*) ;
 struct wpabuf* FUNC_1 (int ,int ) ;
 struct wpabuf* FUNC_2 (struct eap_tnc_data*,int ) ;
 int * FUNC_3 (struct eap_sm*,struct eap_tnc_data*) ;
 struct wpabuf* FUNC_4 (struct eap_sm*,struct eap_tnc_data*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_7(struct eap_sm *VAR_2, void *VAR_3, u8 VAR_4)
{
 struct eap_tnc_data *VAR_5 = VAR_3;

 switch (VAR_5->state) {
 case 129:
  FUNC_5(VAR_5->tncs);
  return FUNC_4(VAR_2, VAR_5, VAR_4);
 case 134:
  if (VAR_5->out_buf == ((void*)0)) {
   VAR_5->out_buf = FUNC_0(VAR_2, VAR_5);
   if (VAR_5->out_buf == ((void*)0)) {
    FUNC_6(VAR_1, "EAP-TNC: Failed to "
        "generate message");
    return ((void*)0);
   }
   VAR_5->out_used = 0;
  }
  return FUNC_2(VAR_5, VAR_4);
 case 130:
  if (VAR_5->out_buf == ((void*)0)) {
   VAR_5->out_buf = FUNC_3(VAR_2, VAR_5);
   if (VAR_5->out_buf == ((void*)0)) {
    FUNC_6(VAR_1, "EAP-TNC: Failed to "
        "generate recommendation message");
    return ((void*)0);
   }
   VAR_5->out_used = 0;
  }
  return FUNC_2(VAR_5, VAR_4);
 case 128:
  return FUNC_2(VAR_5, VAR_4);
 case 131:
  return FUNC_1(VAR_4, VAR_0);
 case 133:
 case 132:
  return ((void*)0);
 }

 return ((void*)0);
}
