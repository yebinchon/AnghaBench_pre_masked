
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_editor_t ;
struct TYPE_5__ {int (* set_target_revision ) (void*,scalar_t__,int *) ;} ;
typedef TYPE_1__ svn_delta_editor_t ;
typedef int svn_delta__unlock_func_t ;
typedef scalar_t__ svn_boolean_t ;
struct svn_delta__extra_baton {int baton; int (* start_edit ) (int ,scalar_t__) ;} ;
struct path_driver_cb_baton {char const* base_path; int * pool; int copies; int * compare_root; scalar_t__ low_water_mark; void* authz_read_baton; int authz_read_func; int * changed_paths; int * root; void* edit_baton; TYPE_1__ const* editor; } ;
struct copy_info {int dummy; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int **,int **,int *,char const*,int ,void*,int *,int *) ;
 int VAR_4 ;
 int FUNC_4 (void*,scalar_t__,int *) ;
 int FUNC_5 (void*,scalar_t__,int *) ;
 int FUNC_6 (void*,scalar_t__,int *) ;
 int FUNC_7 (void*,scalar_t__,int *) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int **,struct svn_delta__extra_baton**,int *,void**,TYPE_1__ const*,void*,scalar_t__*,char const*,char*,int *,int *,int ,int *,int ,int *,int *,int *) ;
 int * FUNC_10 (TYPE_1__ const*,void*,int *,int ,int ,struct path_driver_cb_baton*,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,char const*,scalar_t__,int *,int ,void*,int *) ;

svn_error_t *
FUNC_17(svn_fs_root_t *VAR_5,
                  const char *VAR_6,
                  svn_revnum_t VAR_7,
                  svn_boolean_t VAR_8,
                  const svn_delta_editor_t *VAR_9,
                  void *VAR_10,
                  svn_repos_authz_func_t VAR_11,
                  void *VAR_12,
                  apr_pool_t *VAR_13)
{

  apr_hash_t *VAR_14;
  apr_array_header_t *VAR_15;
  struct path_driver_cb_baton VAR_16;



  if (FUNC_11(VAR_5) && FUNC_13(VAR_5) == 0)
    {
      FUNC_0(VAR_9->set_target_revision(VAR_10, 0, VAR_13));
      return VAR_0;
    }

  if (! VAR_6)
    VAR_6 = "";
  else if (VAR_6[0] == '/')
    ++VAR_6;


  FUNC_0(FUNC_3(&VAR_14, &VAR_15, VAR_5, VAR_6,
                               VAR_11, VAR_12,
                               VAR_13, VAR_13));



  if (! FUNC_1(VAR_7))
    VAR_7 = 0;


  VAR_16.editor = VAR_9;
  VAR_16.edit_baton = VAR_10;
  VAR_16.root = VAR_5;
  VAR_16.changed_paths = VAR_14;
  VAR_16.authz_read_func = VAR_11;
  VAR_16.authz_read_baton = VAR_12;
  VAR_16.base_path = VAR_6;
  VAR_16.low_water_mark = VAR_7;
  VAR_16.compare_root = ((void*)0);

  if (VAR_8)
    {
      FUNC_0(FUNC_12(&VAR_16.compare_root,
                                   FUNC_14(VAR_5),
                                   FUNC_11(VAR_5)
                                     ? FUNC_13(VAR_5) - 1
                                     : FUNC_15(VAR_5),
                                   VAR_13));
    }

  VAR_16.copies = FUNC_2(VAR_13, 4, sizeof(struct copy_info *));
  VAR_16.pool = VAR_13;



  if (FUNC_11(VAR_5))
    {
      svn_revnum_t VAR_17 = FUNC_13(VAR_5);
      FUNC_0(VAR_9->set_target_revision(VAR_10, VAR_17, VAR_13));
    }


  return FUNC_10(VAR_9, VAR_10,
                                VAR_15, VAR_1,
                                VAR_4, &VAR_16, VAR_13);
}
