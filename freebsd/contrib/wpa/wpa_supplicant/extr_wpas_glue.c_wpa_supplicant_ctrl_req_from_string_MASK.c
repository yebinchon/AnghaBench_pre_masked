
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wpa_ctrl_req_type { ____Placeholder_wpa_ctrl_req_type } wpa_ctrl_req_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

enum wpa_ctrl_req_type FUNC_1(const char *VAR_10)
{
 if (FUNC_0(VAR_10, "IDENTITY") == 0)
  return VAR_0;
 else if (FUNC_0(VAR_10, "PASSWORD") == 0)
  return VAR_4;
 else if (FUNC_0(VAR_10, "NEW_PASSWORD") == 0)
  return VAR_1;
 else if (FUNC_0(VAR_10, "PIN") == 0)
  return VAR_5;
 else if (FUNC_0(VAR_10, "OTP") == 0)
  return VAR_2;
 else if (FUNC_0(VAR_10, "PASSPHRASE") == 0)
  return VAR_3;
 else if (FUNC_0(VAR_10, "SIM") == 0)
  return VAR_8;
 else if (FUNC_0(VAR_10, "PSK_PASSPHRASE") == 0)
  return VAR_7;
 else if (FUNC_0(VAR_10, "EXT_CERT_CHECK") == 0)
  return VAR_6;
 return VAR_9;
}
