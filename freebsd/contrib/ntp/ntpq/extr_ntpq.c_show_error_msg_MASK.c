
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int associd_t ;
 char* VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_1(
 int VAR_3,
 associd_t VAR_4
 )
{
 if (VAR_1 > 1)
  FUNC_0(VAR_2, "server=%s ", VAR_0);

 switch (VAR_3) {

 case 136:
  FUNC_0(VAR_2,
      "***Server reports a bad format request packet\n");
  break;

 case 133:
  FUNC_0(VAR_2,
      "***Server disallowed request (authentication?)\n");
  break;

 case 135:
  FUNC_0(VAR_2,
      "***Server reports a bad opcode in request\n");
  break;

 case 137:
  FUNC_0(VAR_2,
      "***Association ID %d unknown to server\n",
      VAR_4);
  break;

 case 132:
  FUNC_0(VAR_2,
      "***A request variable unknown to the server\n");
  break;

 case 134:
  FUNC_0(VAR_2,
      "***Server indicates a request variable was bad\n");
  break;

 case 128:
  FUNC_0(VAR_2,
      "***Server returned an unspecified error\n");
  break;

 case 130:
  FUNC_0(VAR_2, "***Request timed out\n");
  break;

 case 131:
  FUNC_0(VAR_2,
      "***Response from server was incomplete\n");
  break;

 case 129:
  FUNC_0(VAR_2,
      "***Buffer size exceeded for returned data\n");
  break;

 default:
  FUNC_0(VAR_2,
      "***Server returns unknown error code %d\n",
      VAR_3);
 }
}
