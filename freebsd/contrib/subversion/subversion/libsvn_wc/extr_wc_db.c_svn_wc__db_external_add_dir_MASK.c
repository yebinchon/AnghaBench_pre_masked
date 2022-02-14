
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
struct TYPE_10__ {char const* repos_root_url; char const* repos_uuid; char const* recorded_repos_relpath; int const* work_items; void* recorded_revision; void* recorded_peg_revision; void* record_ancestor_relpath; int presence; int kind; } ;
typedef TYPE_2__ insert_external_baton_t ;
typedef int apr_pool_t ;


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
                            const char *VAR_9,
                            svn_revnum_t VAR_10,
                            svn_revnum_t VAR_11,
                            const svn_skel_t *VAR_12,
                            apr_pool_t *VAR_13)
{
  svn_wc__db_wcroot_t *VAR_14;
  const char *VAR_15;
  insert_external_baton_t VAR_16;

  FUNC_1(FUNC_7(VAR_4));

  if (! VAR_5)
    VAR_5 = FUNC_6(VAR_4, VAR_13);

  FUNC_0(FUNC_10(&VAR_14, &VAR_15, VAR_3,
                              VAR_5, VAR_13, VAR_13));
  FUNC_3(VAR_14);

  FUNC_1(FUNC_8(VAR_14->abspath,
                                        VAR_8));

  FUNC_1(FUNC_8(VAR_14->abspath, VAR_4));

  VAR_15 = FUNC_9(VAR_14->abspath, VAR_4);

  FUNC_4(&VAR_16);

  VAR_16.kind = VAR_1;
  VAR_16.presence = VAR_2;

  VAR_16.repos_root_url = VAR_6;
  VAR_16.repos_uuid = VAR_7;

  VAR_16.record_ancestor_relpath = FUNC_9(
                                                VAR_14->abspath,
                                                VAR_8);
  VAR_16.recorded_repos_relpath = VAR_9;
  VAR_16.recorded_peg_revision = VAR_10;
  VAR_16.recorded_revision = VAR_11;

  VAR_16.work_items = VAR_12;

  FUNC_2(
            FUNC_5(&VAR_16, VAR_14, VAR_15, VAR_13),
            VAR_14);

  return VAR_0;
}
