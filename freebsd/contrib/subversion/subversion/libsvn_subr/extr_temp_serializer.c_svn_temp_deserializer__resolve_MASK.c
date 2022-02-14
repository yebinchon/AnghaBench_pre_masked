
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;


 int FUNC_0 (int) ;

void
FUNC_1(const void *VAR_0, void **VAR_1)
{


  apr_size_t VAR_2 = *(apr_size_t *)VAR_1;
  if (VAR_2)
    {

      const char *VAR_3 = (const char *)VAR_0 + VAR_2;





      FUNC_0(VAR_3 > (const char *)VAR_0);


      (*(const char **)VAR_1) = VAR_3;
    }
  else
    {


      *VAR_1 = ((void*)0);
    }
}
