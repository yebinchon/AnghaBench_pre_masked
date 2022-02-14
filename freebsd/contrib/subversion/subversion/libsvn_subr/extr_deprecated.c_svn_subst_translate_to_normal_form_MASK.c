
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_subst_eol_style_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int * FUNC_0 (int ,int *,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const*,char const*,int,int *,int ,scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

svn_error_t *
FUNC_3(const char *VAR_6,
                                   const char *VAR_7,
                                   svn_subst_eol_style_t VAR_8,
                                   const char *VAR_9,
                                   svn_boolean_t VAR_10,
                                   apr_hash_t *VAR_11,
                                   svn_boolean_t VAR_12,
                                   apr_pool_t *VAR_13)
{

  if (VAR_8 == VAR_4)
    VAR_9 = VAR_2;
  else if (! (VAR_8 == VAR_3
              || VAR_8 == VAR_5))
    return FUNC_0(VAR_1, ((void*)0), ((void*)0));

  return FUNC_1(FUNC_2(
                           VAR_6, VAR_7, VAR_9,
                           VAR_8 == VAR_3
                             || VAR_10,
                           VAR_11,
                           VAR_0 ,
                           VAR_12,
                           VAR_13));
}
