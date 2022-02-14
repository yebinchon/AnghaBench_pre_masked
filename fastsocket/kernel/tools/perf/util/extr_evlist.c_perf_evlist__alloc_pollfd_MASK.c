
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pollfd {int dummy; } ;
struct perf_evlist {int nr_entries; int * pollfd; TYPE_1__* threads; int cpus; } ;
struct TYPE_2__ {int nr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct perf_evlist *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->cpus) * VAR_1->threads->nr * VAR_1->nr_entries;
 VAR_1->pollfd = FUNC_1(sizeof(struct pollfd) * VAR_2);
 return VAR_1->pollfd != ((void*)0) ? 0 : -VAR_0;
}
