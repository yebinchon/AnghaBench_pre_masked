
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (char const**,char const*,int *) ;
 int FUNC_6 (char const*,int *) ;
 int * FUNC_7 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (char const*) ;

svn_error_t *
FUNC_9(const char *VAR_3, apr_pool_t *VAR_4)
{
  const char *VAR_5;
  apr_status_t VAR_6;

  if (FUNC_8(VAR_3))


    return VAR_2;

  FUNC_1(FUNC_5(&VAR_5, VAR_3, VAR_4));

  VAR_6 = FUNC_4(VAR_5, VAR_0, VAR_4);
  if (VAR_6)
    return FUNC_7(VAR_6, FUNC_3("Can't make directory '%s'"),
                              FUNC_6(VAR_3, VAR_4));

  return VAR_2;
}
