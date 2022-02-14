
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long
FUNC_0(const void *VAR_0, int VAR_1)
{
  const unsigned char *VAR_2, *VAR_3;
  unsigned long VAR_4;

  VAR_2 = (const unsigned char *)VAR_0;
  VAR_3 = VAR_2+VAR_1;
  for (VAR_4=0; VAR_2< VAR_3;++VAR_2)
  {
    VAR_4 *=16777619;
    VAR_4 ^= *VAR_2;
  }
  return (VAR_4);
}
