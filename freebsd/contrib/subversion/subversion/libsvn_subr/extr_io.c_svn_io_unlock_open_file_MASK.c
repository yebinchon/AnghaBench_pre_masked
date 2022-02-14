
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const**,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_1 ;
 int * FUNC_4 (scalar_t__,int ,...) ;
 int FUNC_5 (char const*,int *) ;

svn_error_t *
FUNC_6(apr_file_t *VAR_2,
                        apr_pool_t *VAR_3)
{
  const char *VAR_4;
  apr_status_t VAR_5;



  VAR_5 = FUNC_1(&VAR_4, VAR_2);
  if (VAR_5)
    return FUNC_4(VAR_5, FUNC_0("Can't get file name"));


  VAR_5 = FUNC_2(VAR_2);
  if (VAR_5)
    return FUNC_4(VAR_5, FUNC_0("Can't unlock file '%s'"),
                              FUNC_5(VAR_4, VAR_3));

  FUNC_3(VAR_3, VAR_2, VAR_1);

  return VAR_0;
}
