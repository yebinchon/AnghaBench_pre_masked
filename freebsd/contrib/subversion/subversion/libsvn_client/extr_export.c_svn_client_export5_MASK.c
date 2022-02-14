
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {int revision; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_25__ {int kind; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_26__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int wc_ctx; int cancel_baton; int cancel_func; } ;
typedef TYPE_3__ svn_client_ctx_t ;
struct TYPE_27__ {int rev; int url; } ;
typedef TYPE_4__ svn_client__pathrev_t ;
typedef void* svn_boolean_t ;
struct export_info_baton {char const* to_path; char const* native_eol; char const* origin_abspath; int exported; int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int *) ;int wc_ctx; void* ignore_keywords; void* overwrite; TYPE_2__ const* revision; } ;
struct edit_baton {char const* root_path; char const* native_eol; int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int *) ;int cancel_baton; int cancel_func; void* ignore_keywords; int externals; int * target_revision; void* force; int root_url; int repos_root_url; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 void* VAR_7 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char const**,char const*,int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 struct edit_baton* FUNC_10 (int *,int) ;
 int * FUNC_11 (char const*,char const*,struct edit_baton*,TYPE_4__*,int *,void*,void*,void*,int ,char const*,TYPE_3__*,int *) ;
 int * FUNC_12 (char const*,char const*,struct edit_baton*,TYPE_4__*,int *,void*,int *) ;
 int * FUNC_13 (char const*,char const*,struct edit_baton*,TYPE_4__*,int *,void*,int *) ;
 int VAR_8 ;
 int FUNC_14 (int ,TYPE_1__*,int *) ;
 TYPE_2__* FUNC_15 (TYPE_2__ const*,char const*) ;
 TYPE_2__* FUNC_16 (TYPE_2__ const*,TYPE_2__ const*) ;
 int * FUNC_17 (int **,TYPE_4__**,char const*,int *,TYPE_2__ const*,TYPE_2__ const*,TYPE_3__*,int *) ;
 int * FUNC_18 (char const**,char const*,TYPE_3__*,int *,int *) ;
 int FUNC_19 (char const*,int *) ;
 int * FUNC_20 (char const**,char const*,int *) ;
 char* FUNC_21 (char const*,char const*,int *) ;
 char const* FUNC_22 (char const*,int *) ;
 char* FUNC_23 (char const*,char const*) ;
 int * FUNC_24 (int ,int *,int ,char const*) ;
 int * FUNC_25 (char const*,scalar_t__*,int *) ;
 int * FUNC_26 (int ,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_27 (char const*) ;
 int FUNC_28 (int *) ;
 int * FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int * FUNC_31 (int *,char*,int ,scalar_t__*,int *) ;
 int * FUNC_32 (int *,int *,int *) ;
 int * FUNC_33 (int **,int ,char const*,int *,int *) ;
 TYPE_1__* FUNC_34 (char const*,int ,int *) ;
 int VAR_12 ;
 int * FUNC_35 (int ,char const*,int ,void*,void*,int ,int *,int ,struct export_info_baton*,int ,int ,int *) ;

svn_error_t *
FUNC_36(svn_revnum_t *VAR_13,
                   const char *VAR_14,
                   const char *VAR_15,
                   const svn_opt_revision_t *VAR_16,
                   const svn_opt_revision_t *VAR_17,
                   svn_boolean_t VAR_18,
                   svn_boolean_t VAR_19,
                   svn_boolean_t VAR_20,
                   svn_depth_t VAR_21,
                   const char *VAR_22,
                   svn_client_ctx_t *VAR_23,
                   apr_pool_t *VAR_24)
{
  svn_revnum_t VAR_25 = VAR_5;
  svn_boolean_t VAR_26 = FUNC_27(VAR_14);

  FUNC_2(VAR_16 != ((void*)0));
  FUNC_2(VAR_17 != ((void*)0));

  if (FUNC_27(VAR_15))
    return FUNC_24(VAR_2, ((void*)0),
                             FUNC_3("'%s' is not a local path"), VAR_15);

  VAR_16 = FUNC_15(VAR_16,
                                                        VAR_14);
  VAR_17 = FUNC_16(VAR_17, VAR_16);

  if (VAR_26 || ! FUNC_0(VAR_17->kind))
    {
      svn_client__pathrev_t *VAR_27;
      svn_ra_session_t *VAR_28;
      svn_node_kind_t VAR_29;
      const char *VAR_30;
      struct edit_baton *VAR_31 = FUNC_10(VAR_24, sizeof(*VAR_31));

      FUNC_1(FUNC_18(&VAR_30, VAR_14,
                                        VAR_23, VAR_24, VAR_24));


      FUNC_1(FUNC_17(&VAR_28, &VAR_27,
                                                VAR_14, ((void*)0),
                                                VAR_16,
                                                VAR_17, VAR_23, VAR_24));

      FUNC_1(FUNC_32(VAR_28, &VAR_31->repos_root_url, VAR_24));
      VAR_31->root_path = VAR_15;
      VAR_31->root_url = VAR_27->url;
      VAR_31->force = VAR_18;
      VAR_31->target_revision = &VAR_25;
      VAR_31->externals = FUNC_7(VAR_24);
      VAR_31->native_eol = VAR_22;
      VAR_31->ignore_keywords = VAR_20;
      VAR_31->cancel_func = VAR_23->cancel_func;
      VAR_31->cancel_baton = VAR_23->cancel_baton;
      VAR_31->notify_func = VAR_23->notify_func2;
      VAR_31->notify_baton = VAR_23->notify_baton2;

      FUNC_1(FUNC_31(VAR_28, "", VAR_27->rev, &VAR_29, VAR_24));

      if (VAR_29 == VAR_10)
        {
          if (!VAR_0)
            FUNC_1(FUNC_12(VAR_30, VAR_15, VAR_31, VAR_27, VAR_28,
                                VAR_18, VAR_24));
          else
            FUNC_1(FUNC_13(VAR_30, VAR_15, VAR_31, VAR_27,
                                    VAR_28, VAR_18, VAR_24));
        }
      else if (VAR_29 == VAR_9)
        {
          FUNC_1(FUNC_11(VAR_30, VAR_15,
                                   VAR_31, VAR_27, VAR_28, VAR_18,
                                   VAR_19, VAR_20, VAR_21,
                                   VAR_22, VAR_23, VAR_24));
        }
      else if (VAR_29 == VAR_11)
        {
          return FUNC_24(VAR_3, ((void*)0),
                                   FUNC_3("URL '%s' doesn't exist"),
                                   VAR_14);
        }

    }
  else
    {
      struct export_info_baton VAR_32;
      svn_node_kind_t VAR_33;
      apr_hash_t *VAR_34 = ((void*)0);



      FUNC_1(FUNC_20(&VAR_14, VAR_14,
                                      VAR_24));

      FUNC_1(FUNC_20(&VAR_15, VAR_15, VAR_24));

      FUNC_1(FUNC_25(VAR_14, &VAR_33, VAR_24));
      if (VAR_33 == VAR_10)
        FUNC_1(FUNC_4(&VAR_15, VAR_14, VAR_1,
                                       VAR_24));

      VAR_32.to_path = VAR_15;
      VAR_32.revision = VAR_17;
      VAR_32.overwrite = VAR_18;
      VAR_32.ignore_keywords = VAR_20;
      VAR_32.wc_ctx = VAR_23->wc_ctx;
      VAR_32.native_eol = VAR_22;
      VAR_32.notify_func = VAR_23->notify_func2;
      VAR_32.notify_baton = VAR_23->notify_baton2;
      VAR_32.origin_abspath = VAR_14;
      VAR_32.exported = VAR_1;

      FUNC_1(FUNC_35(VAR_23->wc_ctx, VAR_14, VAR_21,
                                 VAR_7 ,
                                 VAR_7 ,
                                 VAR_1 ,
                                 ((void*)0),
                                 VAR_8, &VAR_32,
                                 VAR_23->cancel_func, VAR_23->cancel_baton,
                                 VAR_24));

      if (!VAR_32.exported)
        return FUNC_24(VAR_4, ((void*)0),
                                 FUNC_3("The node '%s' was not found."),
                                 FUNC_22(VAR_14,
                                                        VAR_24));

      if (!VAR_19)
        FUNC_1(FUNC_33(&VAR_34, VAR_23->wc_ctx,
                                                VAR_14,
                                                VAR_24, VAR_24));

      if (VAR_34 && FUNC_5(VAR_34))
        {
          apr_pool_t *VAR_35 = FUNC_29(VAR_24);
          apr_hash_index_t *VAR_36;

          for (VAR_36 = FUNC_6(VAR_24, VAR_34);
               VAR_36;
               VAR_36 = FUNC_8(VAR_36))
            {
              const char *VAR_37 = FUNC_9(VAR_36);
              const char *VAR_38;
              const char *VAR_39;

              FUNC_28(VAR_35);

              VAR_38 = FUNC_23(VAR_14,
                                                 VAR_37);

              VAR_39 = FUNC_21(VAR_15, VAR_38,
                                                         VAR_35);


              FUNC_1(FUNC_26(
                            FUNC_19(VAR_39, VAR_35),
                            VAR_35));

              FUNC_1(FUNC_36(((void*)0),
                                         FUNC_21(VAR_14,
                                                         VAR_38,
                                                         VAR_35),
                                         VAR_39,
                                         VAR_16, VAR_17,
                                         VAR_7, VAR_19,
                                         VAR_20, VAR_21, VAR_22,
                                         VAR_23, VAR_35));
            }

          FUNC_30(VAR_35);
        }
    }


  if (VAR_23->notify_func2)
    {
      svn_wc_notify_t *VAR_40
        = FUNC_34(VAR_15,
                               VAR_12, VAR_24);
      VAR_40->revision = VAR_25;
      VAR_23->notify_func2(VAR_23->notify_baton2, VAR_40, VAR_24);
    }

  if (VAR_13)
    *VAR_13 = VAR_25;

  return VAR_6;
}
