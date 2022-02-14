
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sdb; int wc_id; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int * VAR_3 ;
 int FUNC_2 (scalar_t__*,char const*,char const*,int ,int *) ;
 int FUNC_3 (scalar_t__*,int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_4 (int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_5 (int *,int *,char const**,int *,TYPE_1__*,char const*,int *,int *) ;
 char* FUNC_6 (char const*,int *) ;
 int FUNC_7 (int *,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_11 (int *,char const**,TYPE_1__*,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_wc__db_wcroot_t *VAR_7,
             const char *VAR_8,
             const char *VAR_9,
             apr_pool_t *VAR_10)
{
  svn_sqlite__stmt_t *VAR_11;
  apr_int64_t VAR_12;
  const char *VAR_13;
  svn_wc__db_status_t VAR_14;
  const char *VAR_15;
  svn_boolean_t VAR_16;
  apr_int64_t VAR_17;

  VAR_13 = VAR_8;

  FUNC_0(FUNC_3(&VAR_14,
                    ((void*)0), ((void*)0), ((void*)0), &VAR_17,
                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    ((void*)0),
                    &VAR_16, ((void*)0), ((void*)0),
                    VAR_7, VAR_8,
                    VAR_10, VAR_10));

  if (VAR_14 == VAR_6)
    {


      const char *VAR_18 = FUNC_6(VAR_13,
                                                       VAR_10);
      FUNC_0(FUNC_3(&VAR_14,
                        ((void*)0), ((void*)0), ((void*)0), &VAR_17,
                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                        ((void*)0), ((void*)0), ((void*)0),
                        ((void*)0), ((void*)0), ((void*)0),
                        VAR_7, VAR_18,
                        VAR_10, VAR_10));
      VAR_13 = VAR_18;
    }

  if (VAR_17 == VAR_0)
    {





      if (VAR_14 == VAR_5)
        {
          const char *VAR_19;

          FUNC_0(FUNC_5(((void*)0), ((void*)0),
                                &VAR_19, ((void*)0),
                                VAR_7, VAR_13,
                                VAR_10,
                                VAR_10));
          if (VAR_19)
            {



              VAR_14 = VAR_4;
              VAR_13 = FUNC_6(VAR_19,
                                                      VAR_10);
            }
        }

      if (VAR_14 == VAR_4)
        {
          FUNC_0(FUNC_4(((void*)0), ((void*)0), ((void*)0), &VAR_17,
                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                VAR_7, VAR_13,
                                VAR_10, VAR_10));
        }
      else
        FUNC_0(FUNC_10(((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                  &VAR_17,
                                                  ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                  ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                  VAR_7, VAR_13,
                                                  VAR_10, VAR_10));
    }

  FUNC_0(FUNC_11(((void*)0), &VAR_15, VAR_7,
                                      VAR_17, VAR_10));
  FUNC_1(VAR_15);
  FUNC_0(FUNC_2(&VAR_12, VAR_9, VAR_15,
                          VAR_7->sdb, VAR_10));


  FUNC_0(FUNC_8(&VAR_11, VAR_7->sdb,
                                    VAR_1));
  FUNC_0(FUNC_7(VAR_11, "isii", VAR_7->wc_id, VAR_8,
                            VAR_17, VAR_12));
  FUNC_0(FUNC_9(VAR_11));

  if (VAR_16)
    {

      FUNC_0(FUNC_8(&VAR_11, VAR_7->sdb,
                                        VAR_2));
      FUNC_0(FUNC_7(VAR_11, "ii", VAR_17, VAR_12));
      FUNC_0(FUNC_9(VAR_11));
    }






  return VAR_3;
}
