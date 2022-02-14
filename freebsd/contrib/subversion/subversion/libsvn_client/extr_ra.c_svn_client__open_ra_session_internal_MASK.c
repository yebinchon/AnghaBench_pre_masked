
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int svn_wc_notify_t ;
typedef int svn_ra_session_t ;
struct TYPE_21__ {int tunnel_baton; int open_tunnel_func; int check_tunnel_func; int get_wc_contents; int get_client_string; int * cancel_func; TYPE_4__* progress_baton; int progress_func; int auth_baton; int * invalidate_wc_props; int * push_wc_prop; int * set_wc_prop; int * get_wc_prop; int open_tmp_file; } ;
typedef TYPE_1__ svn_ra_callbacks2_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct TYPE_23__ {int config; int notify_baton2; int (* notify_func2 ) (int ,int *,int *) ;int wc_ctx; int tunnel_baton; int open_tunnel_func; int check_tunnel_func; scalar_t__ cancel_func; int auth_baton; } ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_24__ {int * wcroot_abspath; int base_dir_abspath; int base_dir_isversioned; TYPE_3__* ctx; int const* commit_items; } ;
typedef TYPE_4__ callback_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_6 (int ,int *,int *) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (int ,int *,int ,char const*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (int *,char const*) ;
 int FUNC_12 (int *,char const*,void*) ;
 TYPE_2__* FUNC_13 (TYPE_1__**,int *) ;
 TYPE_2__* FUNC_14 (int **,char const**,char const*,char const*,TYPE_1__*,TYPE_4__*,int ,int *) ;
 TYPE_2__* FUNC_15 (int **,int ,char const*,int *,int *) ;
 TYPE_2__* FUNC_16 (int *,int *,int *,char const**,int ,char const*,int *,int *) ;
 int * FUNC_17 (char const*,int ,int *) ;
 int VAR_16 ;

svn_error_t *
FUNC_18(svn_ra_session_t **VAR_17,
                                     const char **VAR_18,
                                     const char *VAR_19,
                                     const char *VAR_20,
                                     const apr_array_header_t *VAR_21,
                                     svn_boolean_t VAR_22,
                                     svn_boolean_t VAR_23,
                                     svn_client_ctx_t *VAR_24,
                                     apr_pool_t *VAR_25,
                                     apr_pool_t *VAR_26)
{
  svn_ra_callbacks2_t *VAR_27;
  callback_baton_t *VAR_28 = FUNC_4(VAR_25, sizeof(*VAR_28));
  const char *VAR_29 = ((void*)0);

  FUNC_1(!VAR_22 || VAR_23);
  FUNC_1(!VAR_23 || VAR_20 != ((void*)0));
  FUNC_1(VAR_20 == ((void*)0)
                        || FUNC_7(VAR_20));

  FUNC_0(FUNC_13(&VAR_27, VAR_25));
  VAR_27->open_tmp_file = VAR_12;
  VAR_27->get_wc_prop = VAR_23 ? VAR_10 : ((void*)0);
  VAR_27->set_wc_prop = (VAR_22 && VAR_23)
                          ? VAR_15 : ((void*)0);
  VAR_27->push_wc_prop = VAR_21 ? VAR_14 : ((void*)0);
  VAR_27->invalidate_wc_props = (VAR_22 && VAR_23)
                                  ? VAR_11 : ((void*)0);
  VAR_27->auth_baton = VAR_24->auth_baton;
  VAR_27->progress_func = VAR_13;
  VAR_27->progress_baton = VAR_28;
  VAR_27->cancel_func = VAR_24->cancel_func ? VAR_7 : ((void*)0);
  VAR_27->get_client_string = VAR_8;
  if (VAR_20)
    VAR_27->get_wc_contents = VAR_9;
  VAR_27->check_tunnel_func = VAR_24->check_tunnel_func;
  VAR_27->open_tunnel_func = VAR_24->open_tunnel_func;
  VAR_27->tunnel_baton = VAR_24->tunnel_baton;

  VAR_28->commit_items = VAR_21;
  VAR_28->ctx = VAR_24;

  if (VAR_20 && (VAR_23 || VAR_22))
    {
      svn_error_t *VAR_30 = FUNC_16(((void*)0), ((void*)0), ((void*)0), &VAR_29,
                                                     VAR_24->wc_ctx,
                                                     VAR_20,
                                                     VAR_25,
                                                     VAR_26);

      if (VAR_30 && (VAR_30->apr_err == VAR_2
                  || VAR_30->apr_err == VAR_3
                  || VAR_30->apr_err == VAR_4))
        {
          FUNC_8(VAR_30);
          VAR_29 = ((void*)0);
        }
      else
        {
          FUNC_0(VAR_30);
          VAR_28->base_dir_isversioned = VAR_6;
        }
      VAR_28->base_dir_abspath = FUNC_5(VAR_25, VAR_20);
    }

  if (VAR_20)
    {
      svn_error_t *VAR_31 = FUNC_15(&VAR_28->wcroot_abspath,
                                            VAR_24->wc_ctx, VAR_20,
                                            VAR_25, VAR_26);

      if (VAR_31)
        {
          if (VAR_31->apr_err != VAR_2
              && VAR_31->apr_err != VAR_3
              && VAR_31->apr_err != VAR_4)
            return FUNC_10(VAR_31);

          FUNC_8(VAR_31);
          VAR_28->wcroot_abspath = ((void*)0);
        }
    }





  if (VAR_18)
    {
      apr_hash_t *VAR_32 = FUNC_3(VAR_26);
      int VAR_33 = VAR_0;

      *VAR_18 = ((void*)0);
      while (VAR_33--)
        {
          const char *VAR_34 = ((void*)0);



          FUNC_0(FUNC_14(VAR_17,
                               VAR_33 == 0 ? ((void*)0) : &VAR_34,
                               VAR_19, VAR_29, VAR_27, VAR_28, VAR_24->config,
                               VAR_25));


          if (! VAR_34)
            break;


          if (VAR_24->notify_func2 != ((void*)0))
            {
              svn_wc_notify_t *VAR_35 =
                FUNC_17(VAR_34,
                                         VAR_16,
                                         VAR_26);
              VAR_24->notify_func2(VAR_24->notify_baton2, VAR_35, VAR_26);
            }


          *VAR_18 = VAR_34;


          if (FUNC_11(VAR_32, VAR_34))
            return FUNC_9(VAR_1, ((void*)0),
                                     FUNC_2("Redirect cycle detected for URL '%s'"),
                                     VAR_34);


          FUNC_12(VAR_32, VAR_34, (void *)1);
          VAR_19 = VAR_34;
        }
    }
  else
    {
      FUNC_0(FUNC_14(VAR_17, ((void*)0), VAR_19,
                           VAR_29, VAR_27, VAR_28, VAR_24->config, VAR_25));
    }

  return VAR_5;
}
