
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_7__ ;
typedef struct TYPE_52__ TYPE_6__ ;
typedef struct TYPE_51__ TYPE_5__ ;
typedef struct TYPE_50__ TYPE_4__ ;
typedef struct TYPE_49__ TYPE_3__ ;
typedef struct TYPE_48__ TYPE_2__ ;
typedef struct TYPE_47__ TYPE_1__ ;


struct TYPE_47__ {int revision; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_48__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_49__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_50__ {TYPE_3__* (* close_edit ) (void*,int *) ;} ;
typedef TYPE_4__ svn_delta_editor_t ;
typedef int svn_client_status_func_t ;
struct TYPE_51__ {int wc_ctx; int cancel_baton; int cancel_func; int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int config; } ;
typedef TYPE_5__ svn_client_ctx_t ;
typedef void* svn_boolean_t ;
struct status_baton {char const* anchor_abspath; char const* anchor_relpath; void* deleted_in_repos; int wc_ctx; int * changelist_hash; void* real_status_baton; int real_status_func; } ;
struct TYPE_52__ {scalar_t__ depth; int * pool; TYPE_5__* ctx; void* set_locks_baton; int ancestor; int wrapped_report_baton; int wrapped_reporter; } ;
typedef TYPE_6__ report_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_53__ {scalar_t__ nelts; } ;
typedef TYPE_7__ apr_array_header_t ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*) ;
 TYPE_3__* FUNC_4 (TYPE_5__*,int *,scalar_t__,void*,void*,void*,void*,TYPE_7__ const*,char const*,char const*,int ,void*,int *) ;
 int VAR_9 ;
 TYPE_3__* FUNC_5 (void*,int *) ;
 int FUNC_6 (int ,TYPE_1__*,int *) ;
 TYPE_3__* FUNC_7 (int *,int *,int ,char const*,int *,TYPE_2__ const*,int *) ;
 TYPE_3__* FUNC_8 (int **,int *,char const*,char const*,int *,void*,void*,TYPE_5__*,int *,int *) ;
 TYPE_3__* FUNC_9 (char const**,char const*,TYPE_5__*,int *,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 char* FUNC_10 (char const*,int *) ;
 char* FUNC_11 (char const*,int *) ;
 TYPE_3__* FUNC_12 (char const**,char const*,int *) ;
 scalar_t__ FUNC_13 (char const*) ;
 char const* FUNC_14 (char const*,int *) ;
 int FUNC_15 (TYPE_3__*) ;
 TYPE_3__* FUNC_16 (int ,int *,int ,char const*) ;
 TYPE_3__* FUNC_17 (int **,TYPE_7__ const*,int *) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_18 (char const*) ;
 TYPE_3__* FUNC_19 (int *,char*,int ,scalar_t__*,int *) ;
 TYPE_3__* FUNC_20 (int *,int *,int *,char const*,int ,scalar_t__,TYPE_4__ const*,void*,int *) ;
 TYPE_3__* FUNC_21 (int *,void**,int ,int *) ;
 TYPE_3__* FUNC_22 (int **,int ,char const*,int *,int *) ;
 TYPE_3__* FUNC_23 (TYPE_4__ const**,void**,void**,int *,int ,char const*,char const*,scalar_t__,void*,void*,void*,void*,void*,TYPE_7__*,int ,struct status_baton*,int ,int ,int *,int *) ;
 TYPE_3__* FUNC_24 (void**,int ,char const*,int *) ;
 TYPE_3__* FUNC_25 (int ,char const*,int *,TYPE_6__*,void*,scalar_t__,int,int,void*,int ,int ,int *,int *,int *) ;
 TYPE_1__* FUNC_26 (char const*,int ,int *) ;
 TYPE_3__* FUNC_27 (TYPE_7__**,int ,int *) ;
 int VAR_18 ;
 TYPE_3__* FUNC_28 (scalar_t__*,int ,char const*,void*,void*,int *) ;
 TYPE_3__* FUNC_29 (int ,char const*,scalar_t__,void*,void*,void*,TYPE_7__*,int ,struct status_baton*,int ,int ,int *) ;
 int VAR_19 ;

svn_error_t *
FUNC_30(svn_revnum_t *VAR_20,
                   svn_client_ctx_t *VAR_21,
                   const char *VAR_22,
                   const svn_opt_revision_t *VAR_23,
                   svn_depth_t VAR_24,
                   svn_boolean_t VAR_25,
                   svn_boolean_t VAR_26,
                   svn_boolean_t VAR_27,
                   svn_boolean_t VAR_28,
                   svn_boolean_t VAR_29,
                   svn_boolean_t VAR_30,
                   const apr_array_header_t *VAR_31,
                   svn_client_status_func_t VAR_32,
                   void *VAR_33,
                   apr_pool_t *VAR_34)
{
  struct status_baton VAR_35;
  const char *VAR_36, *VAR_37;
  const char *VAR_38;
  const char *VAR_39;
  apr_array_header_t *VAR_40;
  svn_error_t *VAR_41;
  apr_hash_t *VAR_42 = ((void*)0);



  if (!VAR_26)
    VAR_27 = VAR_8;

  if (FUNC_18(VAR_22))
    return FUNC_16(VAR_2, ((void*)0),
                             FUNC_2("'%s' is not a local path"), VAR_22);

  if (VAR_31 && VAR_31->nelts)
    FUNC_1(FUNC_17(&VAR_42, VAR_31, VAR_34));

  if (VAR_20)
    *VAR_20 = VAR_5;

  VAR_35.real_status_func = VAR_32;
  VAR_35.real_status_baton = VAR_33;
  VAR_35.deleted_in_repos = VAR_0;
  VAR_35.changelist_hash = VAR_42;
  VAR_35.wc_ctx = VAR_21->wc_ctx;

  FUNC_1(FUNC_12(&VAR_38, VAR_22, VAR_34));

  if (VAR_26)
    {



      svn_node_kind_t VAR_43;

      FUNC_1(FUNC_28(&VAR_43, VAR_21->wc_ctx, VAR_38,
                                VAR_8, VAR_0, VAR_34));


      if (VAR_43 == VAR_14)
        {
          VAR_37 = VAR_38;
          VAR_39 = "";
          VAR_36 = VAR_22;
        }
      else
        {
          VAR_37 = FUNC_11(VAR_38, VAR_34);
          VAR_39 = FUNC_10(VAR_38, ((void*)0));
          VAR_36 = FUNC_11(VAR_22, VAR_34);

          if (VAR_43 == VAR_15)
            {
              if (VAR_24 == VAR_10)
                VAR_24 = VAR_11;
            }
          else
            {
              VAR_41 = FUNC_28(&VAR_43, VAR_21->wc_ctx, VAR_37,
                                      VAR_0, VAR_0, VAR_34);

              FUNC_15(VAR_41);

              if (VAR_41 || VAR_43 != VAR_14)
                {
                  return FUNC_16(VAR_4, ((void*)0),
                                           FUNC_2("'%s' is not a working copy"),
                                           FUNC_14(VAR_22, VAR_34));
                }
            }
        }
    }
  else
    {
      VAR_36 = VAR_22;
      VAR_37 = VAR_38;
    }

  if (FUNC_13(VAR_36))
    {
      VAR_35.anchor_abspath = ((void*)0);
      VAR_35.anchor_relpath = ((void*)0);
    }
  else
    {
      VAR_35.anchor_abspath = VAR_37;
      VAR_35.anchor_relpath = VAR_36;
    }



  FUNC_1(FUNC_27(&VAR_40, VAR_21->config, VAR_34));




  if (VAR_26)
    {
      svn_ra_session_t *VAR_44;
      const char *VAR_45;
      svn_node_kind_t VAR_46;
      svn_boolean_t VAR_47;
      const svn_delta_editor_t *VAR_48;
      void *VAR_49, *VAR_50;
      svn_revnum_t VAR_51 = VAR_5;


      FUNC_1(FUNC_9(&VAR_45, VAR_37, VAR_21,
                                        VAR_34, VAR_34));

      if (!VAR_45)
        return FUNC_16
          (VAR_1, ((void*)0),
           FUNC_2("Entry '%s' has no URL"),
           FUNC_14(VAR_36, VAR_34));


      FUNC_1(FUNC_8(&VAR_44, ((void*)0), VAR_45,
                                                   VAR_37, ((void*)0),
                                                   VAR_0, VAR_8,
                                                   VAR_21, VAR_34, VAR_34));

      FUNC_1(FUNC_21(VAR_44, &VAR_47,
                                    VAR_7, VAR_34));

      FUNC_1(FUNC_23(&VAR_48, &VAR_49, &VAR_50,
                                        &VAR_51, VAR_21->wc_ctx,
                                        VAR_37, VAR_39,
                                        VAR_24, VAR_25, VAR_27,
                                        VAR_28, VAR_30,
                                        VAR_47,
                                        VAR_40, VAR_19, &VAR_35,
                                        VAR_21->cancel_func, VAR_21->cancel_baton,
                                        VAR_34, VAR_34));






      FUNC_1(FUNC_19(VAR_44, "", VAR_5,
                                &VAR_46, VAR_34));
      if (VAR_46 == VAR_16)
        {
          svn_boolean_t VAR_52;






          FUNC_1(FUNC_24(&VAR_52, VAR_21->wc_ctx,
                                        VAR_37, VAR_34));
          if (! VAR_52)
            VAR_35.deleted_in_repos = VAR_8;


          FUNC_1(VAR_48->close_edit(VAR_49, VAR_34));
        }
      else
        {
          svn_revnum_t VAR_53;
          report_baton_t VAR_54;
          svn_depth_t VAR_55;

          if (VAR_23->kind == VAR_17)
            {


              VAR_53 = VAR_5;
            }
          else
            {

              FUNC_1(FUNC_7(&VAR_53, ((void*)0),
                                                      VAR_21->wc_ctx,
                                                      VAR_38,
                                                      VAR_44, VAR_23,
                                                      VAR_34));
            }

          if (VAR_30 || !VAR_47)
            VAR_55 = VAR_24;
          else
            VAR_55 = VAR_13;


          FUNC_1(FUNC_20(VAR_44, &VAR_54.wrapped_reporter,
                                    &VAR_54.wrapped_report_baton,
                                    VAR_39, VAR_53, VAR_55,
                                    VAR_48, VAR_49, VAR_34));


          VAR_54.ancestor = FUNC_3(VAR_34, VAR_45);
          VAR_54.set_locks_baton = VAR_50;
          VAR_54.ctx = VAR_21;
          VAR_54.pool = VAR_34;

          if (VAR_24 == VAR_13)
            VAR_54.depth = VAR_12;
          else
            VAR_54.depth = VAR_24;





          FUNC_1(FUNC_25(VAR_21->wc_ctx,
                                          VAR_38,
                                          &VAR_9, &VAR_54,
                                          VAR_0 ,
                                          VAR_24, (! VAR_30),
                                          (! VAR_47),
                                          VAR_0 ,
                                          VAR_21->cancel_func, VAR_21->cancel_baton,
                                          ((void*)0), ((void*)0), VAR_34));
        }

      if (VAR_21->notify_func2)
        {
          svn_wc_notify_t *VAR_56
            = FUNC_26(VAR_38,
                                   VAR_18, VAR_34);
          VAR_56->revision = VAR_51;
          VAR_21->notify_func2(VAR_21->notify_baton2, VAR_56, VAR_34);
        }


      if (VAR_20)
        *VAR_20 = VAR_51;
    }
  else
    {
      VAR_41 = FUNC_29(VAR_21->wc_ctx, VAR_38,
                               VAR_24, VAR_25, VAR_28, VAR_0, VAR_40,
                               VAR_19, &VAR_35,
                               VAR_21->cancel_func, VAR_21->cancel_baton,
                               VAR_34);

      if (VAR_41 && VAR_41->apr_err == VAR_3)
        {


          FUNC_15(VAR_41);
          return FUNC_16(VAR_4, ((void*)0),
                               FUNC_2("'%s' is not a working copy"),
                               FUNC_14(VAR_22, VAR_34));
        }

      FUNC_1(VAR_41);
    }







  if (FUNC_0(VAR_24) && (! VAR_29))
    {
      apr_hash_t *VAR_57;
      FUNC_1(FUNC_22(&VAR_57,
                                              VAR_21->wc_ctx, VAR_38,
                                              VAR_34, VAR_34));


      FUNC_1(FUNC_4(VAR_21, VAR_57,
                                 VAR_24, VAR_25,
                                 VAR_26, VAR_27,
                                 VAR_28, VAR_31,
                                 VAR_35.anchor_abspath, VAR_35.anchor_relpath,
                                 VAR_32, VAR_33, VAR_34));
    }

  return VAR_6;
}
