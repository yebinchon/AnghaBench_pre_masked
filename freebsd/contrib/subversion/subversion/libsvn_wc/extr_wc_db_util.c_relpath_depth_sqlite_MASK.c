
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__value_t ;
typedef int svn_sqlite__context_t ;
typedef int svn_error_t ;
typedef int apr_int64_t ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_sqlite__context_t *VAR_2,
                     int VAR_3,
                     svn_sqlite__value_t *VAR_4[],
                     void *VAR_5)
{
  const char *VAR_6 = ((void*)0);
  apr_int64_t VAR_7;

  if (VAR_3 == 1 && FUNC_3(VAR_4[0]) == VAR_1)
    VAR_6 = FUNC_2(VAR_4[0]);
  if (!VAR_6)
    {
      FUNC_1(VAR_2);
      return VAR_0;
    }

  VAR_7 = *VAR_6 ? 1 : 0;
  while (*VAR_6)
    {
      if (*VAR_6 == '/')
        ++VAR_7;
      ++VAR_6;
    }
  FUNC_0(VAR_2, VAR_7);

  return VAR_0;
}
