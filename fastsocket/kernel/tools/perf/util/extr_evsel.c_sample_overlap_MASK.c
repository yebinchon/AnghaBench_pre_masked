
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
union perf_event {TYPE_1__ header; } ;
typedef int u64 ;



__attribute__((used)) static bool FUNC_0(const union perf_event *VAR_0,
      const void *VAR_1, u64 VAR_2)
{
 const void *VAR_3 = VAR_0;

 if (VAR_1 + VAR_2 > VAR_3 + VAR_0->header.size)
  return 1;

 return 0;
}
