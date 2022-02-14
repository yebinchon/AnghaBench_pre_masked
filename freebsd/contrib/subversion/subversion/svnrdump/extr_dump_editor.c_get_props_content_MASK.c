
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_repos__dumpfile_headers_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int *,char*,int *) ;
 int FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_repos__dumpfile_headers_t *VAR_2,
                  svn_stringbuf_t **VAR_3,
                  apr_hash_t *VAR_4,
                  apr_hash_t *VAR_5,
                  apr_pool_t *VAR_6,
                  apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8;
  apr_hash_t *VAR_9;

  *VAR_3 = FUNC_6(VAR_6);

  VAR_8 = FUNC_5(*VAR_3, VAR_7);

  FUNC_0(FUNC_2(&VAR_9, VAR_4, VAR_7));
  FUNC_0(FUNC_1(VAR_9, VAR_5,
                                     VAR_8, "PROPS-END",
                                     VAR_7));
  FUNC_0(FUNC_4(VAR_8));


  FUNC_3(
    VAR_2, VAR_1, "true");

  return VAR_0;
}
