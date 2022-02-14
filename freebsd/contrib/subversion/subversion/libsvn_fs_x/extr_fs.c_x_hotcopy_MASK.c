
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_mutex__t ;
typedef int svn_fs_t ;
typedef int svn_fs_hotcopy_notify_t ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int *,char const*,char const*,int ,int ,void*,int (*) (void*),void*,int *,int *,int *) ;
 int FUNC_4 (int *,char const*,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_t *VAR_1,
          svn_fs_t *VAR_2,
          const char *VAR_3,
          const char *VAR_4,
          svn_boolean_t VAR_5,
          svn_boolean_t VAR_6,
          svn_fs_hotcopy_notify_t VAR_7,
          void *VAR_8,
          svn_cancel_func_t VAR_9,
          void *VAR_10,
          svn_mutex__t *VAR_11,
          apr_pool_t *VAR_12,
          apr_pool_t *VAR_13)
{

  FUNC_0(FUNC_4(VAR_1, VAR_3, VAR_11, VAR_12,
                 VAR_13));
  if (VAR_9)
    FUNC_0(VAR_9(VAR_10));

  FUNC_0(FUNC_2(VAR_2, VAR_0));
  FUNC_0(FUNC_1(VAR_2));





  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
                            VAR_6, VAR_7, VAR_8,
                            VAR_9, VAR_10, VAR_11,
                            VAR_12, VAR_13);
}
