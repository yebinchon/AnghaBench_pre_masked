
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int abspath; int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_wc__db_lock_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
struct svn_wc__db_moved_to_info_t {struct svn_wc__db_moved_to_info_t* next; void* shadow_op_root_abspath; void* moved_to_abspath; } ;
struct svn_wc__db_info_t {scalar_t__ status; scalar_t__ kind; int file_external; int moved_here; int incomplete; int special; void* has_descendants; int locked; int repos_uuid; int repos_root_url; int copied; int has_checksum; scalar_t__ props_mod; scalar_t__ had_props; int * lock; void* have_base; struct svn_wc__db_moved_to_info_t* moved_to; scalar_t__ have_more_work; int depth; int changed_author; int changed_date; int changed_rev; int repos_relpath; int revnum; int op_root; int conflicted; int changelist; int recorded_time; int recorded_size; } ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int **,TYPE_1__*,char const*,void*,int *,int *) ;
 int FUNC_3 (void**,TYPE_1__*,char const*,int *) ;
 int FUNC_4 (int *,TYPE_1__*,char const*,int *) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int const**,int *,char const**,int *,int *,int **,int *,int *,int *,int *,int *,scalar_t__*,scalar_t__*,void**,scalar_t__*,scalar_t__*,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_6 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 void* FUNC_7 (int ,char const*,int *) ;
 int * FUNC_8 (int *,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_9 (char const*,int,int *) ;
 int FUNC_10 (int *,char*,int ,char const*) ;
 int FUNC_11 (int *,int ) ;
 char* FUNC_12 (int *,int,int *) ;
 int FUNC_13 (int **,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__*,int *) ;
 int FUNC_16 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int const**,int *,int **,scalar_t__*,int **,scalar_t__*,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_17 (int *,int *,TYPE_1__*,int ,int *) ;
 int FUNC_18 (int **,TYPE_1__*,char const*,int *,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static svn_error_t *
FUNC_19(const struct svn_wc__db_info_t **VAR_10,
                 svn_wc__db_wcroot_t *VAR_11,
                 const char *VAR_12,
                 svn_boolean_t VAR_13,
                 apr_pool_t *VAR_14,
                 apr_pool_t *VAR_15)
{
  struct svn_wc__db_info_t *VAR_16;
  apr_int64_t VAR_17;
  const svn_checksum_t *VAR_18;
  const char *VAR_19;
  svn_boolean_t VAR_20;
  apr_hash_t *VAR_21;

  VAR_16 = FUNC_1(VAR_14, sizeof(*VAR_16));

  if (!VAR_13)
    FUNC_0(FUNC_5(&VAR_16->status, &VAR_16->kind, &VAR_16->revnum,
                      &VAR_16->repos_relpath, &VAR_17, &VAR_16->changed_rev,
                      &VAR_16->changed_date, &VAR_16->changed_author, &VAR_16->depth,
                      &VAR_18, ((void*)0), &VAR_19, ((void*)0), ((void*)0),
                      &VAR_16->lock, &VAR_16->recorded_size, &VAR_16->recorded_time,
                      &VAR_16->changelist, &VAR_16->conflicted, &VAR_16->op_root,
                      &VAR_16->had_props, &VAR_16->props_mod, &VAR_16->have_base,
                      &VAR_16->have_more_work, &VAR_20,
                      VAR_11, VAR_12, VAR_14, VAR_15));
  else
    {
      svn_boolean_t VAR_22;

      VAR_20 = VAR_0;
      VAR_19 = ((void*)0);

      FUNC_0(FUNC_16(
                  &VAR_16->status, &VAR_16->kind, &VAR_16->revnum, &VAR_16->repos_relpath,
                  &VAR_17, &VAR_16->changed_rev, &VAR_16->changed_date,
                  &VAR_16->changed_author, &VAR_16->depth, &VAR_18, ((void*)0),
                  &VAR_16->lock, &VAR_16->had_props, &VAR_21, &VAR_22,
                  VAR_11, VAR_12, VAR_15, VAR_15));

      VAR_16->have_base = VAR_4;
      VAR_16->file_external = (VAR_22 && VAR_16->kind == VAR_6);
    }


  if (VAR_20 && (VAR_16->have_base || VAR_16->have_more_work))
    {
      svn_sqlite__stmt_t *VAR_23;
      svn_boolean_t VAR_24;

      FUNC_0(FUNC_13(&VAR_23, VAR_11->sdb,
                                        VAR_1));
      FUNC_0(FUNC_10(VAR_23, "is", VAR_11->wc_id, VAR_12));

      FUNC_0(FUNC_15(&VAR_24, VAR_23));

      while (VAR_24)
        {
          struct svn_wc__db_moved_to_info_t *VAR_25;
          int VAR_26 = FUNC_11(VAR_23, 0);
          const char *VAR_27 = FUNC_12(VAR_23, 1, ((void*)0));
          const char *VAR_28;

          VAR_25 = FUNC_1(VAR_14, sizeof(*VAR_25));
          VAR_25->moved_to_abspath = FUNC_7(VAR_11->abspath,
                                                   VAR_27,
                                                   VAR_14);

          VAR_28 = FUNC_9(VAR_12, VAR_26,
                                           VAR_15);

          VAR_25->shadow_op_root_abspath = FUNC_7(VAR_11->abspath,
                                                         VAR_28,
                                                         VAR_14);

          VAR_25->next = VAR_16->moved_to;
          VAR_16->moved_to = VAR_25;

          FUNC_0(FUNC_15(&VAR_24, VAR_23));
        }

      FUNC_0(FUNC_14(VAR_23));
    }




  if (!VAR_13 && VAR_16->have_base
      && (VAR_20 || VAR_16->kind == VAR_6))
    {
      svn_boolean_t VAR_29;
      svn_wc__db_lock_t **VAR_30 = ((void*)0);

      if (VAR_20)
        VAR_30 = &VAR_16->lock;

      FUNC_0(FUNC_16(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                ((void*)0), VAR_30, ((void*)0), ((void*)0),
                                                &VAR_29,
                                                VAR_11, VAR_12,
                                                VAR_14, VAR_15));

      VAR_16->file_external = (VAR_29 && VAR_16->kind == VAR_6);
    }

  if (VAR_16->status == VAR_7)
    {
      svn_wc__db_status_t VAR_31;

      FUNC_0(FUNC_6(&VAR_31, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                            ((void*)0), ((void*)0),
                            VAR_11, VAR_12,
                            VAR_14, VAR_15));

      VAR_16->moved_here = (VAR_31 == VAR_9);
      VAR_16->incomplete = (VAR_31 == VAR_8);
    }
  VAR_16->has_checksum = (VAR_18 != ((void*)0));
  VAR_16->copied = (VAR_19 != ((void*)0));

  FUNC_0(FUNC_17(&VAR_16->repos_root_url, &VAR_16->repos_uuid,
                                      VAR_11, VAR_17, VAR_14));

  if (!VAR_13 && VAR_16->kind == VAR_5)
    FUNC_0(FUNC_4(&VAR_16->locked, VAR_11, VAR_12, VAR_15));

  if (VAR_16->kind == VAR_5)
    VAR_16->has_descendants = VAR_4;
  else
    FUNC_0(FUNC_3(&VAR_16->has_descendants,
                                      VAR_11, VAR_12, VAR_15));

  *VAR_10 = VAR_16;

  return VAR_2;
}
