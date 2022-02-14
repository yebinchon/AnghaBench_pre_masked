
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int list; int type; int name; int aliases; int format; int cpus; } ;
typedef int __u32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 scalar_t__ FUNC_7 (char*,int *) ;
 int VAR_2 ;
 int FUNC_8 (char*) ;
 struct perf_pmu* FUNC_9 (int) ;

__attribute__((used)) static struct perf_pmu *FUNC_10(char *VAR_3)
{
 struct perf_pmu *VAR_4;
 FUNC_1(VAR_1);
 FUNC_1(VAR_0);
 __u32 VAR_5;






 if (FUNC_6(VAR_3, &VAR_1))
  return ((void*)0);

 if (FUNC_4(VAR_3, &VAR_0))
  return ((void*)0);

 if (FUNC_7(VAR_3, &VAR_5))
  return ((void*)0);

 VAR_4 = FUNC_9(sizeof(*VAR_4));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->cpus = FUNC_5(VAR_3);

 FUNC_0(&VAR_4->format);
 FUNC_0(&VAR_4->aliases);
 FUNC_3(&VAR_1, &VAR_4->format);
 FUNC_3(&VAR_0, &VAR_4->aliases);
 VAR_4->name = FUNC_8(VAR_3);
 VAR_4->type = VAR_5;
 FUNC_2(&VAR_4->list, &VAR_2);
 return VAR_4;
}
