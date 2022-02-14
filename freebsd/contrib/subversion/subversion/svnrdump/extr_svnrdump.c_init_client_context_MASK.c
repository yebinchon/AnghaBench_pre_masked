
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_config_t ;
struct TYPE_6__ {int cancel_baton; int cancel_func; int auth_baton; int config; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {int hostname; } ;
typedef TYPE_2__ apr_uri_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char const*,TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__**,int *,int *) ;
 int FUNC_3 (int ,int *,char*,char*) ;
 int FUNC_4 (int *,int ,char const*,char const*,char const*,int ,int ,int ,int ,int ,int ,int *,int ,int ,int *) ;
 int FUNC_5 (char const*,int *) ;
 char* FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (int *,char const*,int *) ;
 int FUNC_8 (int *,char const*,int ,int ) ;
 int FUNC_9 (int *,char const*,int ,int) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_client_ctx_t **VAR_9,
                    svn_boolean_t VAR_10,
                    const char *VAR_11,
                    const char *VAR_12,
                    const char *VAR_13,
                    const char *VAR_14,
                    svn_boolean_t VAR_15,
                    svn_boolean_t VAR_16,
                    svn_boolean_t VAR_17,
                    svn_boolean_t VAR_18,
                    svn_boolean_t VAR_19,
                    svn_boolean_t VAR_20,
                    apr_array_header_t *VAR_21,
                    apr_pool_t *VAR_22)
{
  svn_client_ctx_t *VAR_23 = ((void*)0);
  svn_config_t *VAR_24, *VAR_25;

  FUNC_0(FUNC_11(VAR_22));

  FUNC_0(FUNC_5(VAR_13, VAR_22));
  FUNC_0(FUNC_2(&VAR_23, ((void*)0), VAR_22));

  FUNC_0(FUNC_7(&(VAR_23->config), VAR_13, VAR_22));

  if (VAR_21)
    FUNC_0(FUNC_3(VAR_23->config, VAR_21,
                                              "svnrdump: ", "--config-option"));

  VAR_24 = FUNC_10(VAR_23->config, VAR_0);
  VAR_25 = FUNC_10(VAR_23->config, VAR_1);
  FUNC_8(VAR_25, VAR_4,
                      VAR_2, VAR_7);
  FUNC_9(VAR_25, VAR_4,
                       VAR_3, 2);
  if (VAR_25)
    {
      apr_status_t VAR_26;
      apr_uri_t VAR_27;

      VAR_26 = FUNC_1(VAR_22, VAR_14, &VAR_27);
      if (! VAR_26)
        {
          const char *VAR_28;

          VAR_28 = FUNC_6(VAR_25, VAR_27.hostname,
                                               VAR_5, VAR_22);
          if (VAR_28)
            {
              FUNC_8(VAR_25, VAR_28,
                                  VAR_2, VAR_7);
              FUNC_9(VAR_25, VAR_28,
                                   VAR_3, 2);
            }
        }
    }


  VAR_23->cancel_func = VAR_8;


  FUNC_0(FUNC_4(&(VAR_23->auth_baton), VAR_10,
                                         VAR_11, VAR_12, VAR_13,
                                         VAR_15, VAR_16,
                                         VAR_17, VAR_18,
                                         VAR_19,
                                         VAR_20,
                                         VAR_24, VAR_23->cancel_func,
                                         VAR_23->cancel_baton, VAR_22));
  *VAR_9 = VAR_23;
  return VAR_6;
}
