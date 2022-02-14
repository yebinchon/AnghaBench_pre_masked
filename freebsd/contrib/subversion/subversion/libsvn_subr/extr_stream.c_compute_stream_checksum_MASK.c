
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef int svn_checksum_ctx_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (int *,scalar_t__) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int **,int *,int *) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 int FUNC_5 (int *,char*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_checksum_t **VAR_2,
                        svn_stream_t *VAR_3,
                        svn_checksum_kind_t VAR_4,
                        apr_pool_t *VAR_5,
                        apr_pool_t *VAR_6)
{
  svn_checksum_ctx_t *VAR_7 = FUNC_2(VAR_4, VAR_6);
  char *VAR_8 = FUNC_1(VAR_6, VAR_1);

  while (1)
    {
      apr_size_t VAR_9 = VAR_1;

      FUNC_0(FUNC_5(VAR_3, VAR_8, &VAR_9));

      if (VAR_9 > 0)
        FUNC_0(FUNC_4(VAR_7, VAR_8, VAR_9));

      if (VAR_9 != VAR_1)
          break;
    }
  FUNC_0(FUNC_3(VAR_2, VAR_7, VAR_5));

  return VAR_0;
}
