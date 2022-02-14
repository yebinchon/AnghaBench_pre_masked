
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int * FUNC_2 (int *,int ,scalar_t__*,int *) ;
 int * FUNC_3 (int *,int ,int *) ;

svn_error_t *
FUNC_4(apr_file_t *VAR_2,
                                int VAR_3,
                                apr_pool_t *VAR_4)
{
  svn_stream_t *VAR_5 = FUNC_3(VAR_2, VAR_1, VAR_4);
  svn_filesize_t VAR_6;
  apr_size_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  apr_off_t VAR_12;

  FUNC_0(FUNC_1(VAR_5, &VAR_6, &VAR_7, &VAR_8,
                             &VAR_9, &VAR_10, &VAR_11));

  VAR_12 = VAR_9 + VAR_10;
  return FUNC_2(VAR_2, VAR_0, &VAR_12, VAR_4);
}
