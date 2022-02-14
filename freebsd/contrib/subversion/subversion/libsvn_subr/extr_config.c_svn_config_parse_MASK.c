
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,int *,int *) ;
 int * FUNC_2 (int **,int ,int ,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

svn_error_t *
FUNC_5(svn_config_t **VAR_2, svn_stream_t *VAR_3,
                 svn_boolean_t VAR_4,
                 svn_boolean_t VAR_5,
                 apr_pool_t *VAR_6)
{
  svn_config_t *VAR_7;
  svn_error_t *VAR_8;
  apr_pool_t *VAR_9 = FUNC_3(VAR_6);

  VAR_8 = FUNC_2(&VAR_7,
                           VAR_4,
                           VAR_5,
                           VAR_6);

  if (VAR_8 == VAR_0)
    VAR_8 = FUNC_1(VAR_3,
                                   FUNC_0(
                                       ((void*)0), ((void*)0),
                                       VAR_1,
                                       VAR_9),
                                   VAR_7, VAR_9);

  if (VAR_8 == VAR_0)
    *VAR_2 = VAR_7;

  FUNC_4(VAR_9);

  return VAR_8;
}
