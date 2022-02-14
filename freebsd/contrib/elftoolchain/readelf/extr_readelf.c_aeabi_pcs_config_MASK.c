
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int s_pcs ;


 int FUNC_0 (char*,int,char*,int ) ;

__attribute__((used)) static const char *
FUNC_1(uint64_t VAR_0)
{
 static char VAR_1[32];

 switch (VAR_0) {
 case 0: return "None";
 case 1: return "Bare platform";
 case 2: return "Linux";
 case 3: return "Linux DSO";
 case 4: return "Palm OS 2004";
 case 5: return "Palm OS (future)";
 case 6: return "Symbian OS 2004";
 case 7: return "Symbian OS (future)";
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "Unknown (%ju)",
      (uintmax_t) VAR_0);
  return (VAR_1);
 }
}
