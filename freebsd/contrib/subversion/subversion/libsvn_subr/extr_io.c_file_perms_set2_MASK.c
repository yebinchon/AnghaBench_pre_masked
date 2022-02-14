
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_fileperms_t ;
typedef int apr_file_t ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const**,int *) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int * FUNC_3 (scalar_t__,int ,...) ;
 int FUNC_4 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_file_t* VAR_1, apr_fileperms_t VAR_2, apr_pool_t *VAR_3)
{
  const char *VAR_4;
  apr_status_t VAR_5;

  VAR_5 = FUNC_1(&VAR_4, VAR_1);
  if (VAR_5)
    return FUNC_3(VAR_5, FUNC_0("Can't get file name"));

  VAR_5 = FUNC_2(VAR_4, VAR_2);
  if (VAR_5)
    return FUNC_3(VAR_5, FUNC_0("Can't set permissions on '%s'"),
                              FUNC_4(VAR_4, VAR_3));
  else
    return VAR_0;
}
