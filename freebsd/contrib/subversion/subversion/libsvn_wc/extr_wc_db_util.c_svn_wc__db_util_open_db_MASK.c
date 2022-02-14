
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__mode_t ;
typedef int svn_sqlite__db_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 char const* const* VAR_5 ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *,char*,int,int ,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_7 ;
 int FUNC_7 (int **,char const*,int ,char const* const*,int ,int *,int ,int *,int *) ;
 char* FUNC_8 (char const*,char const*,int *) ;

svn_error_t *
FUNC_9(svn_sqlite__db_t **VAR_8,
                        const char *VAR_9,
                        const char *VAR_10,
                        svn_sqlite__mode_t VAR_11,
                        svn_boolean_t VAR_12,
                        apr_int32_t VAR_13,
                        const char *const *VAR_14,
                        apr_pool_t *VAR_15,
                        apr_pool_t *VAR_16)
{
  const char *VAR_17 = FUNC_8(VAR_9, VAR_10,
                                              VAR_16);

  if (VAR_11 != VAR_7)
    {
      svn_node_kind_t VAR_18;



      FUNC_0(FUNC_4(VAR_17, &VAR_18, VAR_16));

      if (VAR_18 != VAR_6)
        return FUNC_3(VAR_0, ((void*)0),
                                 FUNC_1("Working copy database '%s' not found"),
                                 FUNC_2(VAR_17,
                                                        VAR_16));
    }

  FUNC_0(FUNC_7(VAR_8, VAR_17, VAR_11,
                           VAR_14 ? VAR_14 : VAR_5,
                           0, ((void*)0), VAR_13, VAR_15, VAR_16));

  if (VAR_12)
    FUNC_0(FUNC_6(*VAR_8, VAR_1));

  FUNC_0(FUNC_5(*VAR_8, "relpath_depth", 1,
                                             VAR_3 ,
                                             VAR_4, ((void*)0)));

  return VAR_2;
}
