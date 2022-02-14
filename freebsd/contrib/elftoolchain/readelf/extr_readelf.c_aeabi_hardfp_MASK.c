
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int s_hfp ;


 int FUNC_0 (char*,int,char*,int ) ;

__attribute__((used)) static const char *
FUNC_1(uint64_t VAR_0)
{
 static char VAR_1[32];

 switch (VAR_0) {
 case 0: return "Tag_FP_arch";
 case 1: return "only SP";
 case 2: return "only DP";
 case 3: return "both SP and DP";
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "Unknown (%ju)",
      (uintmax_t) VAR_0);
  return (VAR_1);
 }
}
