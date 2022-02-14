
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errbuf ;
 int VAR_0 ;
 int FUNC_0 (char*,int,char const*,int ) ;
 int FUNC_1 (int ) ;

const char *
FUNC_2(int VAR_1)
{
 static char VAR_2[128];
 const char *VAR_3;

 switch (VAR_1) {
  case 135:
   return "device in use";
  case 133:
   return "";
  case 132:
   VAR_3 = "open error: %s";
   break;
  case 130:
   VAR_3 = "read error: %s";
   break;
  case 136:
   VAR_3 = "creat error: %s";
   break;
  case 128:
   VAR_3 = "write error: %s";
   break;
  case 134:
   VAR_3 = "link error: %s";
   break;
  case 129:
   VAR_3 = "too many tries: %s";
   break;
  case 131:
   VAR_3 = "not locking process: %s";
   break;
  default:
   VAR_3 = "undefined error: %s";
   break;
 }

 (void)FUNC_0(VAR_2, sizeof(VAR_2), VAR_3, FUNC_1(VAR_0));
 return VAR_2;
}
