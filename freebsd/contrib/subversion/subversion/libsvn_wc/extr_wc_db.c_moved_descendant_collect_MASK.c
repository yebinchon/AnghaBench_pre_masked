
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*,char const*) ;
 int FUNC_4 (int *,char*,int ,char const*,int) ;
 char* FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_hash_t **VAR_2,
                        svn_wc__db_wcroot_t *VAR_3,
                        const char *VAR_4,
                        int VAR_5,
                        apr_pool_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  svn_sqlite__stmt_t *VAR_8;
  svn_boolean_t VAR_9;

  *VAR_2 = ((void*)0);

  FUNC_0(FUNC_6(&VAR_8, VAR_3->sdb,
                                    VAR_0));
  FUNC_0(FUNC_4(VAR_8, "isd", VAR_3->wc_id,
                                         VAR_4,
                                         VAR_5));

  FUNC_0(FUNC_8(&VAR_9, VAR_8));
  if (! VAR_9)
    return FUNC_2(FUNC_7(VAR_8));



  while (VAR_9)
    {
      const char *VAR_10 = FUNC_5(VAR_8, 1, VAR_6);
      const char *VAR_11 = FUNC_5(VAR_8, 4, VAR_6);

      if (!*VAR_2)
        *VAR_2 = FUNC_1(VAR_6);

      FUNC_3(*VAR_2, VAR_11, VAR_10);

      FUNC_0(FUNC_8(&VAR_9, VAR_8));
    }
  FUNC_0(FUNC_7(VAR_8));

  return VAR_1;
}
