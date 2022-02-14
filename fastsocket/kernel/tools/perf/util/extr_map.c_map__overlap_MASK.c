
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {scalar_t__ start; scalar_t__ end; } ;



int FUNC_0(struct map *VAR_0, struct map *VAR_1)
{
 if (VAR_0->start > VAR_1->start) {
  struct map *VAR_2 = VAR_0;
  VAR_0 = VAR_1;
  VAR_1 = VAR_2;
 }

 if (VAR_0->end > VAR_1->start)
  return 1;

 return 0;
}
