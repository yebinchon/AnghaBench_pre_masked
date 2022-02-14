
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_tnc_data {int recommendation; int tncs; } ;
typedef enum tncs_process_res { ____Placeholder_tncs_process_res } tncs_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_0 (struct eap_tnc_data*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_5(struct eap_tnc_data *VAR_7, struct wpabuf *VAR_8)
{
 enum tncs_process_res VAR_9;

 VAR_9 = FUNC_1(VAR_7->tncs, FUNC_3(VAR_8),
        FUNC_4(VAR_8));
 switch (VAR_9) {
 case 131:
  FUNC_2(VAR_3, "EAP-TNC: TNCS allowed access");
  FUNC_0(VAR_7, VAR_6);
  VAR_7->recommendation = VAR_0;
  break;
 case 128:
  FUNC_2(VAR_3, "EAP-TNC: TNCS has no recommendation");
  FUNC_0(VAR_7, VAR_6);
  VAR_7->recommendation = VAR_5;
  break;
 case 130:
  FUNC_2(VAR_3, "EAP-TNC: TNCS requested isolation");
  FUNC_0(VAR_7, VAR_6);
  VAR_7->recommendation = VAR_2;
  break;
 case 129:
  FUNC_2(VAR_3, "EAP-TNC: TNCS rejected access");
  FUNC_0(VAR_7, VAR_6);
  VAR_7->recommendation = VAR_4;
  break;
 case 132:
  FUNC_2(VAR_3, "EAP-TNC: TNCS processing error");
  FUNC_0(VAR_7, VAR_1);
  break;
 default:
  break;
 }
}
