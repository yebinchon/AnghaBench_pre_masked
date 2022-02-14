
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evlist {int * pollfd; int * mmap; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct perf_evlist *VAR_0)
{
 FUNC_0(VAR_0->mmap);
 FUNC_0(VAR_0->pollfd);
 VAR_0->mmap = ((void*)0);
 VAR_0->pollfd = ((void*)0);
}
