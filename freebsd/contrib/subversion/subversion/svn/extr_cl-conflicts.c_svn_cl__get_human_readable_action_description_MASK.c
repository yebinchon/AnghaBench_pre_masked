
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_operation_t ;
typedef int svn_wc_conflict_action_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char const*) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int ,char const*,char const*) ;
 char* FUNC_3 (int ,int ) ;
 char* FUNC_4 (int ) ;

svn_error_t *
FUNC_5(
        const char **VAR_1,
        svn_wc_conflict_action_t VAR_2,
        svn_wc_operation_t VAR_3,
        svn_node_kind_t VAR_4,
        apr_pool_t *VAR_5)
{
  const char *VAR_6, *VAR_7;

  VAR_6 = FUNC_3(VAR_4, VAR_2);
  VAR_7 = FUNC_4(VAR_3);

  FUNC_0(VAR_7);

  *VAR_1 = FUNC_2(VAR_5, FUNC_1("%s %s"),
                       VAR_6, VAR_7);

  return VAR_0;
}
