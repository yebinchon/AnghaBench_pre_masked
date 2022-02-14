
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_revision_status_t ;
typedef int svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const**,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int **,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,char const*,char const*,int ,int ,void*,int *,int *) ;

svn_error_t *
FUNC_6(svn_wc_revision_status_t **VAR_0,
                       const char *VAR_1,
                       const char *VAR_2,
                       svn_boolean_t VAR_3,
                       svn_cancel_func_t VAR_4,
                       void *VAR_5,
                       apr_pool_t *VAR_6)
{
  svn_wc_context_t *VAR_7;
  const char *VAR_8;

  FUNC_0(FUNC_1(&VAR_8, VAR_1, VAR_6));
  FUNC_0(FUNC_3(&VAR_7, ((void*)0) , VAR_6, VAR_6));

  FUNC_0(FUNC_5(VAR_0, VAR_7, VAR_8, VAR_2,
                                  VAR_3, VAR_4, VAR_5, VAR_6,
                                  VAR_6));

  return FUNC_2(FUNC_4(VAR_7));
}
