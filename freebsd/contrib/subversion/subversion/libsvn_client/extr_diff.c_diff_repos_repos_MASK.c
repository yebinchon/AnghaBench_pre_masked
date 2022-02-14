
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_6__ {int (* finish_report ) (void*,int *) ;int (* set_path ) (void*,char*,int ,int ,int ,int *,int *) ;} ;
typedef TYPE_1__ svn_ra_reporter3_t ;
typedef int svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
struct TYPE_7__ {int cancel_baton; int cancel_func; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct diff_driver_info_t {char const* orig_path_1; char const* orig_path_2; char const* anchor; int session_relpath; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const**,char const**,int *,int *,char const**,char const**,char const**,char const**,scalar_t__*,scalar_t__*,int **,TYPE_2__*,char const*,char const*,int const*,int const*,int const*,int *) ;
 int FUNC_3 (void*,char*,int ,int ,int ,int *,int *) ;
 int FUNC_4 (void*,int *) ;
 int FUNC_5 (int const**,void**,int *,int ,int ,int ,int const*,int ,int ,int *) ;
 int VAR_1 ;
 int * FUNC_6 (int const*,char const*,int *) ;
 int * FUNC_7 (int const*,int *,int *) ;
 char const* FUNC_8 (char const*,int *) ;
 int * FUNC_9 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int **,int *,char const*,int *,int *) ;
 int FUNC_12 (int *,TYPE_1__ const**,void**,int ,char const*,int ,int ,int ,char const*,int const*,void*,int *) ;
 int FUNC_13 (int *,char const**,int *) ;
 int FUNC_14 (int *,char const**,int *) ;
 int FUNC_15 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(const char **VAR_5,
                 svn_boolean_t *VAR_6,
                 struct diff_driver_info_t *VAR_7,
                 const char *VAR_8,
                 const char *VAR_9,
                 const svn_opt_revision_t *VAR_10,
                 const svn_opt_revision_t *VAR_11,
                 const svn_opt_revision_t *VAR_12,
                 svn_depth_t VAR_13,
                 svn_boolean_t VAR_14,
                 svn_boolean_t VAR_15,
                 const svn_diff_tree_processor_t *VAR_16,
                 svn_client_ctx_t *VAR_17,
                 apr_pool_t *VAR_18,
                 apr_pool_t *VAR_19)
{
  svn_ra_session_t *VAR_20;

  const svn_ra_reporter3_t *VAR_21;
  void *VAR_22;

  const svn_delta_editor_t *VAR_23;
  void *VAR_24;

  const char *VAR_25;
  const char *VAR_26;
  svn_revnum_t VAR_27;
  svn_revnum_t VAR_28;
  svn_node_kind_t VAR_29;
  svn_node_kind_t VAR_30;
  const char *VAR_31;
  const char *VAR_32;
  const char *VAR_33;
  const char *VAR_34;
  svn_ra_session_t *VAR_35;


  FUNC_0(FUNC_2(&VAR_25, &VAR_26, &VAR_27, &VAR_28,
                                   &VAR_31, &VAR_32, &VAR_33, &VAR_34,
                                   &VAR_29, &VAR_30, &VAR_35,
                                   VAR_17, VAR_8, VAR_9,
                                   VAR_10, VAR_11, VAR_12,
                                   VAR_19));




  if (VAR_7)
    {

      VAR_7->orig_path_1 = VAR_25;
      VAR_7->orig_path_2 = VAR_26;






      if (!FUNC_10(VAR_9))
        VAR_7->anchor = VAR_9;
      else if (!FUNC_10(VAR_8))
        VAR_7->anchor = VAR_8;
      else
        VAR_7->anchor = ((void*)0);

      if (*VAR_33 && VAR_7->anchor
          && (VAR_29 != VAR_2 || VAR_30 != VAR_2))
        VAR_7->anchor = FUNC_8(VAR_7->anchor, VAR_18);
    }



  if (VAR_30 == VAR_4)
    {
      const char *VAR_36;
      svn_revnum_t VAR_37;

      VAR_36 = VAR_26;
      VAR_26 = VAR_25;
      VAR_25 = VAR_36;

      VAR_37 = VAR_28;
      VAR_28 = VAR_27;
      VAR_27 = VAR_37;

      VAR_36 = VAR_32;
      VAR_32 = VAR_31;
      VAR_31 = VAR_36;

      VAR_36 = VAR_34;
      VAR_34 = VAR_33;
      VAR_33 = VAR_36;

      VAR_16 = FUNC_7(VAR_16,
                                                               ((void*)0),
                                                               VAR_19);
    }



  if (VAR_5)
    *VAR_5 = FUNC_1(VAR_18, VAR_33);
  else if ((VAR_29 != VAR_3 && VAR_30 != VAR_3)
           && VAR_33[0] != '\0')
    {
      VAR_16 = FUNC_6(
                                        VAR_16, VAR_33, VAR_19);
    }




  FUNC_0(FUNC_11(&VAR_20, VAR_35, VAR_31,
                              VAR_19, VAR_19));

  if (VAR_7)
    {
      const char *VAR_38;
      const char *VAR_39;

      FUNC_0(FUNC_13(VAR_35, &VAR_38,
                                      VAR_19));
      FUNC_0(FUNC_14(VAR_35, &VAR_39,
                                      VAR_19));

      VAR_7->session_relpath = FUNC_15(VAR_38,
                                                    VAR_39,
                                                    VAR_18);
    }

  FUNC_0(FUNC_5(
                &VAR_23, &VAR_24,
                VAR_20, VAR_13,
                VAR_27,
                VAR_15,
                VAR_16,
                VAR_17->cancel_func, VAR_17->cancel_baton,
                VAR_19));


  FUNC_0(FUNC_12(VAR_35, &VAR_21, &VAR_22,
                          VAR_28, VAR_33,
                          VAR_13, VAR_14, VAR_15,
                          VAR_26, VAR_23, VAR_24, VAR_19));


  FUNC_0(VAR_21->set_path(VAR_22, "", VAR_27,
                             VAR_1,
                             VAR_0, ((void*)0),
                             VAR_19));

  return FUNC_9(
                  VAR_21->finish_report(VAR_22, VAR_19));
}
