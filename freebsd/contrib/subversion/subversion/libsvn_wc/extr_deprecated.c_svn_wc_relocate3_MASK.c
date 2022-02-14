
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_relocation_validator3_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*,char const*,char const*,int ,void*,int *) ;

svn_error_t *
FUNC_9(const char *VAR_1,
                 svn_wc_adm_access_t *VAR_2,
                 const char *VAR_3,
                 const char *VAR_4,
                 svn_boolean_t VAR_5,
                 svn_wc_relocation_validator3_t VAR_6,
                 void *VAR_7,
                 apr_pool_t *VAR_8)
{
  const char *VAR_9;
  svn_wc_context_t *VAR_10;

  if (! VAR_5)
    FUNC_0(FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Non-recursive relocation not supported")));

  FUNC_0(FUNC_2(&VAR_9, VAR_1, VAR_8));
  FUNC_0(FUNC_6(&VAR_10, ((void*)0) ,
                                         FUNC_5(VAR_2),
                                         VAR_8));

  FUNC_0(FUNC_8(VAR_10, VAR_9, VAR_3, VAR_4,
                           VAR_6, VAR_7, VAR_8));

  return FUNC_4(FUNC_7(VAR_10));
}
