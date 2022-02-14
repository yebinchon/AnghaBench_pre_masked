
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 char const* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (char const*,int *,int *) ;
 int FUNC_9 (char const**,int *,char const*,char const*,int *,int *) ;

svn_error_t *
FUNC_10(svn_skel_t **VAR_4,
                                      svn_wc__db_t *VAR_5,
                                      const char *VAR_6,
                                      const char *VAR_7,
                                      const char *VAR_8,
                                      apr_pool_t *VAR_9,
                                      apr_pool_t *VAR_10)
{
  svn_node_kind_t VAR_11;
  const char *VAR_12;

  *VAR_4 = FUNC_7(VAR_9);

  FUNC_1(FUNC_3(VAR_6));
  FUNC_1(FUNC_3(VAR_7));
  FUNC_1(FUNC_3(VAR_8));


  FUNC_0(FUNC_6(VAR_7, &VAR_11, VAR_9));

  if (VAR_11 == VAR_3)
    return FUNC_5(VAR_1, ((void*)0),
                             FUNC_2("'%s' not found"),
                             FUNC_4(VAR_7,
                                                    VAR_10));

  FUNC_0(FUNC_9(&VAR_12, VAR_5, VAR_6, VAR_8,
                                VAR_9, VAR_10));
  FUNC_8(VAR_12, *VAR_4, VAR_9);

  FUNC_0(FUNC_9(&VAR_12, VAR_5, VAR_6, VAR_7,
                                VAR_9, VAR_10));
  FUNC_8(VAR_12, *VAR_4, VAR_9);

  FUNC_0(FUNC_9(&VAR_12, VAR_5, VAR_6,
                                VAR_6, VAR_9, VAR_10));
  FUNC_8(VAR_12, *VAR_4, VAR_9);

  FUNC_8(VAR_0, *VAR_4, VAR_9);

  return VAR_2;
}
