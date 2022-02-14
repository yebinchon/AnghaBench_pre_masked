
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int **,int *) ;
 int * FUNC_1 (int *,int ,int ,int ,int *) ;
 int * FUNC_2 (scalar_t__,char*) ;

svn_error_t *
FUNC_3(svn_stream_t **VAR_3, apr_pool_t *VAR_4)
{
  apr_file_t *VAR_5;
  apr_status_t VAR_6;

  VAR_6 = FUNC_0(&VAR_5, VAR_4);
  if (VAR_6)
    return FUNC_2(VAR_6, "Can't open stdout");





  *VAR_3 = FUNC_1(VAR_5, VAR_2, VAR_0, VAR_0, VAR_4);

  return VAR_1;
}
