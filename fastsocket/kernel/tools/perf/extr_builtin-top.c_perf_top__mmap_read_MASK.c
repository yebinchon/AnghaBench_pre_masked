
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_top {TYPE_1__* evlist; } ;
struct TYPE_2__ {int nr_mmaps; } ;


 int FUNC_0 (struct perf_top*,int) ;

__attribute__((used)) static void FUNC_1(struct perf_top *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->evlist->nr_mmaps; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
