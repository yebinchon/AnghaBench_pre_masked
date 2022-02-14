
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_uri_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char const*,int *) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;

__attribute__((used)) static svn_error_t *FUNC_3(const char *VAR_2, apr_uri_t *VAR_3,
                              apr_pool_t *VAR_4)
{
  apr_status_t VAR_5;

  VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);

  if (VAR_5 != 0)
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_0("Illegal svn repository URL '%s'"), VAR_2);

  return VAR_1;
}
