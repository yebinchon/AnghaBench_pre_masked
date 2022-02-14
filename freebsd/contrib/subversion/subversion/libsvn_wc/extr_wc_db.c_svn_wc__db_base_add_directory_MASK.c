
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
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_11__ {char const* repos_root_url; char const* repos_uuid; char const* repos_relpath; char const* changed_author; int * new_actual_props; int update_actual_props; int const* work_items; int const* conflict; int * dav_cache; int depth; int const* children; int changed_date; void* changed_rev; int const* props; int * iprops; void* revision; int kind; int status; } ;
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
 int FUNC_8 (char const*) ;
 char* FUNC_9 (int ,char const*) ;
 int VAR_2 ;
 int FUNC_10 (char const*,int *) ;
 int VAR_3 ;
 int FUNC_11 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_12(svn_wc__db_t *VAR_4,
                              const char *VAR_5,
                              const char *VAR_6,
                              const char *VAR_7,
                              const char *VAR_8,
                              const char *VAR_9,
                              svn_revnum_t VAR_10,
                              const apr_hash_t *VAR_11,
                              svn_revnum_t VAR_12,
                              apr_time_t VAR_13,
                              const char *VAR_14,
                              const apr_array_header_t *VAR_15,
                              svn_depth_t VAR_16,
                              apr_hash_t *VAR_17,
                              svn_boolean_t VAR_18,
                              apr_hash_t *VAR_19,
                              apr_array_header_t *VAR_20,
                              const svn_skel_t *VAR_21,
                              const svn_skel_t *VAR_22,
                              apr_pool_t *VAR_23)
{
  svn_wc__db_wcroot_t *VAR_24;
  const char *VAR_25;
  insert_base_baton_t VAR_26;

  FUNC_1(FUNC_8(VAR_5));
  FUNC_1(VAR_7 != ((void*)0));
  FUNC_1(FUNC_10(VAR_8, VAR_23));
  FUNC_1(VAR_9 != ((void*)0));
  FUNC_1(FUNC_2(VAR_10));
  FUNC_1(VAR_11 != ((void*)0));
  FUNC_1(FUNC_2(VAR_12));




  FUNC_0(FUNC_11(&VAR_24, &VAR_25, VAR_4,
                              VAR_6, VAR_23, VAR_23));
  FUNC_4(VAR_24);
  VAR_25 = FUNC_9(VAR_24->abspath, VAR_5);

  FUNC_5(&VAR_26);


  VAR_26.repos_root_url = VAR_8;
  VAR_26.repos_uuid = VAR_9;

  VAR_26.status = VAR_3;
  VAR_26.kind = VAR_2;
  VAR_26.repos_relpath = VAR_7;
  VAR_26.revision = VAR_10;

  VAR_26.iprops = VAR_20;
  VAR_26.props = VAR_11;
  VAR_26.changed_rev = VAR_12;
  VAR_26.changed_date = VAR_13;
  VAR_26.changed_author = VAR_14;

  VAR_26.children = VAR_15;
  VAR_26.depth = VAR_16;

  VAR_26.dav_cache = VAR_17;
  VAR_26.conflict = VAR_21;
  VAR_26.work_items = VAR_22;

  if (VAR_18)
    {
      VAR_26.update_actual_props = VAR_1;
      VAR_26.new_actual_props = VAR_19;
    }





  FUNC_3(
            FUNC_7(&VAR_26, VAR_24, VAR_25, VAR_23),
            VAR_24);

  FUNC_0(FUNC_6(VAR_24, VAR_5, VAR_16, VAR_23));
  return VAR_0;
}
