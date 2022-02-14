
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int gcov_unsigned_t ;


 unsigned int* FUNC_0 (int) ;
 int FUNC_1 (unsigned int*,char const*,unsigned int) ;
 unsigned int FUNC_2 (char const*) ;

void
FUNC_3 (const char *VAR_0)
{
  unsigned VAR_1 = 0;
  unsigned VAR_2 = 0;
  gcov_unsigned_t *VAR_3;

  if (VAR_0)
    {
      VAR_1 = FUNC_2 (VAR_0);
      VAR_2 = (VAR_1 + 4) >> 2;
    }

  VAR_3 = FUNC_0 (1 + VAR_2);

  VAR_3[0] = VAR_2;
  VAR_3[VAR_2] = 0;
  FUNC_1 (&VAR_3[1], VAR_0, VAR_1);
}
