
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_9__ {int may_save; void* password; void* username; } ;
typedef TYPE_2__ svn_auth_cred_simple_t ;
struct TYPE_10__ {int prompt_baton; int (* prompt_func ) (TYPE_2__**,int ,char const*,char const*,scalar_t__,int *) ;} ;
typedef TYPE_3__ simple_prompt_provider_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int * VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_2__**,int ,char const*,char const*,scalar_t__,int *) ;
 char* FUNC_4 (int *,char const*,int ,int *) ;
 int * FUNC_5 (int **,int ,char const*,char const*,int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *,int ) ;
 char* FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_auth_cred_simple_t **VAR_10,
                        simple_prompt_provider_baton_t *VAR_11,
                        apr_hash_t *VAR_12,
                        const char *VAR_13,
                        svn_boolean_t VAR_14,
                        svn_boolean_t VAR_15,
                        apr_pool_t *VAR_16)
{
  const char *VAR_17 = ((void*)0);
  const char *VAR_18 = ((void*)0);

  *VAR_10 = ((void*)0);



  if (VAR_14)
    {
      VAR_17 = FUNC_7(VAR_12,
                                       VAR_4);


      if (! VAR_17)
        {
          const char *VAR_19 = FUNC_7(VAR_12,
                                                 VAR_2);
          apr_hash_t *VAR_20 = ((void*)0);
          svn_string_t *VAR_21;
          svn_error_t *VAR_22;

          VAR_22 = FUNC_5(&VAR_20, VAR_0,
                                          VAR_13, VAR_19, VAR_16);
          FUNC_6(VAR_22);
          if (! VAR_22 && VAR_20)
            {
              VAR_21 = FUNC_7(VAR_20, VAR_6);
              if (VAR_21 && VAR_21->data)
                VAR_17 = VAR_21->data;
            }
        }


      if (! VAR_17)
        {
          svn_config_t *VAR_23 = FUNC_7(VAR_12,
                                            VAR_1);
          const char *VAR_24 = FUNC_7(VAR_12,
                                                   VAR_5);
          VAR_17 =
            FUNC_4(VAR_23, VAR_24,
                                          VAR_7,
                                          ((void*)0));
        }


      if (! VAR_17)
        VAR_17 = FUNC_8(VAR_16);

      VAR_18 = FUNC_7(VAR_12,
                                       VAR_3);
    }







  if (VAR_17 && VAR_18)
    {
      *VAR_10 = FUNC_1(VAR_16, sizeof(**VAR_10));
      (*VAR_10)->username = FUNC_2(VAR_16, VAR_17);
      (*VAR_10)->password = FUNC_2(VAR_16, VAR_18);
      (*VAR_10)->may_save = VAR_9;
    }
  else
    {
      FUNC_0(VAR_11->prompt_func(VAR_10, VAR_11->prompt_baton, VAR_13,
                              VAR_17, VAR_15, VAR_16));
    }

  return VAR_8;
}
