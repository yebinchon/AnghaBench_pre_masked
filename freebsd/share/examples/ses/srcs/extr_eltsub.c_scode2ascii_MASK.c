
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static char *
FUNC_1(u_char VAR_0)
{
 static char VAR_1[32];
 switch (VAR_0 & 0xf) {
 case 128:
  FUNC_0(VAR_1, "Unsupported");
  break;
 case 131:
  FUNC_0(VAR_1, "OK");
  break;
 case 136:
  FUNC_0(VAR_1, "Critical");
  break;
 case 134:
  FUNC_0(VAR_1, "Noncritical");
  break;
 case 129:
  FUNC_0(VAR_1, "Unrecoverable");
  break;
 case 132:
  FUNC_0(VAR_1, "Not Installed");
  break;
 case 130:
  FUNC_0(VAR_1, "Unknown");
  break;
 case 133:
  FUNC_0(VAR_1, "Not Available");
  break;
 case 135:
  FUNC_0(VAR_1, "No Access Allowed");
  break;
 default:
  FUNC_0(VAR_1, "<Status 0x%x>", VAR_0 & 0xf);
  break;
 }
 return (VAR_1);
}
