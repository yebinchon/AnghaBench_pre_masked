
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int buf ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(u_char VAR_0)
{
 static char VAR_1[12];
 switch (VAR_0) {
 case 130: return "mru";
 case 133: return "async-map";
 case 132: return "auth-proto";
 case 128: return "qual-proto";
 case 131: return "magic";
 case 129: return "proto-comp";
 case 134: return "addr-comp";
 }
 FUNC_0 (VAR_1, sizeof(VAR_1), "lcp/0x%x", VAR_0);
 return VAR_1;
}
