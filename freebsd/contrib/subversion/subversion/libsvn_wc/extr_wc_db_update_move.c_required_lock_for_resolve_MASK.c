
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char const*,char const*,int *) ;
 int FUNC_3 (int *,char*,int ,char const*,int ) ;
 char* FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char **VAR_2,
                          svn_wc__db_wcroot_t *VAR_3,
                          const char *VAR_4,
                          apr_pool_t *VAR_5,
                          apr_pool_t *VAR_6)
{
  svn_sqlite__stmt_t *VAR_7;
  svn_boolean_t VAR_8;

  *VAR_2 = VAR_4;






  FUNC_0(FUNC_5(&VAR_7, VAR_3->sdb,
                                    VAR_0));
  FUNC_0(FUNC_3(VAR_7, "isd", VAR_3->wc_id, VAR_4, 0));
  FUNC_0(FUNC_7(&VAR_8, VAR_7));

  while (VAR_8)
    {
      const char *VAR_9 = FUNC_4(VAR_7, 1,
                                                             ((void*)0));

      *VAR_2
        = FUNC_2(*VAR_2,
                                           VAR_9,
                                           VAR_6);

      FUNC_0(FUNC_7(&VAR_8, VAR_7));
    }
  FUNC_0(FUNC_6(VAR_7));

  *VAR_2 = FUNC_1(VAR_5, *VAR_2);

  return VAR_1;
}
