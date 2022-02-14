
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
typedef int apr_fileperms_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const**,char const*,int *) ;
 scalar_t__ FUNC_3 (int **,char const*,int,int ,int ,int *) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (scalar_t__,int ,int ) ;

svn_error_t *
FUNC_6(apr_file_t **VAR_3, const char *VAR_4,
                 apr_int32_t VAR_5, apr_fileperms_t VAR_6,
                 apr_pool_t *VAR_7)
{
  const char *VAR_8;
  apr_status_t VAR_9;

  FUNC_0(FUNC_2(&VAR_8, VAR_4, VAR_7));
  VAR_9 = FUNC_3(VAR_3, VAR_8, VAR_5 | VAR_0, VAR_6, VAR_2,
                     VAR_7);

  if (VAR_9)
    return FUNC_5(VAR_9, FUNC_1("Can't open file '%s'"),
                              FUNC_4(VAR_4, VAR_7));
  else
    return VAR_1;
}
