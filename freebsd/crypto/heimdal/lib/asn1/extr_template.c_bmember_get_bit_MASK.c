
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(const unsigned char *VAR_0, void *VAR_1,
  unsigned int VAR_2, size_t VAR_3)
{
    unsigned int VAR_4 = VAR_2 % 8;
    if ((*VAR_0 >> (7 - VAR_4)) & 1) {



 *(unsigned int *)VAR_1 |= (1 << VAR_2);

    }
}
