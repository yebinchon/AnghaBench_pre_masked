
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage {scalar_t__ ru_maxrss; long ru_first; long ru_last; } ;



void
FUNC_0(struct rusage *VAR_0, struct rusage *VAR_1)
{
 long *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_0->ru_maxrss < VAR_1->ru_maxrss)
  VAR_0->ru_maxrss = VAR_1->ru_maxrss;
 VAR_2 = &VAR_0->ru_first;
 VAR_3 = &VAR_1->ru_first;
 for (VAR_4 = &VAR_0->ru_last - &VAR_0->ru_first; VAR_4 >= 0; VAR_4--)
  *VAR_2++ += *VAR_3++;
}
