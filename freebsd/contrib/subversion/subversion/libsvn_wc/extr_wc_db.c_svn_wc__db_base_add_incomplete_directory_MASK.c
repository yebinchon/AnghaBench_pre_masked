
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef void* svn_boolean_t ;
struct insert_base_baton_t {char const* repos_root_url; char const* repos_uuid; char const* repos_relpath; int * work_items; int * conflict; void* delete_working; void* insert_base_deleted; int depth; int revision; int kind; int status; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct insert_base_baton_t*) ;
 int FUNC_6 (int *,char const*,int ,int *) ;
 int FUNC_7 (struct insert_base_baton_t*,int *,char const*,int *) ;
 int VAR_1 ;
 int FUNC_8 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_10(svn_wc__db_t *VAR_4,
                                         const char *VAR_5,
                                         const char *VAR_6,
                                         const char *VAR_7,
                                         const char *VAR_8,
                                         svn_revnum_t VAR_9,
                                         svn_depth_t VAR_10,
                                         svn_boolean_t VAR_11,
                                         svn_boolean_t VAR_12,
                                         svn_skel_t *VAR_13,
                                         svn_skel_t *VAR_14,
                                         apr_pool_t *VAR_15)
{
  svn_wc__db_wcroot_t *VAR_16;
  const char *VAR_17;
  struct insert_base_baton_t VAR_18;

  FUNC_1(FUNC_8(VAR_5));
  FUNC_1(FUNC_2(VAR_9));
  FUNC_1(VAR_6 && VAR_7 && VAR_8);

  FUNC_0(FUNC_9(&VAR_16, &VAR_17,
                                                VAR_4, VAR_5,
                                                VAR_15, VAR_15));

  FUNC_4(VAR_16);

  FUNC_5(&VAR_18);


  VAR_18.repos_root_url = VAR_7;
  VAR_18.repos_uuid = VAR_8;

  VAR_18.status = VAR_3;
  VAR_18.kind = VAR_2;
  VAR_18.repos_relpath = VAR_6;
  VAR_18.revision = VAR_9;
  VAR_18.depth = VAR_10;
  VAR_18.insert_base_deleted = VAR_11;
  VAR_18.delete_working = VAR_12;

  VAR_18.conflict = VAR_13;
  VAR_18.work_items = VAR_14;

  FUNC_3(
            FUNC_7(&VAR_18, VAR_16, VAR_17, VAR_15),
            VAR_16);

  FUNC_0(FUNC_6(VAR_16, VAR_5, VAR_1, VAR_15));

  return VAR_0;
}
