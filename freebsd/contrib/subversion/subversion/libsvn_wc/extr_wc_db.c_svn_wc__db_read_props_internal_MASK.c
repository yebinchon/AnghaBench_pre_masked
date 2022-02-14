
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int **,TYPE_1__*,char const*,scalar_t__,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int ,char const*) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int **,int *,int ,int *,int *) ;
 int FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__*,int *) ;

svn_error_t *
FUNC_10(apr_hash_t **VAR_3,
                               svn_wc__db_wcroot_t *VAR_4,
                               const char *VAR_5,
                               apr_pool_t *VAR_6,
                               apr_pool_t *VAR_7)
{
  svn_sqlite__stmt_t *VAR_8;
  svn_boolean_t VAR_9;
  svn_error_t *VAR_10 = ((void*)0);

  FUNC_0(FUNC_7(&VAR_8, VAR_4->sdb,
                                    VAR_1));
  FUNC_0(FUNC_4(VAR_8, "is", VAR_4->wc_id, VAR_5));
  FUNC_0(FUNC_9(&VAR_9, VAR_8));

  if (VAR_9 && !FUNC_5(VAR_8, 0))
    {
      VAR_10 = FUNC_6(VAR_3, VAR_8, 0,
                                          VAR_6, VAR_7);
    }
  else
    VAR_9 = VAR_0;

  FUNC_0(FUNC_3(VAR_10, FUNC_8(VAR_8)));

  if (VAR_9)
    return VAR_2;


  FUNC_0(FUNC_2(VAR_3, VAR_4, VAR_5, VAR_0,
                                 VAR_6, VAR_7));
  if (*VAR_3 == ((void*)0))
    {





      *VAR_3 = FUNC_1(VAR_6);
    }

  return VAR_2;
}
