
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_depth_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char const* FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const char *
FUNC_2(svn_depth_t VAR_2, apr_pool_t *VAR_3)
{
  if (VAR_2 == VAR_1)
    return "";
  return FUNC_0(VAR_3, " depth=", FUNC_1(VAR_2), VAR_0);
}
