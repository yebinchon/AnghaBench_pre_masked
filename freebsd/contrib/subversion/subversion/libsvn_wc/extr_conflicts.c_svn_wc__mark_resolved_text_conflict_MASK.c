
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,int *,int *,char const*,int *,int ,int *,int ,int *,int ,void*,int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*,int ,int ,int ,int *,int *) ;
 int FUNC_4 (int **,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_5 (int *,char const*,int ,void*,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_6(svn_wc__db_t *VAR_4,
                                    const char *VAR_5,
                                    svn_cancel_func_t VAR_6,
                                    void *VAR_7,
                                    apr_pool_t *VAR_8)
{
  svn_skel_t *VAR_9;
  svn_skel_t *VAR_10;

  FUNC_0(FUNC_4(&VAR_10, ((void*)0), ((void*)0),
                                   VAR_4, VAR_5,
                                   VAR_8, VAR_8));

  if (!VAR_10)
    return VAR_1;

  FUNC_0(FUNC_1(&VAR_9, ((void*)0),
                                            VAR_4, VAR_5, VAR_10,
                                            VAR_3,
                                            ((void*)0), VAR_0, ((void*)0),
                                            VAR_6, VAR_7,
                                            VAR_8, VAR_8));

  FUNC_0(FUNC_3(VAR_4, VAR_5, VAR_2, VAR_0, VAR_0,
                                      VAR_9, VAR_8));

  return FUNC_2(FUNC_5(VAR_4, VAR_5,
                                        VAR_6, VAR_7,
                                        VAR_8));
}
