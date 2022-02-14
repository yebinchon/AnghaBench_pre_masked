
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int path; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_get_locks_callback_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_8__ {char const* path; void* get_locks_baton; int get_locks_func; int requested_depth; } ;
typedef TYPE_2__ get_locks_filter_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const**,int ,char const*,int *) ;
 int VAR_3 ;
 char* FUNC_2 (char const*,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,char const*,int ,TYPE_2__*,int ,int *) ;

svn_error_t *
FUNC_5(svn_fs_t *VAR_4,
                    const char *VAR_5,
                    svn_depth_t VAR_6,
                    svn_fs_get_locks_callback_t VAR_7,
                    void *VAR_8,
                    apr_pool_t *VAR_9)
{
  const char *VAR_10;
  get_locks_filter_baton_t VAR_11;

  FUNC_0(FUNC_3(VAR_4, VAR_2));
  VAR_5 = FUNC_2(VAR_5, VAR_9);

  VAR_11.path = VAR_5;
  VAR_11.requested_depth = VAR_6;
  VAR_11.get_locks_func = VAR_7;
  VAR_11.get_locks_baton = VAR_8;


  FUNC_0(FUNC_1(&VAR_10, VAR_4->path, VAR_5, VAR_9));
  FUNC_0(FUNC_4(VAR_4, VAR_10, VAR_3, &VAR_11,
                     VAR_0, VAR_9));
  return VAR_1;
}
