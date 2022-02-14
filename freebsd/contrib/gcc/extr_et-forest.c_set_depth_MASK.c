
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_occ {int depth; int min; } ;



__attribute__((used)) static inline void
FUNC_0 (struct et_occ *VAR_0, int VAR_1)
{
  if (!VAR_0)
    return;

  VAR_0->min += VAR_1 - VAR_0->depth;
  VAR_0->depth = VAR_1;
}
