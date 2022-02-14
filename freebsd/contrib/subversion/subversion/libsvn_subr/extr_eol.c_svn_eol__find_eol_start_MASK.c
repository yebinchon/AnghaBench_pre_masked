
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uintptr_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

char *
FUNC_0(char *VAR_4, apr_size_t VAR_5)
{
  for (; VAR_5 > 0; ++VAR_4, --VAR_5)
    {
      if (*VAR_4 == '\n' || *VAR_4 == '\r')
        return VAR_4;
    }

  return ((void*)0);
}
