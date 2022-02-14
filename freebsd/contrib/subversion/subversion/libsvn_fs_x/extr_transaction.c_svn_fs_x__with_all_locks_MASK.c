
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int with_lock_baton_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *,int ,int * (*) (void*,int *),void*,int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;

svn_error_t *
FUNC_4(svn_fs_t *VAR_3,
                         svn_error_t *(*VAR_4)(void *VAR_5,
                                              apr_pool_t *VAR_6),
                         void *VAR_7,
                         apr_pool_t *VAR_8)
{



  with_lock_baton_t *VAR_9
    = FUNC_1(VAR_3, VAR_1, VAR_4, VAR_7, VAR_8);

  VAR_9 = FUNC_0(VAR_2, VAR_9);
  VAR_9 = FUNC_0(VAR_0, VAR_9);

  return FUNC_2(FUNC_3(VAR_9, VAR_8));
}
