
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int * FUNC_2 (int *,char const*,char const*,int ,int *) ;
 int * FUNC_3 (scalar_t__*,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 int * FUNC_4 (scalar_t__*,char const**,int *,int *,char const**,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 int * FUNC_5 (char const**,int *,char const**,int *,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_6 (char const**,char const**,char const*,int *) ;
 char* FUNC_7 (char const*,int *) ;
 char* FUNC_8 (char const*,char const*,int *) ;
 char const* FUNC_9 (char const*,char const*) ;
 int * FUNC_10 (int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 int * FUNC_11 (char const**,char const**,TYPE_1__*,int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_12(apr_int64_t *VAR_4,
                  const char **VAR_5,
                  svn_revnum_t *VAR_6,
                  svn_wc__db_status_t *VAR_7,
                  svn_node_kind_t *VAR_8,
                  svn_boolean_t *VAR_9,
                  svn_wc__db_wcroot_t *VAR_10,
                  const char *VAR_11,
                  svn_wc__db_wcroot_t *VAR_12,
                  apr_pool_t *VAR_13,
                  apr_pool_t *VAR_14)
{
  const char *VAR_15;
  svn_revnum_t VAR_16;
  svn_wc__db_status_t VAR_17;
  apr_int64_t VAR_18;
  svn_boolean_t VAR_19;

  FUNC_0(FUNC_3(&VAR_17, VAR_8, &VAR_16, &VAR_15, &VAR_18,
                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_5,
                    VAR_4, VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    ((void*)0), &VAR_19, ((void*)0), ((void*)0),
                    ((void*)0) ,
                    ((void*)0) ,
                    ((void*)0) ,
                    VAR_10, VAR_11, VAR_13, VAR_14));

  if (VAR_9)
    *VAR_9 = VAR_19;

  if (VAR_17 == VAR_3)
    {


      const char *VAR_20, *VAR_21;

      FUNC_6(&VAR_20, &VAR_21, VAR_11,
                       VAR_14);
      FUNC_0(FUNC_12(VAR_4, VAR_5, VAR_6,
                                ((void*)0), ((void*)0), ((void*)0),
                                VAR_10, VAR_20, VAR_12,
                                VAR_14, VAR_14));
      if (*VAR_5)
        *VAR_5 = FUNC_8(*VAR_5, VAR_21,
                                             VAR_13);
    }
  else if (VAR_17 == VAR_1)
    {
      FUNC_0(FUNC_4(&VAR_17, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                            ((void*)0), ((void*)0), ((void*)0), VAR_10, VAR_11,
                            VAR_14, VAR_14));
    }
  else if (VAR_17 == VAR_2 && VAR_19)
    {
      const char *VAR_22, *VAR_23;

      FUNC_0(FUNC_5(&VAR_22, ((void*)0),
                            &VAR_23,
                            ((void*)0), VAR_10, VAR_11,
                            VAR_14, VAR_14));
      if (VAR_23)
        {
          const char *VAR_24;
          const char *VAR_25 = FUNC_7(VAR_23,
                                                               VAR_14);



          FUNC_0(FUNC_4(((void*)0), &VAR_24,
                                ((void*)0), ((void*)0),
                                VAR_5, VAR_4, VAR_6,
                                ((void*)0), ((void*)0), ((void*)0),
                                VAR_10, VAR_25,
                                VAR_14, VAR_14));
          *VAR_5
            = FUNC_8(*VAR_5,
                               FUNC_9(VAR_24,
                                                         VAR_11),
                               VAR_13);
        }
      else if (VAR_22)
        {
          FUNC_0(FUNC_10(((void*)0), ((void*)0), VAR_6,
                                                    VAR_5,
                                                    VAR_4, ((void*)0), ((void*)0),
                                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                    VAR_10, VAR_11,
                                                    VAR_13,
                                                    VAR_14));
        }
      else
        FUNC_1();
    }
  else if (VAR_17 == VAR_2)
    {


    }
  else
    {
      *VAR_5 = VAR_15;
      *VAR_6 = VAR_16;
      *VAR_4 = VAR_18;
    }

  if (VAR_7)
    *VAR_7 = VAR_17;

  if (VAR_10 != VAR_12 && *VAR_5)
    {
      const char *VAR_26;
      const char *VAR_27;






      FUNC_0(FUNC_11(&VAR_26, &VAR_27,
                                          VAR_10, *VAR_4,
                                          VAR_14));

      FUNC_0(FUNC_2(VAR_4, VAR_26, VAR_27,
                              VAR_12->sdb, VAR_14));
    }

  return VAR_0;
}
