
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xlate_handle_node_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (char const*,int *) ;
 int * FUNC_2 (char const**,char const*,int *,int *) ;
 int FUNC_3 (int **,int ,char const*,char const*,int *) ;
 char* FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ) ;

svn_error_t *
FUNC_7(const char **VAR_2,
                            const char *VAR_3,
                            const char *VAR_4,
                            apr_pool_t *VAR_5)
{
  xlate_handle_node_t *VAR_6;
  svn_error_t *VAR_7;
  const char *VAR_8 = FUNC_4(VAR_0, VAR_4,
                                          VAR_5);

  FUNC_0(FUNC_3(&VAR_6, VAR_0, VAR_4,
                                VAR_8, VAR_5));
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_6, VAR_5);
  FUNC_0(FUNC_6(VAR_7,
                                   FUNC_5
                                      (VAR_6,
                                       VAR_1,
                                       VAR_5)));

  return FUNC_1(*VAR_2, VAR_5);
}
