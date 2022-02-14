
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 long double VAR_1 ;

__attribute__((used)) static inline size_t
FUNC_0 (const void *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{





  const unsigned long VAR_5
    = (VAR_1 + 1.0L) * 0.6180339887498948482045868343656381177203L;

  const unsigned long VAR_6 = VAR_0 - VAR_4;

  return ((VAR_5 * (unsigned long) VAR_2) >> VAR_6) & (VAR_3 - 1);
}
