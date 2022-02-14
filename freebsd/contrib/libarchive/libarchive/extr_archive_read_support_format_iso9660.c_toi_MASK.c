
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int
FUNC_0(const void *VAR_0, int VAR_1)
{
 const unsigned char *VAR_2 = (const unsigned char *)VAR_0;
 if (VAR_1 > 1)
  return VAR_2[0] + 256 * FUNC_0(VAR_2 + 1, VAR_1 - 1);
 if (VAR_1 == 1)
  return VAR_2[0];
 return (0);
}
