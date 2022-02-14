
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {unsigned int mask; unsigned int shift; } ;
typedef unsigned int hashvalue_type ;



__attribute__((used)) static unsigned int
FUNC_0(struct slabhash* VAR_0, hashvalue_type VAR_1)
{
 return ((VAR_1 & VAR_0->mask) >> VAR_0->shift);
}
