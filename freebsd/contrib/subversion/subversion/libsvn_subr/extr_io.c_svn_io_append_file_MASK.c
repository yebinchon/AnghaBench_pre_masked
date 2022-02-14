
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int ,int *) ;
 int FUNC_3 (char const**,char const*,int *) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (scalar_t__,int ,int ,int ) ;

svn_error_t *
FUNC_6(const char *VAR_2, const char *VAR_3, apr_pool_t *VAR_4)
{
  apr_status_t VAR_5;
  const char *VAR_6, *VAR_7;

  FUNC_0(FUNC_3(&VAR_6, VAR_2, VAR_4));
  FUNC_0(FUNC_3(&VAR_7, VAR_3, VAR_4));

  VAR_5 = FUNC_2(VAR_6, VAR_7, VAR_0, VAR_4);

  if (VAR_5)
    return FUNC_5(VAR_5, FUNC_1("Can't append '%s' to '%s'"),
                              FUNC_4(VAR_2, VAR_4),
                              FUNC_4(VAR_3, VAR_4));

  return VAR_1;
}
