
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef int buf ;







 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(u_short VAR_0)
{
 static char VAR_1[12];
 switch (VAR_0) {
 case 129: return "lcp";
 case 131: return "ipcp";
 case 128: return "pap";
 case 132: return "chap";
 case 130: return "ipv6cp";
 }
 FUNC_0(VAR_1, sizeof(VAR_1), "proto/0x%x", (unsigned)VAR_0);
 return VAR_1;
}
