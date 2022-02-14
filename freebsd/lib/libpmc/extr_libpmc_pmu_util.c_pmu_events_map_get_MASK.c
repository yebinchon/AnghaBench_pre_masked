
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pmu_events_map {char* cpuid; } ;
struct TYPE_3__ {size_t rm_eo; size_t rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 struct pmu_events_map* VAR_1 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int,TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,size_t*,void*,int ) ;

__attribute__((used)) static const struct pmu_events_map *
FUNC_7(const char *VAR_2)
{
 regex_t VAR_3;
 regmatch_t VAR_4[1];
 size_t VAR_5, VAR_6;
 char VAR_7[64];
 int VAR_8;
 const struct pmu_events_map *VAR_9;

 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_7, VAR_2, 64);
 } else {
  if (FUNC_6("kern.hwpmc.cpuid", (void *)((void*)0), &VAR_5,
      (void *)((void*)0), 0) == -1)
   return (((void*)0));
  if (FUNC_6("kern.hwpmc.cpuid", VAR_7, &VAR_5,
      (void *)((void*)0), 0) == -1)
   return (((void*)0));
 }
 for (VAR_9 = VAR_1; VAR_9->cpuid != ((void*)0); VAR_9++) {
  if (FUNC_2(&VAR_3, VAR_9->cpuid, VAR_0) != 0) {
   FUNC_1("regex '%s' failed to compile, ignoring\n",
       VAR_9->cpuid);
   continue;
  }
  VAR_8 = FUNC_3(&VAR_3, VAR_7, 1, VAR_4, 0);
  FUNC_4(&VAR_3);
  if (VAR_8 == 0) {
   VAR_6 = VAR_4[0].rm_eo - VAR_4[0].rm_so;
   if(VAR_6 == FUNC_5(VAR_7))
    return (VAR_9);
  }
 }
 return (((void*)0));
}
