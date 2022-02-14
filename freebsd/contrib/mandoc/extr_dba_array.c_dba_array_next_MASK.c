
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dba_array {size_t ec; size_t eu; int* em; void** ep; } ;



void *
FUNC_0(struct dba_array *VAR_0)
{
 if (VAR_0->ec < VAR_0->eu)
  VAR_0->ec++;
 else
  VAR_0->ec = 0;
 while (VAR_0->ec < VAR_0->eu && VAR_0->em[VAR_0->ec] == -1)
  VAR_0->ec++;
 return VAR_0->ec < VAR_0->eu ? VAR_0->ep[VAR_0->ec] : ((void*)0);
}
