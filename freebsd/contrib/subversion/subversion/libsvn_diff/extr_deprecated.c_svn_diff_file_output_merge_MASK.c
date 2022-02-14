
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef int svn_diff_conflict_display_style_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int *,char const*,char const*,char const*,char const*,char const*,char const*,char const*,int ,int *) ;

svn_error_t *
FUNC_1(svn_stream_t *VAR_3,
                           svn_diff_t *VAR_4,
                           const char *VAR_5,
                           const char *VAR_6,
                           const char *VAR_7,
                           const char *VAR_8,
                           const char *VAR_9,
                           const char *VAR_10,
                           const char *VAR_11,
                           svn_boolean_t VAR_12,
                           svn_boolean_t VAR_13,
                           apr_pool_t *VAR_14)
{
  svn_diff_conflict_display_style_t VAR_15 =
    VAR_0;

  if (VAR_13)
    VAR_15 = VAR_2;

  if (VAR_12)
    VAR_15 = VAR_1;

  return FUNC_0(VAR_3,
                                     VAR_4,
                                     VAR_5,
                                     VAR_6,
                                     VAR_7,
                                     VAR_8,
                                     VAR_9,
                                     VAR_10,
                                     VAR_11,
                                     VAR_15,
                                     VAR_14);
}
