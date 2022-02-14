
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_alias {char const* pa_name; int * pa_alias; } ;
typedef scalar_t__ pmu_mfr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pmu_alias* VAR_3 ;
 scalar_t__ FUNC_0 () ;
 struct pmu_alias* VAR_4 ;
 scalar_t__ FUNC_1 (char const*,int *) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_5)
{
 pmu_mfr_t VAR_6;
 struct pmu_alias *VAR_7;
 struct pmu_alias *VAR_8;

 if ((VAR_6 = FUNC_0()) == VAR_2)
  return (VAR_5);
 if (VAR_6 == VAR_0)
  VAR_8 = VAR_3;
 else if (VAR_6 == VAR_1)
  VAR_8 = VAR_4;
 else
  return (VAR_5);

 for (VAR_7 = VAR_8; VAR_7->pa_alias != ((void*)0); VAR_7++)
  if (FUNC_1(VAR_5, VAR_7->pa_alias) == 0)
   return (VAR_7->pa_name);

 return (VAR_5);
}
