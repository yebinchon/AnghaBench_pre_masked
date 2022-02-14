
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;

__attribute__((used)) static inline size_t
FUNC_0(size_t VAR_1) {






 if (VAR_1 == 0U)
  return (VAR_0);
 return ((VAR_1 + VAR_0 - 1) & (~(VAR_0 - 1)));
}
