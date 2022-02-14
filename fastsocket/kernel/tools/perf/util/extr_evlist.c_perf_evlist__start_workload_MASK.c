
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cork_fd; } ;
struct perf_evlist {TYPE_1__ workload; } ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(struct perf_evlist *VAR_0)
{
 if (VAR_0->workload.cork_fd > 0) {



  return FUNC_0(VAR_0->workload.cork_fd);
 }

 return 0;
}
