
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
 case 134: return "conf-req";
 case 137: return "conf-ack";
 case 136: return "conf-nak";
 case 135: return "conf-rej";
 case 128: return "term-req";
 case 129: return "term-ack";
 case 138: return "code-rej";
 case 130: return "proto-rej";
 case 131: return "echo-req";
 case 132: return "echo-reply";
 case 133: return "discard-req";
 }
 FUNC_0 (VAR_1, sizeof(VAR_1), "cp/0x%x", VAR_0);
 return VAR_1;
}
