
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int s_mips_abi_fp ;


 int FUNC_0 (char*,int,char*,int ) ;

__attribute__((used)) static const char *
FUNC_1(uint64_t VAR_0)
{
 static char VAR_1[64];

 switch (VAR_0) {
 case 0: return "N/A";
 case 1: return "Hard float (double precision)";
 case 2: return "Hard float (single precision)";
 case 3: return "Soft float";
 case 4: return "64-bit float (-mips32r2 -mfp64)";
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "Unknown(%ju)",
      (uintmax_t) VAR_0);
  return (VAR_1);
 }
}
