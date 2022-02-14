
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_30__ {void* client_receiver_baton; int (* client_receiver_func ) (void*,char const*,int *,int *) ;} ;
typedef TYPE_1__ wc_info_receiver_baton_t ;
typedef int svn_ra_session_t ;
struct TYPE_31__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int svn_lock_t ;
struct TYPE_32__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct TYPE_33__ {scalar_t__ kind; } ;
typedef TYPE_4__ svn_dirent_t ;
typedef int svn_depth_t ;
typedef int (* svn_client_info_receiver2_t ) (void*,char const*,int *,int *) ;
typedef int svn_client_info2_t ;
struct TYPE_34__ {int wc_ctx; int cancel_baton; int cancel_func; } ;
typedef TYPE_5__ svn_client_ctx_t ;
struct TYPE_35__ {int rev; int url; } ;
typedef TYPE_6__ svn_client__pathrev_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int **,TYPE_4__*,int *,TYPE_6__*,int *) ;
 int FUNC_5 (int *,int ,scalar_t__,scalar_t__,int const*,int (*) (void*,char const*,int *,int *),void*,TYPE_5__*,int *) ;
 int FUNC_6 (int *,TYPE_6__*,char*,int (*) (void*,char const*,int *,int *),void*,int ,TYPE_5__*,int *,int *) ;
 int FUNC_7 (scalar_t__*,int ,int ,int *,TYPE_5__*,int *) ;
 int FUNC_8 (int **,TYPE_6__**,char const*,int *,TYPE_2__ const*,TYPE_2__ const*,TYPE_5__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_3__* FUNC_10 (int ,int *,int ,int ,int ) ;
 TYPE_3__* FUNC_11 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* FUNC_12 (int *,int **,char*,int *) ;
 TYPE_3__* FUNC_13 (int *,int **,char*,int ,int *) ;
 int FUNC_14 (int *,char*,int ,TYPE_4__**,int *) ;
 char* FUNC_15 (int ,int *) ;
 int FUNC_16 (int **,int ,char const*,int *,int *) ;
 int FUNC_17 (int ,char const*,int ,scalar_t__,scalar_t__,int const*,int ,TYPE_1__*,int ,int ,int *) ;
 int VAR_8 ;

svn_error_t *
FUNC_18(const char *VAR_9,
                 const svn_opt_revision_t *VAR_10,
                 const svn_opt_revision_t *VAR_11,
                 svn_depth_t VAR_12,
                 svn_boolean_t VAR_13,
                 svn_boolean_t VAR_14,
                 svn_boolean_t VAR_15,
                 const apr_array_header_t *VAR_16,
                 svn_client_info_receiver2_t VAR_17,
                 void *VAR_18,
                 svn_client_ctx_t *VAR_19,
                 apr_pool_t *VAR_20)
{
  svn_ra_session_t *VAR_21;
  svn_client__pathrev_t *VAR_22;
  svn_lock_t *VAR_23;
  svn_boolean_t VAR_24;
  const char *VAR_25;
  svn_dirent_t *VAR_26;
  svn_client_info2_t *VAR_27;
  svn_error_t *VAR_28;

  if (VAR_12 == VAR_4)
    VAR_12 = VAR_3;

  if ((VAR_11 == ((void*)0)
       || VAR_11->kind == VAR_7)
      && (VAR_10 == ((void*)0)
          || VAR_10->kind == VAR_7))
    {

      wc_info_receiver_baton_t VAR_29;

      VAR_29.client_receiver_func = VAR_17;
      VAR_29.client_receiver_baton = VAR_18;
      FUNC_1(FUNC_17(VAR_19->wc_ctx, VAR_9, VAR_12,
                               VAR_13, VAR_14, VAR_16,
                               VAR_8, &VAR_29,
                               VAR_19->cancel_func, VAR_19->cancel_baton, VAR_20));

      if (VAR_15 && FUNC_0(VAR_12))
        {
          apr_hash_t *VAR_30;

          FUNC_1(FUNC_16(&VAR_30,
                                                  VAR_19->wc_ctx, VAR_9,
                                                  VAR_20, VAR_20));

          FUNC_1(FUNC_5(VAR_30,
                                   VAR_12, VAR_13, VAR_14,
                                   VAR_16,
                                   VAR_17, VAR_18, VAR_19, VAR_20));
        }

      return VAR_2;
    }






  FUNC_1(FUNC_8(&VAR_21, &VAR_22,
                                            VAR_9, ((void*)0), VAR_10,
                                            VAR_11, VAR_19, VAR_20));
  VAR_25 = FUNC_15(VAR_22->url, VAR_20);


  FUNC_1(FUNC_14(VAR_21, "", VAR_22->rev, &VAR_26, VAR_20));

  if (! VAR_26)
    return FUNC_10(VAR_0, ((void*)0),
                             FUNC_2("URL '%s' non-existent in revision %ld"),
                             VAR_22->url, VAR_22->rev);
  FUNC_1(FUNC_7(&VAR_24, VAR_22->url, VAR_22->rev,
                                VAR_21, VAR_19, VAR_20));
  if (VAR_24)
    {
      VAR_28 = FUNC_12(VAR_21, &VAR_23, "", VAR_20);




      if (VAR_28 && VAR_28->apr_err == VAR_1)
        {
          FUNC_9(VAR_28);
          VAR_23 = ((void*)0);
        }
      else if (VAR_28)
        return FUNC_11(VAR_28);
    }
  else
    VAR_23 = ((void*)0);


  FUNC_1(FUNC_4(&VAR_27, VAR_26, VAR_23, VAR_22, VAR_20));
  FUNC_1(VAR_17(VAR_18, VAR_25, VAR_27, VAR_20));


  if (VAR_12 > VAR_3 && (VAR_26->kind == VAR_5))
    {
      apr_hash_t *VAR_31;

      if (VAR_10->kind == VAR_6)
        {
          VAR_28 = FUNC_13(VAR_21, &VAR_31, "", VAR_12,
                                  VAR_20);


          if (VAR_28 && VAR_28->apr_err == VAR_1)
            {
              FUNC_9(VAR_28);
              VAR_31 = FUNC_3(VAR_20);
            }
          else if (VAR_28)
            return FUNC_11(VAR_28);
        }
      else
        VAR_31 = FUNC_3(VAR_20);

      FUNC_1(FUNC_6(VAR_21, VAR_22, "",
                            VAR_17, VAR_18,
                            VAR_12, VAR_19, VAR_31, VAR_20));
    }

  return VAR_2;
}
