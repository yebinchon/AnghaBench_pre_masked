
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ config; } ;
struct perf_evsel {TYPE_1__ attr; } ;



__attribute__((used)) static inline bool FUNC_0(struct perf_evsel *VAR_0,
          struct perf_evsel *VAR_1)
{
 return (VAR_0->attr.type == VAR_1->attr.type) &&
        (VAR_0->attr.config == VAR_1->attr.config);
}
