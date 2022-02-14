
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_progress_notify_func_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_0 ;
 int FUNC_2 (scalar_t__,int *,int *) ;
 int FUNC_3 (scalar_t__*,int *,int *) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,int ,void*,int ,void*,int *) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_6(svn_fs_t *VAR_1,
                 svn_revnum_t VAR_2,
                 svn_revnum_t VAR_3,
                 svn_fs_progress_notify_func_t VAR_4,
                 void *VAR_5,
                 svn_cancel_func_t VAR_6,
                 void *VAR_7,
                 apr_pool_t *VAR_8)
{

  if (! FUNC_1(VAR_2))
    VAR_2 = 0;
  if (! FUNC_1(VAR_3))
    {
      FUNC_0(FUNC_3(&VAR_3, VAR_1, VAR_8));
    }

  FUNC_0(FUNC_2(VAR_2, VAR_1, VAR_8));
  FUNC_0(FUNC_2(VAR_3, VAR_1, VAR_8));



  FUNC_0(FUNC_4(VAR_1, VAR_2, VAR_3,
                                      VAR_4, VAR_5,
                                      VAR_6, VAR_7,
                                      VAR_8));


  FUNC_0(FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                            VAR_6, VAR_7, VAR_8));

  return VAR_0;
}
