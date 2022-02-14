
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_6(char *VAR_0, char *VAR_1, size_t VAR_2)
{
 if (FUNC_3(VAR_0, "SIM-REQ-AUTH ", 13) == 0)
  return FUNC_5(VAR_0 + 13, VAR_1, VAR_2);

 if (FUNC_3(VAR_0, "GSM-AUTH-REQ ", 13) == 0)
  return FUNC_2(VAR_0 + 13, VAR_1, VAR_2);

 if (FUNC_3(VAR_0, "AKA-REQ-AUTH ", 13) == 0)
  return FUNC_1(VAR_0 + 13, VAR_1, VAR_2);

 if (FUNC_3(VAR_0, "AKA-AUTS ", 9) == 0)
  return FUNC_0(VAR_0 + 9, VAR_1, VAR_2);

 FUNC_4("Unknown request: %s\n", VAR_0);
 return -1;
}
