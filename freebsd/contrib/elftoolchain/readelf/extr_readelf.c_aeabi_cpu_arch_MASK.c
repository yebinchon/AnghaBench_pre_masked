
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int s_cpu_arch ;


 int FUNC_0 (char*,int,char*,int ) ;

__attribute__((used)) static const char *
FUNC_1(uint64_t VAR_0)
{
 static char VAR_1[32];

 switch (VAR_0) {
 case 0: return "Pre-V4";
 case 1: return "ARM v4";
 case 2: return "ARM v4T";
 case 3: return "ARM v5T";
 case 4: return "ARM v5TE";
 case 5: return "ARM v5TEJ";
 case 6: return "ARM v6";
 case 7: return "ARM v6KZ";
 case 8: return "ARM v6T2";
 case 9: return "ARM v6K";
 case 10: return "ARM v7";
 case 11: return "ARM v6-M";
 case 12: return "ARM v6S-M";
 case 13: return "ARM v7E-M";
 default:
  FUNC_0(VAR_1, sizeof(VAR_1),
      "Unknown (%ju)", (uintmax_t) VAR_0);
  return (VAR_1);
 }
}
