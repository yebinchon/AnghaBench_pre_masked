
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_2 ;

const char *
FUNC_1(uint32_t VAR_3)
{
 const char *VAR_4;

 switch (VAR_3) {
 case 135:
  VAR_4 = FUNC_0(VAR_1, "No error");
  break;

 case 138:
  VAR_4 = FUNC_0(VAR_1, "Invalid argument");
  break;

 case 128:
  VAR_4 = FUNC_0(VAR_1, "Unknown flag passed");
  break;

 case 133:
  VAR_4 = FUNC_0(VAR_1, "Out of memory");
  break;

 case 140:
  VAR_4 = FUNC_0(VAR_1, "Callback-initiated failure");
  break;

 case 134:
  VAR_4 = FUNC_0(VAR_1, "Operation not supported");
  break;

 case 139:
  VAR_4 = FUNC_0(VAR_1, "No value provided");
  break;

 case 130:
  VAR_4 = FUNC_0(VAR_1, "Value too small");
  break;

 case 132:
  VAR_4 = FUNC_0(VAR_1, "Value too large");
  break;

 case 137:
  VAR_4 = FUNC_0(VAR_1,
      "Value contains unexpected character");
  break;

 case 136:
  VAR_4 = FUNC_0(VAR_1,
      "Value contains digit not in base");
  break;

 case 131:
  VAR_4 = FUNC_0(VAR_1, "Underlying system error");
  break;

 case 129:
  VAR_4 = FUNC_0(VAR_1, "Error status not known");
  break;

 default:
  VAR_2 = VAR_0;
  VAR_4 = ((void*)0);
  break;
 }
 return (VAR_4);
}
