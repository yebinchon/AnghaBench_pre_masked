
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef void* svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_12__ {char const* original_repos_relpath; char const* changed_author; int op_depth; int moved_here; int const* conflict; int const* work_items; int depth; int const* children; int original_repos_id; int not_present_op_depth; int changed_date; void* changed_rev; int const* props; void* original_revnum; int kind; int presence; } ;
typedef TYPE_2__ insert_working_baton_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,char const*,char const*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,char const*,int *) ;
 int FUNC_8 (int*,int *,int*,int ,char const*,void*,TYPE_1__*,char const*,int *) ;
 int FUNC_9 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_11(svn_wc__db_t *VAR_3,
                       const char *VAR_4,
                       const apr_hash_t *VAR_5,
                       svn_revnum_t VAR_6,
                       apr_time_t VAR_7,
                       const char *VAR_8,
                       const char *VAR_9,
                       const char *VAR_10,
                       const char *VAR_11,
                       svn_revnum_t VAR_12,
                       const apr_array_header_t *VAR_13,
                       svn_depth_t VAR_14,
                       svn_boolean_t VAR_15,
                       const svn_skel_t *VAR_16,
                       const svn_skel_t *VAR_17,
                       apr_pool_t *VAR_18)
{
  svn_wc__db_wcroot_t *VAR_19;
  const char *VAR_20;
  insert_working_baton_t VAR_21;
  int VAR_22;

  FUNC_1(FUNC_9(VAR_4));
  FUNC_1(VAR_5 != ((void*)0));






  FUNC_0(FUNC_10(&VAR_19, &VAR_20, VAR_3,
                              VAR_4, VAR_18, VAR_18));
  FUNC_3(VAR_19);

  FUNC_4(&VAR_21);

  VAR_21.presence = VAR_2;
  VAR_21.kind = VAR_1;

  if (VAR_10 != ((void*)0))
    {
      FUNC_0(FUNC_5(&VAR_21.original_repos_id,
                              VAR_10, VAR_11,
                              VAR_19->sdb, VAR_18));
      VAR_21.original_repos_relpath = VAR_9;
      VAR_21.original_revnum = VAR_12;

      VAR_21.props = VAR_5;
      VAR_21.changed_rev = VAR_6;
      VAR_21.changed_date = VAR_7;
      VAR_21.changed_author = VAR_8;
    }


  FUNC_0(FUNC_8(&VAR_21.op_depth, &VAR_21.not_present_op_depth,
                            &VAR_22, VAR_21.original_repos_id,
                            VAR_9, VAR_12,
                            VAR_19, VAR_20, VAR_18));

  VAR_21.children = VAR_13;
  VAR_21.depth = VAR_14;
  VAR_21.moved_here = VAR_15 && (VAR_22 == 0 ||
                               VAR_21.op_depth == VAR_22);

  VAR_21.work_items = VAR_17;
  VAR_21.conflict = VAR_16;

  FUNC_2(
                FUNC_7(&VAR_21, VAR_19, VAR_20, VAR_18),
                VAR_19);
  FUNC_0(FUNC_6(VAR_19, VAR_4, VAR_14, VAR_18));

  return VAR_0;
}
