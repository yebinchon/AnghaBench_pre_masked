
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (void const*,int ,int *) ;
 int FUNC_3 (int *,int,int ) ;
 void* FUNC_4 (int *,int,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(apr_uint64_t *VAR_2,
              svn_skel_t **VAR_3,
              svn_wc__db_wcroot_t *VAR_4,
              const char *VAR_5,
              apr_uint64_t VAR_6,
              apr_pool_t *VAR_7,
              apr_pool_t *VAR_8)
{
  svn_sqlite__stmt_t *VAR_9;
  svn_boolean_t VAR_10;

  if (VAR_6 != 0)
    {
      FUNC_0(FUNC_6(&VAR_9, VAR_4->sdb,
                                        VAR_0));
      FUNC_0(FUNC_3(VAR_9, 1, VAR_6));

      FUNC_0(FUNC_9(VAR_9));
    }

  FUNC_0(FUNC_6(&VAR_9, VAR_4->sdb,
                                    VAR_1));
  FUNC_0(FUNC_8(&VAR_10, VAR_9));

  if (!VAR_10)
    {
      *VAR_2 = 0;
      *VAR_3 = ((void*)0);
    }
  else
    {
      apr_size_t VAR_11;
      const void *VAR_12;

      *VAR_2 = FUNC_5(VAR_9, 0);

      VAR_12 = FUNC_4(VAR_9, 1, &VAR_11, VAR_7);

      *VAR_3 = FUNC_2(VAR_12, VAR_11, VAR_7);
    }

  return FUNC_1(FUNC_7(VAR_9));
}
