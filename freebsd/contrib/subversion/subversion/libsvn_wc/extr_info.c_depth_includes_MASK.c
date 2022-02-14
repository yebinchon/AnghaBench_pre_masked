
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (char const*,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_boolean_t
FUNC_2(const char *VAR_4,
               svn_depth_t VAR_5,
               const char *VAR_6,
               svn_node_kind_t VAR_7,
               apr_pool_t *VAR_8)
{
  const char *VAR_9 = FUNC_1(VAR_6, VAR_8);

  return (VAR_5 == VAR_2
          || ((VAR_5 == VAR_1
               || (VAR_5 == VAR_0 && VAR_7 == VAR_3))
              && FUNC_0(VAR_4, VAR_9) == 0)
          || FUNC_0(VAR_4, VAR_6) == 0);
}
