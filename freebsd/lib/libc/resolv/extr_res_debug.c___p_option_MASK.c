
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
 char* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

const char *
FUNC_1(u_long VAR_1) {
 char *VAR_2 = VAR_0;

 switch (VAR_1) {
 case 142: return "init";
 case 146: return "debug";
 case 147: return "aaonly(unimpl)";
 case 132: return "usevc";
 case 135: return "primry(unimpl)";
 case 143: return "igntc";
 case 134: return "recurs";
 case 145: return "defnam";
 case 133: return "styopn";
 case 144: return "dnsrch";
 case 141: return "insecure1";
 case 140: return "insecure2";
 case 139: return "noaliases";
 case 128: return "inet6";

 case 129: return "edns0";
 case 136: return "nsid";


 case 131: return "dname";


 case 130: return "dnssec";


 case 138: return "no-tld-query";


 case 137: return "no-nibble2";


 default: FUNC_0(VAR_2, "?0x%lx?", (u_long)VAR_1);
    return (VAR_2);
 }
}
