
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
 char* FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int *,char*,int ,char const*,char const*) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(const char **VAR_2,
            svn_wc__db_wcroot_t *VAR_3,
            const char *VAR_4,
            apr_pool_t *VAR_5,
            apr_pool_t *VAR_6)
{
  svn_sqlite__stmt_t *VAR_7;
  svn_boolean_t VAR_8;
  int VAR_9 = FUNC_3(VAR_4);
  const char *VAR_10;




  FUNC_0(FUNC_10(&VAR_7, VAR_3->sdb,
                                    VAR_0));




  VAR_10 = FUNC_4(VAR_4, '/');

  if (VAR_10 != ((void*)0))
    VAR_10 = FUNC_2(VAR_6, VAR_4,
                                 VAR_10 - VAR_4);
  else
    VAR_10 = VAR_4;

  FUNC_0(FUNC_7(VAR_7, "iss",
                            VAR_3->wc_id,
                            VAR_4,
                            VAR_10));

  FUNC_0(FUNC_12(&VAR_8, VAR_7));

  while (VAR_8)
    {
      const char *VAR_11 = FUNC_9(VAR_7, 0, ((void*)0));

      if (FUNC_6(VAR_11, VAR_4))
        {
          int VAR_12 = FUNC_8(VAR_7, 1);
          int VAR_13 = FUNC_3(VAR_11);

          if (VAR_12 == -1
              || VAR_12 + VAR_13 >= VAR_9)
            {
              *VAR_2 = FUNC_1(VAR_5, VAR_11);
              FUNC_0(FUNC_11(VAR_7));
              return VAR_1;
            }
        }

      FUNC_0(FUNC_12(&VAR_8, VAR_7));
    }

  *VAR_2 = ((void*)0);

  return FUNC_5(FUNC_11(VAR_7));
}
