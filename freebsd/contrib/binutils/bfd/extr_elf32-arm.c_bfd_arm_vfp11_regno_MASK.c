
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_boolean ;



__attribute__((used)) static unsigned int
FUNC_0 (unsigned int VAR_0, bfd_boolean VAR_1, unsigned int VAR_2,
                     unsigned int VAR_3)
{
  if (VAR_1)
    return (((VAR_0 >> VAR_2) & 0xf) | (((VAR_0 >> VAR_3) & 1) << 4)) + 32;
  else
    return (((VAR_0 >> VAR_2) & 0xf) << 1) | ((VAR_0 >> VAR_3) & 1);
}
