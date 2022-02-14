
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_progress_notify_func_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct TYPE_3__ {int (* verify_fs ) (int *,char const*,int ,int ,int ,void*,int ,void*,int ,int *,int ) ;} ;
typedef TYPE_1__ fs_library_vtable_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**,char const*,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char const*,int ,int ,int ,void*,int ,void*,int ,int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_5(const char *VAR_4,
              apr_hash_t *VAR_5,
              svn_revnum_t VAR_6,
              svn_revnum_t VAR_7,
              svn_fs_progress_notify_func_t VAR_8,
              void *VAR_9,
              svn_cancel_func_t VAR_10,
              void *VAR_11,
              apr_pool_t *VAR_12)
{
  fs_library_vtable_t *VAR_13;
  svn_fs_t *VAR_14;

  FUNC_0(FUNC_1(&VAR_13, VAR_4, VAR_12));
  VAR_14 = FUNC_2(VAR_5, VAR_12);
  FUNC_4(VAR_14, VAR_3, ((void*)0));

  FUNC_0(VAR_13->verify_fs(VAR_14, VAR_4, VAR_6, VAR_7,
                            VAR_8, VAR_9,
                            VAR_10, VAR_11,
                            VAR_2,
                            VAR_12, VAR_1));
  return VAR_0;
}
