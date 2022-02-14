
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,char const*,int *,char*,int ,int *,int *,int *,int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int **,int *,int *,int *,char const*,int *,int *) ;
 int VAR_1 ;

svn_error_t *
FUNC_4(svn_wc__db_t *VAR_2,
                                     const char *VAR_3,
                                     apr_pool_t *VAR_4)
{
  svn_boolean_t VAR_5;
  svn_skel_t *VAR_6;

  FUNC_0(FUNC_3(&VAR_6, ((void*)0), ((void*)0),
                                   VAR_2, VAR_3,
                                   VAR_4, VAR_4));

  if (!VAR_6)
    return VAR_0;

  return FUNC_2(FUNC_1(
                           &VAR_5,
                           VAR_2, VAR_3, VAR_6, "",
                           VAR_1,
                           ((void*)0), ((void*)0),
                           ((void*)0), ((void*)0),
                           VAR_4));
}
