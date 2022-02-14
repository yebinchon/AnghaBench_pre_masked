
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_repos__config_pool_t ;
typedef int svn_membuf_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,int *,int ,int ,int *) ;
 int FUNC_4 (void**,int *,int *,int *,int *,int *) ;
 int FUNC_5 (void**,int *,int *,int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_config_t **VAR_2,
            svn_repos__config_pool_t *VAR_3,
            svn_stream_t *VAR_4,
            svn_checksum_t *VAR_5,
            apr_pool_t *VAR_6,
            apr_pool_t *VAR_7)
{

  svn_membuf_t *VAR_8 = FUNC_1(VAR_5, VAR_7);
  FUNC_0(FUNC_5((void **)VAR_2, VAR_3, VAR_8,
                                  VAR_6));


  if (!*VAR_2)
    {
      svn_config_t *VAR_9;


      apr_pool_t *VAR_10 = FUNC_6(VAR_3);
      FUNC_0(FUNC_3(&VAR_9, VAR_4, VAR_0, VAR_0, VAR_10));


      FUNC_2(VAR_9, VAR_10);


      FUNC_0(FUNC_4((void **)VAR_2, VAR_3, VAR_8,
                                      VAR_9, VAR_10, VAR_6));
    }

  return VAR_1;
}
