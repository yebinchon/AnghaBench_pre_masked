
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGEN_FIELDS ;
typedef int CGEN_CPU_DESC ;


 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int,char const**,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char*) ;

const char *
FUNC_5 (CGEN_CPU_DESC VAR_0, int VAR_1,
       const char ** VAR_2, CGEN_FIELDS * VAR_3)
{
  const char * VAR_4 = ((void*)0);
  char *VAR_5 = 0, *VAR_6 = 0;
  const char **VAR_7 = 0;


  VAR_5 = FUNC_0 (*VAR_2, 1);


  VAR_6 = VAR_5;
  VAR_7 = (const char **)(&VAR_5);

  VAR_4 = FUNC_2 (VAR_0, VAR_1, VAR_7, VAR_3);


  if (FUNC_3 (VAR_5) == 0)
    *VAR_2 += FUNC_3 (*VAR_2);

  else
    {
      if (FUNC_4 (*VAR_2, VAR_5))

 *VAR_2 = FUNC_4 (*VAR_2, VAR_5);
      else

 *VAR_2 += (VAR_5 - VAR_6);
    }

  if (VAR_6)
    FUNC_1 (VAR_6);

  return VAR_4;
}
