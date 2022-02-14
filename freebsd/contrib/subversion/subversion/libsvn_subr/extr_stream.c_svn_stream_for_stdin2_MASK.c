
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_uint32_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int **,int ,int *) ;
 int * FUNC_1 (int *,int ,int ,int ,int *) ;
 int * FUNC_2 (scalar_t__,char*) ;

svn_error_t *
FUNC_3(svn_stream_t **VAR_4,
                      svn_boolean_t VAR_5,
                      apr_pool_t *VAR_6)
{
  apr_file_t *VAR_7;
  apr_status_t VAR_8;

  apr_uint32_t VAR_9 = VAR_5 ? VAR_0 : 0;
  VAR_8 = FUNC_0(&VAR_7, VAR_9, VAR_6);
  if (VAR_8)
    return FUNC_2(VAR_8, "Can't open stdin");





  *VAR_4 = FUNC_1(VAR_7, VAR_3, VAR_1, VAR_1, VAR_6);

  return VAR_2;
}
