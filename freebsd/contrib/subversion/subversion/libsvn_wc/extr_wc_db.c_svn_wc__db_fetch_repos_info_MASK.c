
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int ,int ,long) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 char* FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;

svn_error_t *
FUNC_9(const char **VAR_4,
                            const char **VAR_5,
                            svn_wc__db_wcroot_t *VAR_6,
                            apr_int64_t VAR_7,
                            apr_pool_t *VAR_8)
{
  svn_sqlite__stmt_t *VAR_9;
  svn_boolean_t VAR_10;

  if (!VAR_4 && !VAR_5)
    return VAR_3;

  if (VAR_7 == VAR_0)
    {
      if (VAR_4)
        *VAR_4 = ((void*)0);
      if (VAR_5)
        *VAR_5 = ((void*)0);
      return VAR_3;
    }

  FUNC_0(FUNC_6(&VAR_9, VAR_6->sdb,
                                    VAR_1));
  FUNC_0(FUNC_4(VAR_9, "i", VAR_7));
  FUNC_0(FUNC_8(&VAR_10, VAR_9));
  if (!VAR_10)
    return FUNC_2(VAR_2, FUNC_7(VAR_9),
                             FUNC_1("No REPOSITORY table entry for id '%ld'"),
                             (long int)VAR_7);

  if (VAR_4)
    *VAR_4 = FUNC_5(VAR_9, 0, VAR_8);
  if (VAR_5)
    *VAR_5 = FUNC_5(VAR_9, 1, VAR_8);

  return FUNC_3(FUNC_7(VAR_9));
}
