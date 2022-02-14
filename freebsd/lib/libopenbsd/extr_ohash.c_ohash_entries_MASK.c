
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohash {unsigned int total; unsigned int deleted; } ;



unsigned int
FUNC_0(struct ohash *VAR_0)
{
 return VAR_0->total - VAR_0->deleted;
}
