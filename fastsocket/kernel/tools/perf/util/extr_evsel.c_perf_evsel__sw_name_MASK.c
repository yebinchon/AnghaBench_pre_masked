
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct perf_evsel {TYPE_1__ attr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct perf_evsel*,char*,size_t) ;
 int FUNC_2 (char*,size_t,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct perf_evsel *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1, VAR_2, "%s", FUNC_0(VAR_0->attr.config));
 return VAR_3 + FUNC_1(VAR_0, VAR_1 + VAR_3, VAR_2 - VAR_3);
}
