
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned
FUNC_0 (const char *VAR_1)
{
  unsigned VAR_2, VAR_3;

  for (VAR_2 = VAR_3 = 0;*VAR_1++ != '\0'; VAR_3++)
    VAR_2 += ((unsigned char) *VAR_1 << (VAR_3 % VAR_0));
  return VAR_2;
}
