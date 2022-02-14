
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char*,char**) ;
 unsigned long FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (char*,int *,int ) ;

__attribute__((used)) static inline int FUNC_5(char *VAR_0, uint64_t *VAR_1,
      uint8_t *VAR_2)
{
 char VAR_3[24];
 char *VAR_4, *VAR_5;
 unsigned long VAR_6;

 FUNC_1(VAR_3, VAR_0, 23);
 VAR_3[23] = '\0';
 VAR_4 = FUNC_2(VAR_3, ":", &VAR_5);
 if (!VAR_4)
  return 1;
 if (VAR_1)
  *VAR_1 = FUNC_4(VAR_4, ((void*)0), 0);

 VAR_4 = FUNC_2(((void*)0), ":", &VAR_5);
 if (!VAR_4)
  return 1;
 if (VAR_2) {
  VAR_6 = FUNC_3(VAR_4, ((void*)0), 0);
  FUNC_0(VAR_6 < 0x100);
  *VAR_2 = (uint8_t) VAR_6;
 }

 return 0;
}
