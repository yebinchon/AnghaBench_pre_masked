
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _uw ;



__attribute__((used)) static inline _uw
FUNC_0 (const _uw *VAR_0)
{
  _uw VAR_1;

  VAR_1 = *VAR_0;

  if (VAR_1 & (1 << 30))
    VAR_1 |= 1u << 31;

  return VAR_1 + (_uw) VAR_0;
}
