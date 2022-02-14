
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int db3; } ;
typedef TYPE_1__ svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int sqlite3_backup ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*,int ,char*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int ,int *,int ,char const*) ;
 int FUNC_8 (char const*,char const*,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (TYPE_1__**,char const*,int ,int *,int ,int *,int ,int *,int *) ;

svn_error_t *
FUNC_11(const char *VAR_8,
                    const char *VAR_9,
                    apr_pool_t *VAR_10)
{
  svn_sqlite__db_t *VAR_11;

  FUNC_1(FUNC_10(&VAR_11, VAR_8, VAR_6,
                           ((void*)0), 0, ((void*)0), 0,
                           VAR_10, VAR_10));

  {
    svn_sqlite__db_t *VAR_12;
    sqlite3_backup *VAR_13;
    int VAR_14, VAR_15;

    FUNC_1(FUNC_10(&VAR_12, VAR_9, VAR_7,
                             ((void*)0), 0, ((void*)0), 0, VAR_10, VAR_10));
    VAR_13 = FUNC_4(VAR_12->db3, "main", VAR_11->db3, "main");
    if (!VAR_13)
      return FUNC_7(VAR_4, ((void*)0),
                               FUNC_2("SQLite hotcopy failed for %s"), VAR_8);
    do
      {





        VAR_14 = FUNC_5(VAR_13, 1024);






        if (VAR_14 == VAR_0 || VAR_14 == VAR_2)
          FUNC_6(25);
      }
    while (VAR_14 == VAR_3 || VAR_14 == VAR_0 || VAR_14 == VAR_2);
    VAR_15 = FUNC_3(VAR_13);
    if (VAR_14 != VAR_1)
      FUNC_0(VAR_14, VAR_12);
    FUNC_0(VAR_15, VAR_12);
    FUNC_1(FUNC_9(VAR_12));
  }

  FUNC_1(FUNC_9(VAR_11));

  FUNC_1(FUNC_8(VAR_8, VAR_9, VAR_10));

  return VAR_5;
}
