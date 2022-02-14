
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_repos__dumpfile_headers_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int *,int *,int ,int ,int ,int *) ;
 int FUNC_4 (int *,int ,char const*) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_stream_t *VAR_4,
                 const char *VAR_5,
                 apr_pool_t *VAR_6)
{
  svn_repos__dumpfile_headers_t *VAR_7
    = FUNC_5(VAR_6);

  FUNC_1(FUNC_2(VAR_5));


  FUNC_4(
    VAR_7, VAR_3, VAR_5);


  FUNC_4(
    VAR_7, VAR_2, "delete");

  FUNC_0(FUNC_3(VAR_4, VAR_7,
                                      ((void*)0), VAR_0, 0,
                                      VAR_0 , VAR_6));
  return VAR_1;
}
