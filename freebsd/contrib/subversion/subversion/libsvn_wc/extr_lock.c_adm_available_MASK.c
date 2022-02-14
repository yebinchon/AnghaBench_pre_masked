
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_5,
              svn_node_kind_t *VAR_6,
              svn_wc__db_t *VAR_7,
              const char *VAR_8,
              apr_pool_t *VAR_9)
{
  svn_wc__db_status_t VAR_10;

  if (VAR_6)
    *VAR_6 = VAR_1;

  FUNC_0(FUNC_1(&VAR_10, VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_7, VAR_8, VAR_9, VAR_9));

  *VAR_5 = !(VAR_10 == VAR_4
                 || VAR_10 == VAR_2
                 || VAR_10 == VAR_3);

  return VAR_0;
}
