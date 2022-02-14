
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int hashval_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static hashval_t
FUNC_0 (const void *VAR_1)
{
  unsigned VAR_2, VAR_3;
  const char *VAR_4 = *(const char *const *) VAR_1;

  for (VAR_2 = VAR_3 = 0; *VAR_4++ != '\0'; VAR_3++)
    VAR_2 += ((unsigned char) *VAR_4 << (VAR_3 % VAR_0));
  return VAR_2;
}
