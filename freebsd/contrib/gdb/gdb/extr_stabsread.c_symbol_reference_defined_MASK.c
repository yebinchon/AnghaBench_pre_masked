
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;

int
FUNC_1 (char **VAR_0)
{
  char *VAR_1 = *VAR_0;
  int VAR_2 = 0;

  VAR_2 = FUNC_0 (&VAR_1);


  if (*VAR_1 == '=')
    {

      *VAR_0 = VAR_1 + 1;
      return VAR_2;
    }
  else
    {


      *VAR_0 = VAR_1;
      return -1;
    }
}
