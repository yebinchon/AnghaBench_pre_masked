
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_prop_inherited_item_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * VAR_3 ;
 int * FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int,int *,int *) ;
 int * FUNC_6 (int *,char*,int ,char const*) ;
 int FUNC_7 (int *,int ) ;
 char* FUNC_8 (int *,int,int *) ;
 int * FUNC_9 (int *,int ) ;
 int * FUNC_10 (int **,int *,int ) ;
 int * FUNC_11 (int *) ;
 int * FUNC_12 (scalar_t__*,int *) ;
 int * FUNC_13 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(void *VAR_4,
           svn_sqlite__db_t *VAR_5,
           apr_pool_t *VAR_6)
{
  svn_sqlite__stmt_t *VAR_7, *VAR_8;
  svn_boolean_t VAR_9;
  apr_pool_t *VAR_10 = FUNC_3(VAR_6);
  apr_array_header_t *VAR_11 = FUNC_1(
    VAR_6, 0, sizeof(svn_prop_inherited_item_t *));
  svn_error_t *VAR_12;


  FUNC_0(FUNC_9(VAR_5, VAR_2));




  FUNC_0(FUNC_10(&VAR_7, VAR_5,
                                    VAR_1));
  FUNC_0(FUNC_12(&VAR_9, VAR_7));

  VAR_12 = FUNC_10(&VAR_8, VAR_5,
                                  VAR_0);
  if (VAR_12)
    return FUNC_2(VAR_12, FUNC_11(VAR_7));

  while (VAR_9)
    {
      const char *VAR_13 = FUNC_8(VAR_7, 1, ((void*)0));
      apr_int64_t VAR_14 = FUNC_7(VAR_7, 0);

      VAR_12 = FUNC_6(VAR_8, "is", VAR_14,
                              VAR_13);
      if (!VAR_12)
        VAR_12 = FUNC_5(VAR_8, 3,
                                      VAR_11, VAR_10);
      if (!VAR_12)
        VAR_12 = FUNC_13(VAR_8);
      if (!VAR_12)
        VAR_12 = FUNC_12(&VAR_9, VAR_7);

      if (VAR_12)
        return FUNC_2(
                VAR_12,
                FUNC_2(

                  FUNC_11(VAR_7),
                  FUNC_11(VAR_8)));
    }

  VAR_12 = FUNC_11(VAR_8);
  if (VAR_12)
    return FUNC_2(VAR_12, FUNC_11(VAR_7));
  FUNC_0(FUNC_11(VAR_7));

  FUNC_4(VAR_10);

  return VAR_3;
}
