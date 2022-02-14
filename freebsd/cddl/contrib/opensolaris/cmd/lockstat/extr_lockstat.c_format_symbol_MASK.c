
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (uintptr_t,uintptr_t*,size_t*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 char** VAR_0 ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_1, uintptr_t VAR_2, int VAR_3)
{
 uintptr_t VAR_4;
 char *VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_0(VAR_2, &VAR_4, &VAR_6);

 if (VAR_3 && VAR_4 == 0)
  (void) FUNC_2(VAR_1, "%s[%ld]", VAR_5, (long)VAR_6);
 else if (VAR_4 == 0)
  (void) FUNC_2(VAR_1, "%s", VAR_5);
 else if (VAR_4 < 16 && FUNC_1(VAR_5, "cpu[", 4) == 0)



  (void) FUNC_2(VAR_1, "%s+%s", VAR_5, VAR_0[(int)VAR_4]);

 else if (VAR_4 <= VAR_6 || (VAR_4 < 256 && VAR_2 != VAR_4))
  (void) FUNC_2(VAR_1, "%s+0x%llx", VAR_5,
      (unsigned long long)VAR_4);
 else
  (void) FUNC_2(VAR_1, "0x%llx", (unsigned long long)VAR_2);
 return (VAR_1);
}
