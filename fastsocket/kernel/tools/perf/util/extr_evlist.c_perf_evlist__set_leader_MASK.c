
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evlist {int entries; scalar_t__ nr_entries; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct perf_evlist *VAR_0)
{
 if (VAR_0->nr_entries)
  FUNC_0(&VAR_0->entries);
}
