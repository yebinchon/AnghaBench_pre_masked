
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned
FUNC_0(const char *VAR_0)
{
  unsigned VAR_1;
  const unsigned char *VAR_2 = (const unsigned char *)VAR_0;
  VAR_1 = *VAR_2 << 7;
  while (*VAR_2) {
    VAR_1 = (1000003*VAR_1) ^ *VAR_2++;
  }

  VAR_1 ^= (unsigned)(VAR_2-(const unsigned char*)VAR_0);
  return VAR_1;
}
