
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {char const* username; int may_save; } ;
typedef TYPE_2__ svn_auth_cred_simple_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 int * FUNC_1 (int **,int ,char const*,char const*,int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void **VAR_5,
                     void **VAR_6,
                     void *VAR_7,
                     apr_hash_t *VAR_8,
                     const char *VAR_9,
                     apr_pool_t *VAR_10)
{
  const char *VAR_11 = FUNC_3(VAR_8,
                                         VAR_1);
  const char *VAR_12 = FUNC_3(VAR_8,
                                       VAR_2);
  svn_boolean_t VAR_13 = !! VAR_12;
  svn_error_t *VAR_14;


  if (! VAR_12)
    {
      apr_hash_t *VAR_15 = ((void*)0);






      VAR_14 = FUNC_1(&VAR_15, VAR_0,
                                      VAR_9, VAR_11, VAR_10);
      FUNC_2(VAR_14);
      if (! VAR_14 && VAR_15)
        {
          svn_string_t *VAR_16 = FUNC_3(VAR_15,
                                            VAR_3);
          if (VAR_16 && VAR_16->data)
            VAR_12 = VAR_16->data;
        }
    }


  if (! VAR_12)
    VAR_12 = FUNC_4(VAR_10);

  if (VAR_12)
    {
      svn_auth_cred_simple_t *VAR_17 = FUNC_0(VAR_10, sizeof(*VAR_17));
      VAR_17->username = VAR_12;
      VAR_17->may_save = VAR_13;
      *VAR_5 = VAR_17;
    }
  else
    *VAR_5 = ((void*)0);

  *VAR_6 = ((void*)0);

  return VAR_4;
}
