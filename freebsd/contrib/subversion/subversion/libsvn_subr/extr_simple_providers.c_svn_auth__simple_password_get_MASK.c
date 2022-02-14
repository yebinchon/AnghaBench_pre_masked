
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

svn_error_t *
FUNC_2(svn_boolean_t *VAR_5,
                              const char **VAR_6,
                              apr_hash_t *VAR_7,
                              const char *VAR_8,
                              const char *VAR_9,
                              apr_hash_t *VAR_10,
                              svn_boolean_t VAR_11,
                              apr_pool_t *VAR_12)
{
  svn_string_t *VAR_13;

  *VAR_5 = VAR_0;

  VAR_13 = FUNC_1(VAR_7, VAR_2);
  if (VAR_13 && VAR_9 && FUNC_0(VAR_13->data, VAR_9) == 0)
    {
      VAR_13 = FUNC_1(VAR_7, VAR_1);
      if (VAR_13 && VAR_13->data)
        {
          *VAR_6 = VAR_13->data;
          *VAR_5 = VAR_4;
        }
    }

  return VAR_3;
}
