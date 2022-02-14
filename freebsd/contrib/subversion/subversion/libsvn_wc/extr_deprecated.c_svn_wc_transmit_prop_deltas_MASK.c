
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_entry_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const**,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int const*,void*,int *) ;

svn_error_t *
FUNC_7(const char *VAR_0,
                            svn_wc_adm_access_t *VAR_1,
                            const svn_wc_entry_t *VAR_2,
                            const svn_delta_editor_t *VAR_3,
                            void *VAR_4,
                            const char **VAR_5,
                            apr_pool_t *VAR_6)
{
  const char *VAR_7;
  svn_wc_context_t *VAR_8;

  if (VAR_5)
    *VAR_5 = ((void*)0);

  FUNC_0(FUNC_1(&VAR_7, VAR_0, VAR_6));
  FUNC_0(FUNC_4(&VAR_8, ((void*)0) ,
                                         FUNC_3(VAR_1),
                                         VAR_6));

  FUNC_0(FUNC_6(VAR_8, VAR_7, VAR_3, VAR_4,
                                       VAR_6));

  return FUNC_2(FUNC_5(VAR_8));
}
