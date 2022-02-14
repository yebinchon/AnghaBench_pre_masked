
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_subst_eol_style_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char* VAR_3 ;
 int * FUNC_0 (int ,int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_1 (int *,char const*,int,int *,int ,int *) ;

svn_error_t *
FUNC_2(svn_stream_t **VAR_7,
                                           svn_stream_t *VAR_8,
                                           svn_subst_eol_style_t VAR_9,
                                           const char *VAR_10,
                                           svn_boolean_t VAR_11,
                                           apr_hash_t *VAR_12,
                                           apr_pool_t *VAR_13)
{
  if (VAR_9 == VAR_5)
    VAR_10 = VAR_3;
  else if (! (VAR_9 == VAR_4
              || VAR_9 == VAR_6))
    return FUNC_0(VAR_1, ((void*)0), ((void*)0));

 *VAR_7 = FUNC_1(VAR_8, VAR_10,
                                       VAR_9 == VAR_4
                                       || VAR_11,
                                       VAR_12, VAR_0, VAR_13);

 return VAR_2;
}
