
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evlist {int nr_entries; int entries; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*,int *) ;

void FUNC_1(struct perf_evlist *VAR_0,
       struct list_head *VAR_1,
       int VAR_2)
{
 FUNC_0(VAR_1, &VAR_0->entries);
 VAR_0->nr_entries += VAR_2;
}
