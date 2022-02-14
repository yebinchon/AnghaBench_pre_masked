
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef void* svn_revnum_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
struct TYPE_11__ {char const* repos_root_url; char const* repos_uuid; char const* repos_relpath; char const* changed_author; char const* target; int const* work_items; int const* conflict; void* delete_working; void* insert_base_deleted; void* keep_recorded_info; int * new_actual_props; int update_actual_props; int * iprops; int * dav_cache; int changed_date; void* changed_rev; int const* props; void* revision; int kind; int status; } ;
typedef TYPE_2__ insert_base_baton_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int * VAR_0 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,char const*,int *) ;
 int VAR_2 ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (int ,char const*) ;
 int VAR_3 ;
 int FUNC_10 (char const*,int *) ;
 int VAR_4 ;
 int FUNC_11 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_12(svn_wc__db_t *VAR_5,
                            const char *VAR_6,
                            const char *VAR_7,
                            const char *VAR_8,
                            const char *VAR_9,
                            const char *VAR_10,
                            svn_revnum_t VAR_11,
                            const apr_hash_t *VAR_12,
                            svn_revnum_t VAR_13,
                            apr_time_t VAR_14,
                            const char *VAR_15,
                            const char *VAR_16,
                            apr_hash_t *VAR_17,
                            svn_boolean_t VAR_18,
                            svn_boolean_t VAR_19,
                            apr_hash_t *VAR_20,
                            apr_array_header_t *VAR_21,
                            svn_boolean_t VAR_22,
                            svn_boolean_t VAR_23,
                            const svn_skel_t *VAR_24,
                            const svn_skel_t *VAR_25,
                            apr_pool_t *VAR_26)
{
  svn_wc__db_wcroot_t *VAR_27;
  const char *VAR_28;
  insert_base_baton_t VAR_29;

  FUNC_1(FUNC_8(VAR_6));
  FUNC_1(VAR_8 != ((void*)0));
  FUNC_1(FUNC_10(VAR_9, VAR_26));
  FUNC_1(VAR_10 != ((void*)0));
  FUNC_1(FUNC_2(VAR_11));
  FUNC_1(VAR_12 != ((void*)0));
  FUNC_1(FUNC_2(VAR_13));
  FUNC_1(VAR_16 != ((void*)0));

  FUNC_0(FUNC_11(&VAR_27, &VAR_28, VAR_5,
                              VAR_7, VAR_26, VAR_26));
  FUNC_4(VAR_27);
  VAR_28 = FUNC_9(VAR_27->abspath, VAR_6);
  FUNC_5(&VAR_29);


  VAR_29.repos_root_url = VAR_9;
  VAR_29.repos_uuid = VAR_10;

  VAR_29.status = VAR_4;
  VAR_29.kind = VAR_3;
  VAR_29.repos_relpath = VAR_8;
  VAR_29.revision = VAR_11;

  VAR_29.props = VAR_12;
  VAR_29.changed_rev = VAR_13;
  VAR_29.changed_date = VAR_14;
  VAR_29.changed_author = VAR_15;

  VAR_29.target = VAR_16;

  VAR_29.dav_cache = VAR_17;
  VAR_29.iprops = VAR_21;

  if (VAR_19)
    {
      VAR_29.update_actual_props = VAR_1;
      VAR_29.new_actual_props = VAR_20;
    }

  VAR_29.keep_recorded_info = VAR_22;
  VAR_29.insert_base_deleted = VAR_23;
  VAR_29.delete_working = VAR_18;

  VAR_29.conflict = VAR_24;
  VAR_29.work_items = VAR_25;

  FUNC_3(
            FUNC_7(&VAR_29, VAR_27, VAR_28, VAR_26),
            VAR_27);



  FUNC_0(FUNC_6(VAR_27, VAR_6, VAR_2,
                        VAR_26));
  return VAR_0;
}
