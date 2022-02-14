
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef void* svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_checksum_t ;
struct TYPE_4__ {char const* changed_author; char const* original_repos_relpath; int op_depth; int not_present_op_depth; int depth; int const* children; int const* checksum; int moved_here; void* original_revnum; int original_repos_id; int changed_date; void* changed_rev; int * props; scalar_t__ kind; scalar_t__ presence; } ;
typedef TYPE_1__ insert_working_baton_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char const*,int *,char const*,int *) ;
 int FUNC_4 (int **,int *,char const*,int ,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int *,char const*,int *) ;
 int FUNC_6 (int *,int *,int *,int *,int *,void**,int *,char const**,int *,int const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_wc__db_wcroot_t *VAR_7,
              const char *VAR_8,
              svn_wc__db_wcroot_t *VAR_9,
              const char *VAR_10,
              svn_wc__db_status_t VAR_11,
              int VAR_12,
              int VAR_13,
              svn_node_kind_t VAR_14,
              const apr_array_header_t *VAR_15,
              apr_int64_t VAR_16,
              const char *VAR_17,
              svn_revnum_t VAR_18,
              apr_pool_t *VAR_19)
{
  insert_working_baton_t VAR_20;
  svn_revnum_t VAR_21;
  apr_time_t VAR_22;
  const char *VAR_23;
  const svn_checksum_t *VAR_24;
  apr_hash_t *VAR_25;
  svn_depth_t VAR_26;

  FUNC_1(VAR_14 == VAR_3
                 || VAR_14 == VAR_2
                 );

  FUNC_0(FUNC_6(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    &VAR_21, &VAR_22, &VAR_23, &VAR_26,
                    &VAR_24, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    VAR_7, VAR_8, VAR_19, VAR_19));

  if (VAR_11 != VAR_5
      && VAR_11 != VAR_4
      && VAR_11 != VAR_6)
    {
      FUNC_0(FUNC_4(&VAR_25, VAR_7, VAR_8, VAR_0,
                                     VAR_19, VAR_19));
    }
  else
    VAR_25 = ((void*)0);

  FUNC_2(&VAR_20);
  VAR_20.presence = VAR_11;
  VAR_20.kind = VAR_14;

  VAR_20.props = VAR_25;
  VAR_20.changed_rev = VAR_21;
  VAR_20.changed_date = VAR_22;
  VAR_20.changed_author = VAR_23;
  VAR_20.original_repos_id = VAR_16;
  VAR_20.original_repos_relpath = VAR_17;
  VAR_20.original_revnum = VAR_18;
  VAR_20.moved_here = VAR_0;

  VAR_20.op_depth = VAR_12;

  VAR_20.checksum = VAR_24;
  VAR_20.children = VAR_15;
  VAR_20.depth = VAR_26;

  VAR_20.not_present_op_depth = VAR_13;

  FUNC_0(FUNC_5(&VAR_20, VAR_9, VAR_10, VAR_19));

  FUNC_0(FUNC_3(VAR_7, VAR_8,
                      VAR_9, VAR_10, VAR_19));

  return VAR_1;
}
