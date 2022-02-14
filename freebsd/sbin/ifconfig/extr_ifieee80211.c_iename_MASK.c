
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iename_buf ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_0)
{
 static char VAR_1[64];
 switch (VAR_0) {
 case 144: return " FHPARMS";
 case 148: return " CFPARMS";
 case 131: return " TIM";
 case 142:return " IBSSPARMS";
 case 150: return " BSSLOAD";
 case 147:return " CHALLENGE";
 case 136: return " PWRCNSTR";
 case 137: return " PWRCAP";
 case 128: return " TPCREQ";
 case 129: return " TPCREP";
 case 132: return " SUPPCHAN";
 case 146: return " CSA";
 case 140: return " MEASREQ";
 case 141: return " MEASREP";
 case 135: return " QUIET";
 case 143: return " IBSSDFS";
 case 134:
     return " RESERVED_47";
 case 139:
     return " MOBILITY_DOMAIN";
 case 133:
     return " RRM_ENCAPS";
 case 138:
     return " OVERLAP_BSS";
 case 130: return " TPC";
 case 149: return " CCKM";
 case 145: return " EXTCAP";
 }
 FUNC_0(VAR_1, sizeof(VAR_1), " UNKNOWN_ELEMID_%d",
     VAR_0);
 return (const char *) VAR_1;
}
