
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_boolean_t ;
struct insert_base_baton_t {scalar_t__ kind; scalar_t__ repos_id; int file_external; int work_items; int keep_recorded_info; int new_actual_props; int update_actual_props; int conflict; int target; int checksum; int dav_cache; int changed_author; int changed_date; int changed_rev; int iprops; int props; int revision; int repos_relpath; scalar_t__ status; } ;
struct TYPE_17__ {scalar_t__ repos_id; scalar_t__ kind; scalar_t__ presence; int recorded_revision; int recorded_peg_revision; int recorded_repos_relpath; int record_ancestor_relpath; int work_items; int keep_recorded_info; int new_actual_props; int update_actual_props; int conflict; int target; int checksum; int dav_cache; int changed_author; int changed_date; int changed_rev; int iprops; int props; int revision; int repos_relpath; int repos_uuid; int repos_root_url; } ;
typedef TYPE_3__ insert_external_baton_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct insert_base_baton_t*) ;
 int FUNC_5 (scalar_t__*,int ,int ,int ,int *) ;
 int FUNC_6 (struct insert_base_baton_t*,TYPE_1__*,char const*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ,int *,int *) ;
 TYPE_2__* FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (char const*,int *) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,char*,int ,char const*,int ,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_13 (int **,int ,int ) ;
 int FUNC_14 (int *,int *) ;
 TYPE_2__* FUNC_15 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static svn_error_t *
FUNC_16(const insert_external_baton_t *VAR_12,
                     svn_wc__db_wcroot_t *VAR_13,
                     const char *VAR_14,
                     apr_pool_t *VAR_15)
{
  svn_wc__db_status_t VAR_16;
  svn_error_t *VAR_17;
  svn_boolean_t VAR_18;
  apr_int64_t VAR_19;
  svn_sqlite__stmt_t *VAR_20;

  if (VAR_12->repos_id != VAR_0)
    VAR_19 = VAR_12->repos_id;
  else
    FUNC_0(FUNC_5(&VAR_19, VAR_12->repos_root_url, VAR_12->repos_uuid,
                            VAR_13->sdb, VAR_15));


  VAR_17 = FUNC_15(&VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_18,
                                          VAR_13, VAR_14,
                                          VAR_15, VAR_15);
  if (VAR_17)
    {
      if (VAR_17->apr_err != VAR_2)
        return FUNC_9(VAR_17);

      FUNC_7(VAR_17);
    }
  else if (VAR_16 == VAR_11 && !VAR_18)
    return FUNC_8(VAR_3, ((void*)0), ((void*)0));

  if (VAR_12->kind == VAR_8
      || VAR_12->kind == VAR_9)
    {
      struct insert_base_baton_t VAR_21;

      FUNC_4(&VAR_21);

      VAR_21.status = VAR_11;
      VAR_21.kind = VAR_12->kind;

      VAR_21.repos_id = VAR_19;
      VAR_21.repos_relpath = VAR_12->repos_relpath;
      VAR_21.revision = VAR_12->revision;

      VAR_21.props = VAR_12->props;
      VAR_21.iprops = VAR_12->iprops;
      VAR_21.changed_rev = VAR_12->changed_rev;
      VAR_21.changed_date = VAR_12->changed_date;
      VAR_21.changed_author = VAR_12->changed_author;

      VAR_21.dav_cache = VAR_12->dav_cache;

      VAR_21.checksum = VAR_12->checksum;
      VAR_21.target = VAR_12->target;

      VAR_21.conflict = VAR_12->conflict;

      VAR_21.update_actual_props = VAR_12->update_actual_props;
      VAR_21.new_actual_props = VAR_12->new_actual_props;

      VAR_21.keep_recorded_info = VAR_12->keep_recorded_info;

      VAR_21.work_items = VAR_12->work_items;

      VAR_21.file_external = VAR_5;

      FUNC_0(FUNC_6(&VAR_21, VAR_13, VAR_14, VAR_15));
    }
  else
    FUNC_0(FUNC_3(VAR_13->sdb, VAR_12->work_items, VAR_15));


  FUNC_1(VAR_12->presence == VAR_11
                 || VAR_12->presence == VAR_10);

  FUNC_0(FUNC_13(&VAR_20, VAR_13->sdb, VAR_1));

  FUNC_0(FUNC_12(VAR_20, "issttsis",
                            VAR_13->wc_id,
                            VAR_14,
                            FUNC_10(VAR_14,
                                                VAR_15),
                            VAR_7, VAR_12->presence,
                            VAR_6, VAR_12->kind,
                            VAR_12->record_ancestor_relpath,
                            VAR_19,
                            VAR_12->recorded_repos_relpath));

  if (FUNC_2(VAR_12->recorded_peg_revision))
    FUNC_0(FUNC_11(VAR_20, 9, VAR_12->recorded_peg_revision));

  if (FUNC_2(VAR_12->recorded_revision))
    FUNC_0(FUNC_11(VAR_20, 10, VAR_12->recorded_revision));

  FUNC_0(FUNC_14(((void*)0), VAR_20));

  return VAR_4;
}
