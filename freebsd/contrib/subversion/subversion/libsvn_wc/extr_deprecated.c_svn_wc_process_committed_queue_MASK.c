
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int svn_wc_committed_queue_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,char const*,char const*,int *,int *,int *) ;

svn_error_t *
FUNC_5(svn_wc_committed_queue_t *VAR_1,
                               svn_wc_adm_access_t *VAR_2,
                               svn_revnum_t VAR_3,
                               const char *VAR_4,
                               const char *VAR_5,
                               apr_pool_t *VAR_6)
{
  svn_wc_context_t *VAR_7;

  FUNC_0(FUNC_2(&VAR_7, ((void*)0),
                                         FUNC_1(VAR_2),
                                         VAR_6));
  FUNC_0(FUNC_4(VAR_1, VAR_7, VAR_3,
                                          VAR_4, VAR_5,
                                          ((void*)0), ((void*)0), VAR_6));
  FUNC_0(FUNC_3(VAR_7));

  return VAR_0;
}
