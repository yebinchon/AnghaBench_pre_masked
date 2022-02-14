
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0 (uint32_t VAR_0)
{
  uint32_t VAR_1 = 0;
  unsigned char *VAR_2 = (unsigned char *) &VAR_1;
  union {
    uint32_t i;
    unsigned char b[4];
  } VAR_3;

  VAR_3.i = VAR_0;
  VAR_2[0] = VAR_3.b[3];
  VAR_2[1] = VAR_3.b[2];
  VAR_2[2] = VAR_3.b[1];
  VAR_2[3] = VAR_3.b[0];

  return VAR_1;
}
