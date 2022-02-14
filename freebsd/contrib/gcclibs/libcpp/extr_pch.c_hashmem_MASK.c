
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashval_t ;



__attribute__((used)) static hashval_t
FUNC_0 (const void *VAR_0, size_t VAR_1)
{
  const unsigned char *VAR_2 = (const unsigned char *)VAR_0;
  size_t VAR_3;
  hashval_t VAR_4;

  VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    VAR_4 = VAR_4 * 67 - (*VAR_2++ - 113);
  return VAR_4;
}
