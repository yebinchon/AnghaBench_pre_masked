
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;


 char* FUNC_0 (struct varobj*) ;

__attribute__((used)) static char *
FUNC_1 (struct varobj *VAR_0)
{
  char *VAR_1, *VAR_2;

  VAR_2 = FUNC_0 (VAR_0);


  VAR_1 = VAR_2;

  while (*VAR_1 != '\000')
    {
      if (*VAR_1 == '-')
 *VAR_1 = '.';
      VAR_1++;
    }

  return VAR_2;
}
