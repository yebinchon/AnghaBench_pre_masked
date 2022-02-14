
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_t ;
typedef int (* svn_fs_hotcopy_notify_t ) (void*,scalar_t__,scalar_t__,int *) ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (int *,char const*,char const*,int ,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_t *VAR_2,
                      svn_fs_t *VAR_3,
                      svn_revnum_t VAR_4,
                      const char *VAR_5,
                      const char *VAR_6,
                      const char *VAR_7,
                      const char *VAR_8,
                      svn_fs_hotcopy_notify_t VAR_9,
                      void* VAR_10,
                      svn_cancel_func_t VAR_11,
                      void* VAR_12,
                      apr_pool_t *VAR_13)
{
  apr_pool_t *VAR_14 = FUNC_4(VAR_13);
  svn_revnum_t VAR_15;

  for (VAR_15 = 0; VAR_15 <= VAR_4; VAR_15++)
    {
      svn_boolean_t VAR_16 = VAR_1;

      FUNC_3(VAR_14);

      if (VAR_11)
        FUNC_0(VAR_11(VAR_12));

      FUNC_0(FUNC_2(&VAR_16, VAR_5, VAR_6,
                                       FUNC_1(VAR_14, "%ld", VAR_15),
                                       VAR_14));
      FUNC_0(FUNC_2(&VAR_16, VAR_7,
                                       VAR_8,
                                       FUNC_1(VAR_14, "%ld", VAR_15),
                                       VAR_14));

      if (VAR_9 && !VAR_16)
        VAR_9(VAR_10, VAR_15, VAR_15, VAR_14);
    }
    FUNC_5(VAR_14);

    return VAR_0;
}
