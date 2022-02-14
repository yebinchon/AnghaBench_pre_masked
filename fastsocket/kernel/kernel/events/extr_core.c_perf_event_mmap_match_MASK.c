
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_mmap_event {int dummy; } ;
struct TYPE_2__ {scalar_t__ mmap; scalar_t__ mmap_data; } ;
struct perf_event {scalar_t__ state; TYPE_1__ attr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct perf_event*) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_1,
       struct perf_mmap_event *VAR_2,
       int VAR_3)
{
 if (VAR_1->state < VAR_0)
  return 0;

 if (!FUNC_0(VAR_1))
  return 0;

 if ((!VAR_3 && VAR_1->attr.mmap_data) ||
     (VAR_3 && VAR_1->attr.mmap))
  return 1;

 return 0;
}
