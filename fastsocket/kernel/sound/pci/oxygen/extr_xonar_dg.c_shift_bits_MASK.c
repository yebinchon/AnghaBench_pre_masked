
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned int FUNC_0(unsigned int VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 if (VAR_1 < VAR_2)
  return (VAR_0 << (VAR_2 - VAR_1)) & VAR_3;
 else
  return (VAR_0 >> (VAR_1 - VAR_2)) & VAR_3;
}
