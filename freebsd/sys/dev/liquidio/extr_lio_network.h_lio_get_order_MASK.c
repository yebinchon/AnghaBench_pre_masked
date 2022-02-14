
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(unsigned long VAR_1)
{
 int VAR_2;

 VAR_1 = (VAR_1 - 1) >> VAR_0;
 VAR_2 = 0;
 while (VAR_1) {
  VAR_2++;
  VAR_1 >>= 1;
 }

 return (VAR_2);
}
