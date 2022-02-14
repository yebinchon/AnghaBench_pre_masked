
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int ret ;






 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *FUNC_1(u32 VAR_0)
{
 static char VAR_1[32];

 switch (VAR_0) {
 case 128:
  return "Newton";
 case 131:
  return "Edison";
 case 130:
  return "Morse";
 case 129:
  return "MorseQ";
 }

 FUNC_0(VAR_1, sizeof(VAR_1), "Unknown %d", VAR_0);
 return VAR_1;
}
