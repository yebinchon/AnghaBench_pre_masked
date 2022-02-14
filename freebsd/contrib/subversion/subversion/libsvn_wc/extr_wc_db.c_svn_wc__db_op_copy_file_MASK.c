
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
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_12__ {char const* original_repos_relpath; char const* changed_author; int op_depth; int moved_here; int const* conflict; int const* work_items; int const* new_actual_props; scalar_t__ update_actual_props; int const* checksum; int original_repos_id; int not_present_op_depth; int changed_date; void* changed_rev; int const* props; void* original_revnum; int kind; int presence; } ;
typedef TYPE_2__ insert_working_baton_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,char const*,char const*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,char const*,int *) ;
 int FUNC_8 (int*,int *,int*,int ,char const*,void*,TYPE_1__*,char const*,int *) ;
 int VAR_2 ;
 int FUNC_9 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_11(svn_wc__db_t *VAR_5,
                        const char *VAR_6,
                        const apr_hash_t *VAR_7,
                        svn_revnum_t VAR_8,
                        apr_time_t VAR_9,
                        const char *VAR_10,
                        const char *VAR_11,
                        const char *VAR_12,
                        const char *VAR_13,
                        svn_revnum_t VAR_14,
                        const svn_checksum_t *VAR_15,
                        svn_boolean_t VAR_16,
                        const apr_hash_t *VAR_17,
                        svn_boolean_t VAR_18,
                        const svn_skel_t *VAR_19,
                        const svn_skel_t *VAR_20,
                        apr_pool_t *VAR_21)
{
  svn_wc__db_wcroot_t *VAR_22;
  const char *VAR_23;
  insert_working_baton_t VAR_24;
  int VAR_25;

  FUNC_1(FUNC_9(VAR_6));
  FUNC_1(VAR_7 != ((void*)0));

  FUNC_1((! VAR_11 && ! VAR_12
                  && ! VAR_13 && ! VAR_15
                  && VAR_14 == VAR_0)
                 || (VAR_11 && VAR_12
                     && VAR_13 && VAR_15
                     && VAR_14 != VAR_0));

  FUNC_0(FUNC_10(&VAR_22, &VAR_23, VAR_5,
                              VAR_6, VAR_21, VAR_21));
  FUNC_3(VAR_22);

  FUNC_4(&VAR_24);

  VAR_24.presence = VAR_4;
  VAR_24.kind = VAR_3;

  if (VAR_12 != ((void*)0))
    {
      FUNC_0(FUNC_5(&VAR_24.original_repos_id,
                              VAR_12, VAR_13,
                              VAR_22->sdb, VAR_21));
      VAR_24.original_repos_relpath = VAR_11;
      VAR_24.original_revnum = VAR_14;

      VAR_24.props = VAR_7;
      VAR_24.changed_rev = VAR_8;
      VAR_24.changed_date = VAR_9;
      VAR_24.changed_author = VAR_10;
    }


  FUNC_0(FUNC_8(&VAR_24.op_depth, &VAR_24.not_present_op_depth,
                            &VAR_25, VAR_24.original_repos_id,
                            VAR_11, VAR_14,
                            VAR_22, VAR_23, VAR_21));

  VAR_24.checksum = VAR_15;
  VAR_24.moved_here = VAR_18 && (VAR_25 == 0 ||
                               VAR_24.op_depth == VAR_25);

  if (VAR_16)
    {
      VAR_24.update_actual_props = VAR_16;
      VAR_24.new_actual_props = VAR_17;
    }

  VAR_24.work_items = VAR_20;
  VAR_24.conflict = VAR_19;

  FUNC_2(
          FUNC_7(&VAR_24, VAR_22, VAR_23, VAR_21),
          VAR_22);
  FUNC_0(FUNC_6(VAR_22, VAR_6, VAR_2, VAR_21));

  return VAR_1;
}
