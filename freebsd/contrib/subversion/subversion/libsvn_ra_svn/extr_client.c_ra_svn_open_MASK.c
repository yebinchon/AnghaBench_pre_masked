
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_ra_svn__session_baton_t ;
struct TYPE_9__ {int * priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_10__ {int tunnel_baton; int (* check_tunnel_func ) (int ,char const*) ;scalar_t__ open_tunnel_func; } ;
typedef TYPE_2__ svn_ra_callbacks2_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int svn_auth_baton_t ;
struct TYPE_11__ {int hostinfo; } ;
typedef TYPE_3__ apr_uri_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char const*,char const***,int *,int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int **,char const*,TYPE_3__*,char const*,char const**,int *,TYPE_2__ const*,void*,int *,int *,int *) ;
 int FUNC_5 (char const*,char const**,int *) ;
 int FUNC_6 (char const*,TYPE_3__*,int *) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int *,int ,int *) ;
 int * FUNC_9 (int ,int *,int ,int ) ;
 int * FUNC_10 (int *,int ) ;
 char* FUNC_11 (int ,int *) ;
 int * FUNC_12 (int *) ;

__attribute__((used)) static svn_error_t *FUNC_13(svn_ra_session_t *VAR_6,
                                const char **VAR_7,
                                const char *VAR_8,
                                const svn_ra_callbacks2_t *VAR_9,
                                void *VAR_10,
                                svn_auth_baton_t *VAR_11,
                                apr_hash_t *VAR_12,
                                apr_pool_t *VAR_13,
                                apr_pool_t *VAR_14)
{
  apr_pool_t *VAR_15 = FUNC_12(VAR_13);
  svn_ra_svn__session_baton_t *VAR_16;
  const char *VAR_17, **VAR_18;
  apr_uri_t VAR_19;
  svn_config_t *VAR_20, *VAR_21;


  if (VAR_7)
    *VAR_7 = ((void*)0);

  FUNC_0(FUNC_6(VAR_8, &VAR_19, VAR_15));

  FUNC_5(VAR_8, &VAR_17, VAR_13);




  if (VAR_17
      && (!VAR_9->open_tunnel_func
          || (VAR_9->check_tunnel_func && VAR_9->open_tunnel_func
              && !VAR_9->check_tunnel_func(VAR_9->tunnel_baton,
                                               VAR_17))))
    {
      const char *VAR_22;

      VAR_22 = FUNC_11(VAR_19.hostinfo, VAR_13);

      if (!FUNC_3(VAR_22))
        return FUNC_9(VAR_4, ((void*)0), FUNC_1("Invalid host '%s'"),
                                 VAR_19.hostinfo);

      FUNC_0(FUNC_2(VAR_17, VAR_22, &VAR_18,
                                VAR_12, VAR_13));
    }
  else
    VAR_18 = ((void*)0);

  VAR_21 = VAR_12
               ? FUNC_10(VAR_12, VAR_2)
               : ((void*)0);
  VAR_20 = VAR_12 ? FUNC_10(VAR_12, VAR_3) : ((void*)0);
  FUNC_8(VAR_11,
                         VAR_0, VAR_21);
  FUNC_8(VAR_11,
                         VAR_1, VAR_20);



  FUNC_0(FUNC_4(&VAR_16, VAR_8, &VAR_19, VAR_17, VAR_18, VAR_12,
                       VAR_9, VAR_10,
                       VAR_11, VAR_15, VAR_14));
  VAR_6->priv = VAR_16;

  return VAR_5;
}
