
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (int **,char const*,int ,int ,int *) ;
 int FUNC_2 (int **,int *,int ,int *,int *) ;
 int * FUNC_3 (int *,int ,int *) ;

svn_error_t *
FUNC_4(svn_checksum_t **VAR_4,
                      const char *VAR_5,
                      svn_checksum_kind_t VAR_6,
                      apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8;
  apr_file_t* VAR_9;

  FUNC_0(FUNC_1(&VAR_9, VAR_5, VAR_1, VAR_0, VAR_7));
  VAR_8 = FUNC_3(VAR_9, VAR_2, VAR_7);
  FUNC_0(FUNC_2(VAR_4, VAR_8, VAR_6,
                                       VAR_7, VAR_7));

  return VAR_3;
}
