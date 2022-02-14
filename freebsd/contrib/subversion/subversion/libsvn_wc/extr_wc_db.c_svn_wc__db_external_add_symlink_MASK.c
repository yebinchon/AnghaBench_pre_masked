
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef void* svn_revnum_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
struct TYPE_10__ {char const* repos_root_url; char const* repos_uuid; char const* repos_relpath; char const* changed_author; char const* target; char const* recorded_repos_relpath; int const* work_items; void* keep_recorded_info; int * new_actual_props; void* update_actual_props; void* recorded_revision; void* recorded_peg_revision; void* record_ancestor_relpath; int const* dav_cache; int changed_date; void* changed_rev; int const* props; void* revision; int presence; int kind; } ;
typedef TYPE_2__ insert_external_baton_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,char const*,int *) ;
 char* FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int ,char const*) ;
 void* FUNC_9 (int ,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_11(svn_wc__db_t *VAR_3,
                                const char *VAR_4,
                                const char *VAR_5,
                                const char *VAR_6,
                                const char *VAR_7,
                                const char *VAR_8,
                                svn_revnum_t VAR_9,
                                const apr_hash_t *VAR_10,
                                svn_revnum_t VAR_11,
                                apr_time_t VAR_12,
                                const char *VAR_13,
                                const char *VAR_14,
                                const apr_hash_t *VAR_15,
                                const char *VAR_16,
                                const char *VAR_17,
                                svn_revnum_t VAR_18,
                                svn_revnum_t VAR_19,
                                svn_boolean_t VAR_20,
                                apr_hash_t *VAR_21,
                                svn_boolean_t VAR_22,
                                const svn_skel_t *VAR_23,
                                apr_pool_t *VAR_24)
{
  svn_wc__db_wcroot_t *VAR_25;
  const char *VAR_26;
  insert_external_baton_t VAR_27;

  FUNC_1(FUNC_7(VAR_4));

  if (! VAR_5)
    VAR_5 = FUNC_6(VAR_4, VAR_24);

  FUNC_0(FUNC_10(&VAR_25, &VAR_26, VAR_3,
                              VAR_5, VAR_24, VAR_24));
  FUNC_3(VAR_25);

  FUNC_1(FUNC_8(VAR_25->abspath,
                                        VAR_16));

  FUNC_1(FUNC_8(VAR_25->abspath, VAR_4));

  VAR_26 = FUNC_9(VAR_25->abspath, VAR_4);

  FUNC_4(&VAR_27);

  VAR_27.kind = VAR_1;
  VAR_27.presence = VAR_2;

  VAR_27.repos_root_url = VAR_7;
  VAR_27.repos_uuid = VAR_8;

  VAR_27.repos_relpath = VAR_6;
  VAR_27.revision = VAR_9;

  VAR_27.props = VAR_10;

  VAR_27.changed_rev = VAR_11;
  VAR_27.changed_date = VAR_12;
  VAR_27.changed_author = VAR_13;

  VAR_27.target = VAR_14;

  VAR_27.dav_cache = VAR_15;

  VAR_27.record_ancestor_relpath = FUNC_9(
                                                VAR_25->abspath,
                                                VAR_16);
  VAR_27.recorded_repos_relpath = VAR_17;
  VAR_27.recorded_peg_revision = VAR_18;
  VAR_27.recorded_revision = VAR_19;

  VAR_27.update_actual_props = VAR_20;
  VAR_27.new_actual_props = VAR_21;

  VAR_27.keep_recorded_info = VAR_22;

  VAR_27.work_items = VAR_23;

  FUNC_2(
            FUNC_5(&VAR_27, VAR_25, VAR_26, VAR_24),
            VAR_25);

  return VAR_0;
}
