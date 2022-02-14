
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_abi ;
 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_0)
{
 static char VAR_1[32];

 switch(VAR_0) {
 case 134: return "NONE";
 case 139: return "HPUX";
 case 135: return "NetBSD";
 case 140: return "GNU";
 case 138: return "HURD";
 case 146: return "86OPEN";
 case 130: return "Solaris";
 case 145: return "AIX";
 case 137: return "IRIX";
 case 141: return "FreeBSD";
 case 128: return "TRU64";
 case 136: return "MODESTO";
 case 132: return "OpenBSD";
 case 131: return "OpenVMS";
 case 133: return "NSK";
 case 142: return "CloudABI";
 case 143: return "ARM EABI";
 case 144: return "ARM";
 case 129: return "StandAlone";
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "<unknown: %#x>", VAR_0);
  return (VAR_1);
 }
}
