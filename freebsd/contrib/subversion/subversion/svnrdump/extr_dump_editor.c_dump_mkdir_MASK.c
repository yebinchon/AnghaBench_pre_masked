
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_repos__dumpfile_headers_t ;
typedef int svn_error_t ;
struct dump_edit_baton {int stream; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int *,int *,int ,int ,int ,int *) ;
 int FUNC_4 (int *,int ,char const*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(struct dump_edit_baton *VAR_5,
           const char *VAR_6,
           apr_pool_t *VAR_7)
{
  svn_stringbuf_t *VAR_8;
  svn_repos__dumpfile_headers_t *VAR_9
    = FUNC_5(VAR_7);


  FUNC_4(
    VAR_9, VAR_4, VAR_6);


  FUNC_4(
    VAR_9, VAR_3, "dir");


  FUNC_4(
    VAR_9, VAR_2, "add");


  FUNC_0(FUNC_2(VAR_9, &VAR_8,
                            FUNC_1(VAR_7), FUNC_1(VAR_7),
                            VAR_7, VAR_7));
  FUNC_0(FUNC_3(VAR_5->stream, VAR_9, VAR_8,
                                      VAR_0, 0, VAR_0 ,
                                      VAR_7));


  FUNC_0(FUNC_6(VAR_5->stream, "\n\n"));

  return VAR_1;
}
