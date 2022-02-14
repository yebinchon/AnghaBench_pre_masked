
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {int fs; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef void* svn_boolean_t ;
struct TYPE_6__ {int repos_uuid; int reader; int * pool; int revision_infos; void* authz_read_baton; int authz_read_func; void* edit_baton; int const* editor; int is_switch; void* send_copyfrom_args; void* ignore_ancestry; scalar_t__ requested_depth; int zero_copy_limit; void* text_deltas; void* fs_base; void* t_path; int t_rev; int s_operand; TYPE_1__* repos; } ;
typedef TYPE_2__ report_baton_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*) ;
 scalar_t__ VAR_2 ;
 int * FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,char const**,int *) ;
 void* FUNC_7 (char const*,int *) ;
 void* FUNC_8 (void*,char const*,int *) ;
 int FUNC_9 (int,int,int *) ;
 int FUNC_10 (char const*,int *) ;

svn_error_t *
FUNC_11(void **VAR_3,
                        svn_revnum_t VAR_4,
                        svn_repos_t *VAR_5,
                        const char *VAR_6,
                        const char *VAR_7,
                        const char *VAR_8,
                        svn_boolean_t VAR_9,
                        svn_depth_t VAR_10,
                        svn_boolean_t VAR_11,
                        svn_boolean_t VAR_12,
                        const svn_delta_editor_t *VAR_13,
                        void *VAR_14,
                        svn_repos_authz_func_t VAR_15,
                        void *VAR_16,
                        apr_size_t VAR_17,
                        apr_pool_t *VAR_18)
{
  report_baton_t *VAR_19;
  const char *VAR_20;

  if (VAR_10 == VAR_2)
    return FUNC_5(VAR_0, ((void*)0),
                            FUNC_1("Request depth 'exclude' not supported"));

  FUNC_0(FUNC_6(VAR_5->fs, &VAR_20, VAR_18));



  VAR_19 = FUNC_3(VAR_18, sizeof(*VAR_19));
  VAR_19->repos = VAR_5;
  VAR_19->fs_base = FUNC_7(VAR_6, VAR_18);
  VAR_19->s_operand = FUNC_4(VAR_18, VAR_7);
  VAR_19->t_rev = VAR_4;
  VAR_19->t_path = VAR_8 ? FUNC_7(VAR_8, VAR_18)
                          : FUNC_8(VAR_19->fs_base, VAR_7, VAR_18);
  VAR_19->text_deltas = VAR_9;
  VAR_19->zero_copy_limit = VAR_17;
  VAR_19->requested_depth = VAR_10;
  VAR_19->ignore_ancestry = VAR_11;
  VAR_19->send_copyfrom_args = VAR_12;
  VAR_19->is_switch = (VAR_8 != ((void*)0));
  VAR_19->editor = VAR_13;
  VAR_19->edit_baton = VAR_14;
  VAR_19->authz_read_func = VAR_15;
  VAR_19->authz_read_baton = VAR_16;
  VAR_19->revision_infos = FUNC_2(VAR_18);
  VAR_19->pool = VAR_18;
  VAR_19->reader = FUNC_9(1000 ,
                                          1000000 ,
                                          VAR_18);
  VAR_19->repos_uuid = FUNC_10(VAR_20, VAR_18);


  *VAR_3 = VAR_19;
  return VAR_1;
}
