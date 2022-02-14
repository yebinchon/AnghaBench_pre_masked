
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char const*,int *) ;
 char* FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int *,char*,int ,char const*) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(const char **VAR_2,
                    const char **VAR_3,
                    const char *VAR_4,
                    int *VAR_5,
                    svn_wc__db_wcroot_t *VAR_6,
                    const char *VAR_7,
                    apr_pool_t *VAR_8,
                    apr_pool_t *VAR_9)
{
  svn_sqlite__stmt_t *VAR_10;
  svn_boolean_t VAR_11;


  FUNC_0(FUNC_9(&VAR_10, VAR_6->sdb,
                                    VAR_0));
  FUNC_0(FUNC_6(VAR_10, "is",
                            VAR_6->wc_id, VAR_4));
  FUNC_0(FUNC_11(&VAR_11, VAR_10));

  if (!VAR_11)
    {



      if (VAR_2)
        *VAR_2 = ((void*)0);
      if (VAR_3)
        *VAR_3 = ((void*)0);

      FUNC_0(FUNC_10(VAR_10));
      return VAR_1;
    }

  if (VAR_5)
    *VAR_5 = FUNC_7(VAR_10, 1);

  if (VAR_2 || VAR_3)
    {
      const char *VAR_12;



      VAR_12 = FUNC_8(VAR_10, 0,
                                                          VAR_8);
      if (VAR_3)
        *VAR_3 = VAR_12;

      if (VAR_2)
        {
          if (FUNC_2(VAR_4, VAR_7) == 0)
            {



              *VAR_2 = VAR_12;
            }
          else
            {
              const char *VAR_13;







              VAR_13 = FUNC_5(
                                VAR_4, VAR_7);

              FUNC_1(VAR_13 && FUNC_3(VAR_13) > 0);




              *VAR_2 = FUNC_4(VAR_12,
                                                     VAR_13,
                                                     VAR_8);
            }
        }
    }

  FUNC_0(FUNC_10(VAR_10));

  return VAR_1;
}
