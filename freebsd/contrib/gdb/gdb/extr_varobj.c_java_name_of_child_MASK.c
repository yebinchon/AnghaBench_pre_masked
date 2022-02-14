
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;


 char* FUNC_0 (struct varobj*,int) ;

__attribute__((used)) static char *
FUNC_1 (struct varobj *VAR_0, int VAR_1)
{
  char *VAR_2, *VAR_3;

  VAR_2 = FUNC_0 (VAR_0, VAR_1);

  VAR_3 = VAR_2;

  while (*VAR_3 != '\000')
    {
      if (*VAR_3 == '.')
 *VAR_3 = '-';
      VAR_3++;
    }

  return VAR_2;
}
