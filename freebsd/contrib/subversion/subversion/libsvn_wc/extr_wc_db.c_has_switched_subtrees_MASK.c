
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (int *,char*,int ,char const*,char const*) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int *) ;
 int FUNC_8 (int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_9 (char const**,int *,TYPE_1__*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_boolean_t *VAR_4,
                      svn_wc__db_wcroot_t *VAR_5,
                      const char *VAR_6,
                      const char *VAR_7,
                      apr_pool_t *VAR_8)
{
  svn_sqlite__stmt_t *VAR_9;
  svn_boolean_t VAR_10;
  apr_int64_t VAR_11;
  const char *VAR_12;


  if (!VAR_4)
    return VAR_2;

  *VAR_4 = VAR_0;

  FUNC_0(FUNC_8(((void*)0), ((void*)0), ((void*)0),
                                            &VAR_12, &VAR_11,
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            VAR_5, VAR_6,
                                            VAR_8, VAR_8));


  if (VAR_7 != ((void*)0))
    {
      const char *VAR_13;
      const char *VAR_14;
      apr_size_t VAR_15, VAR_16;





      FUNC_0(FUNC_9(&VAR_13, ((void*)0), VAR_5,
                                          VAR_11, VAR_8));
      VAR_14 = FUNC_3(VAR_13, VAR_12,
                                        VAR_8);

      VAR_15 = FUNC_2(VAR_7);
      VAR_16 = FUNC_2(VAR_14);
      if ((VAR_15 > VAR_16) || FUNC_1(VAR_14 + VAR_16 - VAR_15, VAR_7))
        {
          *VAR_4 = VAR_3;
          return VAR_2;
        }
    }

  FUNC_0(FUNC_5(&VAR_9, VAR_5->sdb, VAR_1));
  FUNC_0(FUNC_4(VAR_9, "iss", VAR_5->wc_id, VAR_6, VAR_12));
  FUNC_0(FUNC_7(&VAR_10, VAR_9));
  if (VAR_10)
    *VAR_4 = VAR_3;
  FUNC_0(FUNC_6(VAR_9));

  return VAR_2;
}
