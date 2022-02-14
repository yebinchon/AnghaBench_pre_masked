
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_3__ {char const* merge_source_fspath; char const* merge_target_abspath; int * result_pool; int * wc_ctx; scalar_t__ depth; int * operative_children; } ;
typedef TYPE_1__ log_find_operative_subtree_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,scalar_t__,scalar_t__,int ,int ,TYPE_1__*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_hash_t **VAR_4,
                                 const char *VAR_5,
                                 svn_revnum_t VAR_6,
                                 svn_revnum_t VAR_7,
                                 const char *VAR_8,
                                 svn_depth_t VAR_9,
                                 svn_wc_context_t *VAR_10,
                                 svn_ra_session_t *VAR_11,
                                 apr_pool_t *VAR_12,
                                 apr_pool_t *VAR_13)
{
  log_find_operative_subtree_baton_t VAR_14;

  FUNC_1(FUNC_2(VAR_6));
  FUNC_1(FUNC_2(VAR_7));
  FUNC_1(VAR_6 <= VAR_7);

  *VAR_4 = FUNC_3(VAR_12);

  if (VAR_9 == VAR_3)
    return VAR_0;




  VAR_14.operative_children = *VAR_4;
  VAR_14.merge_source_fspath = VAR_5;
  VAR_14.merge_target_abspath = VAR_8;
  VAR_14.depth = VAR_9;
  VAR_14.wc_ctx = VAR_10;
  VAR_14.result_pool = VAR_12;

  FUNC_0(FUNC_4(VAR_11, "", VAR_7, VAR_6,
                  VAR_1,
                  VAR_2,
                  &VAR_14, VAR_13));

  return VAR_0;
}
