
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char**,char const*,char const*,int,int *) ;
 char* FUNC_1 (char*,int *) ;
 int * FUNC_2 (scalar_t__,int *) ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_7,
                         const char **VAR_8,
                         const char *VAR_9,
                         const char *VAR_10,
                         apr_pool_t *VAR_11)
{
  apr_status_t VAR_12;
  char *VAR_13;

  *VAR_7 = VAR_4;
  if (VAR_8)
    *VAR_8 = ((void*)0);

  VAR_12 = FUNC_0(&VAR_13,
                              VAR_9,
                              VAR_10,
                              VAR_1
                              | VAR_2,
                              VAR_11);

  if (VAR_12 == VAR_3)
    {
      if (VAR_8)
        *VAR_8 = FUNC_1(VAR_13, VAR_11);
      *VAR_7 = VAR_6;
      return VAR_5;
    }
  else if (VAR_12 == VAR_0)
    {
      *VAR_7 = VAR_4;
      return VAR_5;
    }

  return FUNC_2(VAR_12, ((void*)0));
}
