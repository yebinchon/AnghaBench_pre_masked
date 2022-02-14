
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
 int * VAR_1 ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const**,char const**,char const*,int *) ;
 int FUNC_6 (int *,char*,int ,char const*) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(const char **VAR_2,
                   int *VAR_3,
                   svn_wc__db_wcroot_t *VAR_4,
                   const char *VAR_5,
                   const char *VAR_6,
                   int VAR_7,
                   apr_pool_t *VAR_8,
                   apr_pool_t *VAR_9)
{
  const char *VAR_10 = "";
  svn_sqlite__stmt_t *VAR_11;
  const char *VAR_12;
  int VAR_13;
  int VAR_14;
  svn_boolean_t VAR_15;

  while (FUNC_1(VAR_6) > VAR_7)
    {
      const char *VAR_16;
      FUNC_5(&VAR_6, &VAR_16, VAR_6, VAR_9);
      VAR_10 = FUNC_3(VAR_10, VAR_16, VAR_9);
    }

  FUNC_0(FUNC_9(&VAR_11, VAR_4->sdb,
                                    VAR_0));
  FUNC_0(FUNC_6(VAR_11, "is",
                            VAR_4->wc_id, VAR_6));
  FUNC_0(FUNC_11(&VAR_15, VAR_11));

  if (!VAR_15)
    {

      *VAR_2 = ((void*)0);
      *VAR_3 = -1;

      FUNC_0(FUNC_10(VAR_11));

      return VAR_1;
    }

  VAR_12 = FUNC_8(VAR_11, 0, VAR_9);
  VAR_13 = FUNC_7(VAR_11, 1);
  VAR_14 = FUNC_7(VAR_11, 2);

  FUNC_0(FUNC_10(VAR_11));

  if (! FUNC_4(VAR_5, VAR_12))
    {
      *VAR_2 = FUNC_3(VAR_12, VAR_10,
                                             VAR_8);
      *VAR_3 = VAR_13;
      return VAR_1;
    }
  else if (!VAR_14)
    {
      *VAR_2 = ((void*)0);
      *VAR_3 = -1;
      return VAR_1;
    }

  return FUNC_2(
        FUNC_12(VAR_2,
                           VAR_3,
                           VAR_4,
                           VAR_5,
                           FUNC_3(VAR_12, VAR_10,
                                            VAR_9),
                           VAR_14,
                           VAR_8, VAR_9));
}
