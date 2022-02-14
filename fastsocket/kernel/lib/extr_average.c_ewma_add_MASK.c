
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewma {unsigned long internal; unsigned long weight; unsigned long factor; } ;



struct ewma *FUNC_0(struct ewma *VAR_0, unsigned long VAR_1)
{
 VAR_0->internal = VAR_0->internal ?
  (((VAR_0->internal << VAR_0->weight) - VAR_0->internal) +
   (VAR_1 << VAR_0->factor)) >> VAR_0->weight :
  (VAR_1 << VAR_0->factor);
 return VAR_0;
}
