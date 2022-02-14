
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char*,int) ;
 char* FUNC_1 (int,int) ;

__attribute__((used)) static char *
FUNC_2 (unsigned char *VAR_0, int *VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4 = *VAR_1 / 8;
  char *VAR_5;
  int VAR_6 = VAR_2;

  if (VAR_6 >= VAR_3)
    return "*undefined*";

  if (VAR_6 == 0)
    {

      VAR_6 = VAR_0[VAR_4++];
      (*VAR_1) += 8;
    }

  *VAR_1 += VAR_6 * 8;
  VAR_5 = FUNC_1 (VAR_6 + 1, 1);
  FUNC_0 (VAR_5, VAR_0 + VAR_4, VAR_6);
  VAR_5[VAR_6] = 0;

  return VAR_5;
}
