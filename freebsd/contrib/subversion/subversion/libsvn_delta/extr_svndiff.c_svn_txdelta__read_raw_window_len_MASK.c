
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

svn_error_t *
FUNC_2(apr_size_t *VAR_1,
                                 svn_stream_t *VAR_2,
                                 apr_pool_t *VAR_3)
{
  svn_filesize_t VAR_4;
  apr_size_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

  FUNC_0(FUNC_1(VAR_2, &VAR_4, &VAR_5, &VAR_6,
                             &VAR_7, &VAR_8, &VAR_9));

  *VAR_1 = VAR_7 + VAR_8 + VAR_9;
  return VAR_0;
}
