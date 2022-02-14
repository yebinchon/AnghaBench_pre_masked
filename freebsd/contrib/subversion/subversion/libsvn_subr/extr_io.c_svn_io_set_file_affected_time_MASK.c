
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_time_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (char const**,char const*,int *) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (scalar_t__,int ,int ) ;

svn_error_t *
FUNC_6(apr_time_t VAR_1,
                              const char *VAR_2,
                              apr_pool_t *VAR_3)
{
  apr_status_t VAR_4;
  const char *VAR_5;

  FUNC_0(FUNC_3(&VAR_5, VAR_2, VAR_3));
  VAR_4 = FUNC_2(VAR_5, VAR_1, VAR_3);

  if (VAR_4)
    return FUNC_5(VAR_4, FUNC_1("Can't set access time of '%s'"),
                              FUNC_4(VAR_2, VAR_3));

  return VAR_0;
}
