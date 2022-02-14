
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_13__ {int (* finish_report ) (void*,int *) ;int (* set_path ) (void*,char*,void*,int ,int ,int *,int *) ;} ;
typedef TYPE_1__ svn_ra_reporter3_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int file_added; int dir_added; } ;
typedef TYPE_2__ svn_diff_tree_processor_t ;
typedef int svn_delta_editor_t ;
struct TYPE_15__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
struct merge_newly_added_dir_baton {char const* target_abspath; char const* added_repos_relpath; void* merge_right_rev; void* merge_left_rev; int repos_uuid; int repos_root_url; TYPE_3__* ctx; int member_0; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,char*,void*,int ,int ,int *,int *) ;
 int FUNC_2 (void*,int *) ;
 int FUNC_3 (int const**,void**,int *,int ,void*,int ,TYPE_2__ const*,int ,int ,int *) ;
 int FUNC_4 (int **,char const**,char const*,int *,int *,int ,int ,TYPE_3__*,int *,int *) ;
 int VAR_5 ;
 TYPE_2__* FUNC_5 (struct merge_newly_added_dir_baton*,int *) ;
 TYPE_2__* FUNC_6 (TYPE_2__ const*,char const*,int *) ;
 TYPE_2__* FUNC_7 (TYPE_2__ const*,int *,int *) ;
 int FUNC_8 (int **,int *,char const*,int *,int *) ;
 int FUNC_9 (int *,TYPE_1__ const**,void**,void*,char const*,int ,int ,int ,char const*,int const*,void*,int *) ;
 int FUNC_10 (char const**,char const**,char const*,int *) ;
 int FUNC_11 (int *,int *,int *,int *,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(const char *VAR_6,
                      const char *VAR_7,
                      svn_revnum_t VAR_8,
                      const char *VAR_9,
                      svn_revnum_t VAR_10,
                      const char *VAR_11,
                      svn_boolean_t VAR_12,
                      svn_client_ctx_t *VAR_13,
                      apr_pool_t *VAR_14,
                      apr_pool_t *VAR_15)
{
  svn_diff_tree_processor_t *VAR_16;
  struct merge_newly_added_dir_baton VAR_17 = { 0 };
  const svn_diff_tree_processor_t *VAR_18;
  svn_ra_session_t *VAR_19;
  const char *VAR_20;
  svn_ra_session_t *VAR_21;
  const svn_ra_reporter3_t *VAR_22;
  void *VAR_23;
  const svn_delta_editor_t *VAR_24;
  void *VAR_25;
  const char *VAR_26;
  const char *VAR_27;
  const char *VAR_28;
  const char *VAR_29;

  FUNC_10(&VAR_26, &VAR_28, VAR_7, VAR_15);
  FUNC_10(&VAR_27, &VAR_29, VAR_9, VAR_15);

  VAR_17.target_abspath = VAR_11;
  VAR_17.ctx = VAR_13;
  VAR_17.added_repos_relpath = VAR_6;
  FUNC_0(FUNC_11(((void*)0), ((void*)0),
                                      &VAR_17.repos_root_url, &VAR_17.repos_uuid,
                                      VAR_13->wc_ctx, VAR_11,
                                      VAR_15, VAR_15));
  VAR_17.merge_left_rev = VAR_8;
  VAR_17.merge_right_rev = VAR_10;

  VAR_16 = FUNC_5(&VAR_17, VAR_15);
  VAR_16->dir_added = VAR_3;
  VAR_16->file_added = VAR_4;

  VAR_18 = VAR_16;
  if (VAR_12)
    VAR_18 = FUNC_7(VAR_18,
                                                             ((void*)0),
                                                             VAR_15);



  VAR_18 = FUNC_6(
                     VAR_18, VAR_28, VAR_15);

  FUNC_0(FUNC_4(&VAR_19, &VAR_20,
                                               VAR_27, ((void*)0), ((void*)0), VAR_0,
                                               VAR_0, VAR_13,
                                               VAR_15, VAR_15));
  if (VAR_20)
    VAR_27 = VAR_20;


  FUNC_0(FUNC_8(&VAR_21, VAR_19, VAR_27,
                              VAR_15, VAR_15));


  FUNC_0(FUNC_3(
                &VAR_24, &VAR_25,
                VAR_21, VAR_5, VAR_8, VAR_2,
                VAR_18, VAR_13->cancel_func, VAR_13->cancel_baton,
                VAR_15));


  FUNC_0(FUNC_9(VAR_19, &VAR_22, &VAR_23,
                          VAR_10, VAR_28, VAR_5, VAR_2, VAR_2,
                          VAR_9, VAR_24, VAR_25, VAR_15));


  FUNC_0(VAR_22->set_path(VAR_23, "", VAR_8,
                             VAR_5,
                             VAR_0, ((void*)0),
                             VAR_15));

  FUNC_0(VAR_22->finish_report(VAR_23, VAR_15));

  return VAR_1;
}
