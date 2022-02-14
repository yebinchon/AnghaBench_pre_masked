
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,int,int *,int *) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,char*,int ,char const*) ;
 int FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_wc__db_wcroot_t *VAR_4,
                 const char *VAR_5,
                 apr_hash_t *VAR_6,
                 apr_pool_t *VAR_7)
{
  svn_sqlite__stmt_t *VAR_8;
  int VAR_9;

  FUNC_0(FUNC_6(&VAR_8, VAR_4->sdb,
                                    VAR_2));
  FUNC_0(FUNC_5(VAR_8, "is", VAR_4->wc_id, VAR_5));
  FUNC_0(FUNC_3(VAR_8, 3, VAR_6, VAR_7));
  FUNC_0(FUNC_8(&VAR_9, VAR_8));

  if (VAR_9 == 1 || !VAR_6)
    {

      if (!VAR_6 && VAR_9)
        {
          FUNC_0(FUNC_6(&VAR_8, VAR_4->sdb,
                                            VAR_0));
          FUNC_0(FUNC_5(VAR_8, "is", VAR_4->wc_id, VAR_5));
          FUNC_0(FUNC_7(VAR_8));
        }

      return VAR_3;
    }



  FUNC_0(FUNC_6(&VAR_8, VAR_4->sdb,
                                    VAR_1));
  FUNC_0(FUNC_5(VAR_8, "is", VAR_4->wc_id, VAR_5));
  if (*VAR_5 != '\0')
    FUNC_0(FUNC_4(VAR_8, 3,
                                  FUNC_2(VAR_5,
                                                      VAR_7)));
  FUNC_0(FUNC_3(VAR_8, 4, VAR_6, VAR_7));
  return FUNC_1(FUNC_7(VAR_8));
}
