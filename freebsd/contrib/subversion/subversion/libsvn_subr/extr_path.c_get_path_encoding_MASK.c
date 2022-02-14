
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int*,int *) ;
 int * FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_2, apr_pool_t *VAR_3)
{
  apr_status_t VAR_4;
  int VAR_5;

  VAR_4 = FUNC_1(&VAR_5, VAR_3);
  if (VAR_4)
    return FUNC_2(VAR_4,
                              FUNC_0("Can't determine the native path encoding"));




  *VAR_2 = (VAR_5 == VAR_0);
  return VAR_1;
}
