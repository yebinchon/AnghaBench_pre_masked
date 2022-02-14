
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmu_mfr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,size_t*,void*,int ) ;

__attribute__((used)) static pmu_mfr_t
FUNC_4(void)
{
 char *VAR_3;
 size_t VAR_4;
 pmu_mfr_t VAR_5;

 if (FUNC_3("kern.hwpmc.cpuid", (void *)((void*)0), &VAR_4,
     (void *)((void*)0), 0) == -1)
  return (VAR_2);
 if ((VAR_3 = FUNC_1(VAR_4 + 1)) == ((void*)0))
  return (VAR_2);
 if (FUNC_3("kern.hwpmc.cpuid", VAR_3, &VAR_4,
  (void *)((void*)0), 0) == -1) {
  FUNC_0(VAR_3);
  return (VAR_2);
 }
 if (FUNC_2(VAR_3, "AuthenticAMD") != ((void*)0))
  VAR_5 = VAR_0;
 else if (FUNC_2(VAR_3, "GenuineIntel") != ((void*)0))
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_2;
 FUNC_0(VAR_3);
 return (VAR_5);
}
