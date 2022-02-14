
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const**,char const*,int *) ;
 int * FUNC_2 (int ,int *,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int **,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,char const*,char const*,char const*,int ,int ,int *) ;

svn_error_t *
FUNC_7(const char *VAR_2,
                   const char *VAR_3,
                   const char *VAR_4,
                   const char *VAR_5,
                   svn_revnum_t VAR_6,
                   svn_depth_t VAR_7,
                   apr_pool_t *VAR_8)
{
  const char *VAR_9;
  svn_wc_context_t *VAR_10;

  if (VAR_3 == ((void*)0))
    return FUNC_2(VAR_1, ((void*)0), ((void*)0));
  if (VAR_5 == ((void*)0))
    return FUNC_2(VAR_0, ((void*)0), ((void*)0));

  FUNC_0(FUNC_1(&VAR_9, VAR_2, VAR_8));
  FUNC_0(FUNC_4(&VAR_10, ((void*)0) , VAR_8, VAR_8));

  FUNC_0(FUNC_6(VAR_10, VAR_9, VAR_4, VAR_5, VAR_3, VAR_6,
                             VAR_7, VAR_8));

  return FUNC_3(FUNC_5(VAR_10));
}
