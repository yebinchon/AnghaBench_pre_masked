
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,int ) ;

__attribute__((used)) static inline size_t
FUNC_1 (size_t VAR_2)
{
  VAR_2 = FUNC_0 (VAR_2, VAR_0);
  if (VAR_2 >= VAR_1 * sizeof (size_t))
    return ~(size_t) 0;
  else
    return ((size_t) 1 << VAR_2) - 1;
}
