
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__mode_t ;
struct TYPE_10__ {char const* const* statement_strings; int nbr_statements; int * state_pool; void* prepared_stmts; int db3; int sqlext_buf3; int sqlext_buf2; int sqlext_buf1; } ;
typedef TYPE_1__ svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__**,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int * VAR_4 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 void* FUNC_3 (int *,int) ;
 int VAR_5 ;
 int FUNC_4 (int *,TYPE_1__*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_1__*,char const*,int ,int ,int *) ;
 int VAR_10 ;
 int FUNC_7 (int ,char*,int,TYPE_1__*,int ) ;
 int FUNC_8 (int ,char*,int,int,TYPE_1__*,int ,int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_14 (int ,char*) ;
 int FUNC_15 (int *,int ,int *,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int,int *) ;

svn_error_t *
FUNC_18(svn_sqlite__db_t **VAR_14, const char *VAR_15,
                 svn_sqlite__mode_t VAR_16, const char * const VAR_17[],
                 int VAR_18, const char * const *VAR_19,
                 apr_int32_t VAR_20,
                 apr_pool_t *VAR_21, apr_pool_t *VAR_22)
{
  FUNC_1(FUNC_15(&VAR_11,
                                VAR_9, ((void*)0), VAR_22));

  *VAR_14 = FUNC_3(VAR_21, sizeof(**VAR_14));

  FUNC_1(FUNC_6(*VAR_14, VAR_15, VAR_16, VAR_20, VAR_22));
  FUNC_2(FUNC_5(*VAR_14,






              "PRAGMA case_sensitive_like=1;"
              "PRAGMA synchronous=OFF;"



              "PRAGMA recursive_triggers=ON;"



              "PRAGMA foreign_keys=OFF;"
              "PRAGMA locking_mode = NORMAL;"

              "PRAGMA journal_mode = TRUNCATE;"
              ),
                *VAR_14);
  FUNC_16(FUNC_5(*VAR_14, "PRAGMA temp_store = MEMORY;"));


  if (VAR_17)
    {
      (*VAR_14)->statement_strings = VAR_17;
      (*VAR_14)->nbr_statements = 0;
      while (*VAR_17 != ((void*)0))
        {
          VAR_17++;
          (*VAR_14)->nbr_statements++;
        }

      (*VAR_14)->prepared_stmts = FUNC_3(
                                  VAR_21,
                                  ((*VAR_14)->nbr_statements + VAR_3)
                                                * sizeof(svn_sqlite__stmt_t *));
    }
  else
    {
      (*VAR_14)->nbr_statements = 0;
      (*VAR_14)->prepared_stmts = FUNC_3(VAR_21,
                                          (0 + VAR_3)
                                                * sizeof(svn_sqlite__stmt_t *));
    }

  (*VAR_14)->state_pool = VAR_21;
  FUNC_4(VAR_21, *VAR_14, VAR_6, VAR_5);

  return VAR_4;
}
