
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_9__ {int (* finish_report ) (void*,int *) ;int (* link_path ) (void*,char const*,char const*,int ,scalar_t__,int ,int *,int *) ;int (* set_path ) (void*,char*,int ,scalar_t__,int ,int *,int *) ;} ;
typedef TYPE_1__ svn_ra_reporter3_t ;
typedef int svn_opt_revision_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_diff_tree_processor_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_delta_editor_t ;
struct TYPE_10__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_11__ {char const* url; int rev; } ;
typedef TYPE_3__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
struct diff_driver_info_t {char const* anchor; int session_relpath; void* orig_path_2; void* orig_path_1; } ;
typedef enum svn_opt_revision_kind { ____Placeholder_svn_opt_revision_kind } svn_opt_revision_kind ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int *,char const*) ;
 int FUNC_3 (void*,char*,int ,scalar_t__,int ,int *,int *) ;
 int FUNC_4 (void*,char const*,char const*,int ,scalar_t__,int ,int *,int *) ;
 int FUNC_5 (void*,int *) ;
 int FUNC_6 (int **,TYPE_3__**,char const*,char const*,int const*,int const*,TYPE_2__*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_7 (int const*,int *,int *) ;
 char* FUNC_8 (char const*,int *) ;
 char* FUNC_9 (char const*,int *) ;
 int FUNC_10 (char const**,char const*,int *) ;
 char* FUNC_11 (char const*,char const*,int *) ;
 int VAR_6 ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char const*) ;
 void* FUNC_14 (char const*,char const*,int *) ;
 int FUNC_15 (int *,TYPE_1__ const**,void**,int ,char const*,scalar_t__,int,int ,char const*,int const*,void*,int *) ;
 int FUNC_16 (int *,char const**,int *) ;
 int FUNC_17 (int *,int*,int ,int *) ;
 int FUNC_18 (int *,char const*,int *) ;
 char const* FUNC_19 (char const*,int *) ;
 int FUNC_20 (char const*,char const*,int *) ;
 int FUNC_21 (int const**,void**,int ,char const*,char const*,scalar_t__,int,int,int,int,int const*,int const*,int ,int ,int *,int *) ;
 int FUNC_22 (int*,int *,char const**,char const**,int *,scalar_t__*,char const**,int ,char const*,int ,int *,int *) ;
 int FUNC_23 (char const**,int ,char const*,int *,int *) ;
 int FUNC_24 (int ,char const*,TYPE_1__ const*,void*,int ,scalar_t__,int ,int,int ,int ,int ,int *,int *,int *) ;
 int FUNC_25 (char const**,char const**,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_26(const char **VAR_7,
              svn_boolean_t *VAR_8,
              struct diff_driver_info_t *VAR_9,
              const char *VAR_10,
              const svn_opt_revision_t *VAR_11,
              const svn_opt_revision_t *VAR_12,
              const char *VAR_13,
              enum svn_opt_revision_kind VAR_14,
              svn_boolean_t VAR_15,
              svn_depth_t VAR_16,
              svn_boolean_t VAR_17,
              const apr_array_header_t *VAR_18,
              const svn_diff_tree_processor_t *VAR_19,
              svn_client_ctx_t *VAR_20,
              apr_pool_t *VAR_21,
              apr_pool_t *VAR_22)
{
  const char *VAR_23, *VAR_24, *VAR_25;
  svn_ra_session_t *VAR_26;
  svn_depth_t VAR_27;
  const svn_ra_reporter3_t *VAR_28;
  void *VAR_29;
  const svn_delta_editor_t *VAR_30;
  void *VAR_31;
  svn_boolean_t VAR_32 = (VAR_14 == VAR_6);
  svn_boolean_t VAR_33;
  const char *VAR_34;
  const char *VAR_35;
  const char *VAR_36;
  svn_boolean_t VAR_37;
  svn_revnum_t VAR_38;
  const char *VAR_39;
  const char *VAR_40;
  svn_depth_t VAR_41;
  const char *VAR_42;
  const char *VAR_43;
  svn_client__pathrev_t *VAR_44;

  FUNC_1(! FUNC_13(VAR_13));

  if (!FUNC_13(VAR_10))
    {
      FUNC_0(FUNC_10(&VAR_34, VAR_10,
                                      VAR_22));
    }
  else
    {
      VAR_34 = VAR_10;
    }

  FUNC_0(FUNC_10(&VAR_35, VAR_13, VAR_22));


  FUNC_0(FUNC_22(&VAR_37,
                                  &VAR_38,
                                  &VAR_39,
                                  &VAR_40,
                                  ((void*)0), &VAR_41,
                                  &VAR_42,
                                  VAR_20->wc_ctx, VAR_35,
                                  VAR_0, VAR_22, VAR_22));

  FUNC_0(FUNC_6(&VAR_26, &VAR_44,
                                            VAR_10, VAR_35,
                                            VAR_12, VAR_11,
                                            VAR_20, VAR_22));

  if (VAR_14 == VAR_6 || !VAR_37)
    {

      FUNC_0(FUNC_25(&VAR_23, &VAR_25, VAR_20->wc_ctx, VAR_13,
                                        VAR_22, VAR_22));


      if (*VAR_25 && !FUNC_12(VAR_25))
        {
          VAR_23 = FUNC_11(VAR_23, VAR_25, VAR_22);
          VAR_25 = "";
        }

      if (VAR_7)
        *VAR_7 = FUNC_2(VAR_21, VAR_25);
      if (VAR_8)
        *VAR_8 = (*VAR_25 == '\0');


      FUNC_0(FUNC_10(&VAR_36, VAR_23, VAR_22));
      FUNC_0(FUNC_23(&VAR_24, VAR_20->wc_ctx, VAR_36,
                                   VAR_22, VAR_22));
      FUNC_1(VAR_24 != ((void*)0));

      VAR_43 = ((void*)0);
    }
  else
    {
      VAR_43 = FUNC_14(VAR_40,
                                               VAR_39,
                                               VAR_22);
        {





          VAR_36 = FUNC_9(VAR_35, VAR_22);
          VAR_24 = FUNC_14(VAR_40,
                                                   FUNC_19(
                                                            VAR_39,
                                                            VAR_22),
                                                   VAR_22);
          VAR_25 = FUNC_8(VAR_35, ((void*)0));
          VAR_23 = FUNC_9(VAR_13, VAR_22);
        }
    }

  FUNC_0(FUNC_18(VAR_26, VAR_24, VAR_22));

  if (VAR_9)
    {
      const char *VAR_45;

      VAR_9->anchor = VAR_23;

      if (!VAR_15)
        {
          VAR_9->orig_path_1 = FUNC_2(VAR_21, VAR_44->url);
          VAR_9->orig_path_2 =
            FUNC_14(VAR_24, VAR_25, VAR_21);
        }
      else
        {
          VAR_9->orig_path_1 =
            FUNC_14(VAR_24, VAR_25, VAR_21);
          VAR_9->orig_path_2 = FUNC_2(VAR_21, VAR_44->url);
        }

      FUNC_0(FUNC_16(VAR_26, &VAR_45,
                                      VAR_22));

      VAR_9->session_relpath = FUNC_20(VAR_45,
                                                   VAR_24,
                                                   VAR_21);
    }

  if (VAR_15)
    VAR_19 = FUNC_7(
                              VAR_19, ((void*)0), VAR_22);


  FUNC_0(FUNC_17(VAR_26, &VAR_33,
                                VAR_2, VAR_22));
  FUNC_0(FUNC_21(&VAR_30, &VAR_31,
                                  VAR_20->wc_ctx,
                                  VAR_36,
                                  VAR_25,
                                  VAR_16,
                                  VAR_17,
                                  VAR_32,
                                  VAR_15,
                                  VAR_33,
                                  VAR_18,
                                  VAR_19,
                                  VAR_20->cancel_func, VAR_20->cancel_baton,
                                  VAR_22, VAR_22));

  if (VAR_16 != VAR_4)
    VAR_27 = VAR_16;
  else
    VAR_27 = VAR_5;


  FUNC_0(FUNC_15(VAR_26,
                          &VAR_28, &VAR_29,
                          VAR_44->rev,
                          VAR_25,
                          VAR_27,
                          VAR_17,
                          VAR_3,
                          VAR_44->url,
                          VAR_30, VAR_31,
                          VAR_22));

  if (VAR_37 && VAR_14 != VAR_6)
    {

      if (VAR_41 == VAR_5)
        VAR_41 = VAR_4;





      FUNC_0(VAR_28->set_path(VAR_29, "",
                                 VAR_17 ? 0 : VAR_38,
                                 VAR_41, VAR_0, ((void*)0), VAR_22));

      if (*VAR_25)
        FUNC_0(VAR_28->link_path(VAR_29, VAR_25,
                                    VAR_43,
                                    VAR_17 ? 0 : VAR_38,
                                    VAR_41, VAR_0, ((void*)0), VAR_22));


      FUNC_0(VAR_28->finish_report(VAR_29, VAR_22));
    }
  else
    {


      FUNC_0(FUNC_24(VAR_20->wc_ctx, VAR_35,
                                      VAR_28, VAR_29,
                                      VAR_0, VAR_16, VAR_3,
                                      (! VAR_33),
                                      VAR_0,
                                      VAR_20->cancel_func, VAR_20->cancel_baton,
                                      ((void*)0), ((void*)0),
                                      VAR_22));
    }

  return VAR_1;
}
