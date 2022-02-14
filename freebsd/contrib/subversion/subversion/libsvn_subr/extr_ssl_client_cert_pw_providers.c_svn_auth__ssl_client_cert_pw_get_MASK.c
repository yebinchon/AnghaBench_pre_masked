
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
 int * VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *,int ) ;

svn_error_t *
FUNC_1(svn_boolean_t *VAR_4,
                                 const char **VAR_5,
                                 apr_hash_t *VAR_6,
                                 const char *VAR_7,
                                 const char *VAR_8,
                                 apr_hash_t *VAR_9,
                                 svn_boolean_t VAR_10,
                                 apr_pool_t *VAR_11)
{
  svn_string_t *VAR_12;
  VAR_12 = FUNC_0(VAR_6, VAR_1);
  if (VAR_12 && VAR_12->data)
    {
      *VAR_5 = VAR_12->data;
      *VAR_4 = VAR_3;
      return VAR_2;
    }
  *VAR_4 = VAR_0;
  return VAR_2;
}
