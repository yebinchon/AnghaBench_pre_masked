
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned
FUNC_0(unsigned VAR_0, unsigned VAR_1)
{
 unsigned VAR_2, VAR_3;

 VAR_3 = (1u << 3);
 for (VAR_2 = 0; VAR_0; VAR_0--, VAR_3 >>= 1)
  if (VAR_1 & VAR_3)
   VAR_2++;
 return (VAR_2);
}
