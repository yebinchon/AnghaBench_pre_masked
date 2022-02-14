
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wpa_ctrl_req_type { ____Placeholder_wpa_ctrl_req_type } wpa_ctrl_req_type ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

const char * FUNC_1(enum wpa_ctrl_req_type VAR_1,
            const char *VAR_2,
            const char **VAR_3)
{
 const char *VAR_4 = ((void*)0);

 *VAR_3 = VAR_2;

 switch (VAR_1) {
 case 136:
  *VAR_3 = "Identity";
  VAR_4 = "IDENTITY";
  break;
 case 132:
  *VAR_3 = "Password";
  VAR_4 = "PASSWORD";
  break;
 case 135:
  *VAR_3 = "New Password";
  VAR_4 = "NEW_PASSWORD";
  break;
 case 131:
  *VAR_3 = "PIN";
  VAR_4 = "PIN";
  break;
 case 134:
  VAR_4 = "OTP";
  break;
 case 133:
  *VAR_3 = "Private key passphrase";
  VAR_4 = "PASSPHRASE";
  break;
 case 128:
  VAR_4 = "SIM";
  break;
 case 129:
  *VAR_3 = "PSK or passphrase";
  VAR_4 = "PSK_PASSPHRASE";
  break;
 case 130:
  *VAR_3 = "External server certificate validation";
  VAR_4 = "EXT_CERT_CHECK";
  break;
 default:
  break;
 }


 if (*VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0, "No message for request %d", VAR_1);
  VAR_4 = ((void*)0);
 }

 return VAR_4;
}
