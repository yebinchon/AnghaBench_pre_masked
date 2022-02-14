
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
typedef int buf ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(u_short VAR_0, u_char VAR_1)
{
 static char VAR_2[12];
 switch (VAR_0) {
 case 129:
  switch (VAR_1) {
  case 136: return "challenge";
  case 134: return "response";
  case 133: return "success";
  case 135: return "failure";
  }
 case 128:
  switch (VAR_1) {
  case 130: return "req";
  case 132: return "ack";
  case 131: return "nak";
  }
 }
 FUNC_0 (VAR_2, sizeof(VAR_2), "auth/0x%x", VAR_1);
 return VAR_2;
}
