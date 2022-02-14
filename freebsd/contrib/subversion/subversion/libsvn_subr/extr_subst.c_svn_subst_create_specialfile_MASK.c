
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
struct special_stream_baton {int write_content; int write_stream; int * pool; int path; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 struct special_stream_baton* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*) ;
 int VAR_1 ;
 int * FUNC_2 (struct special_stream_baton*,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

svn_error_t *
FUNC_7(svn_stream_t **VAR_3,
                             const char *VAR_4,
                             apr_pool_t *VAR_5,
                             apr_pool_t *VAR_6)
{
  struct special_stream_baton *VAR_7 = FUNC_0(VAR_5, sizeof(*VAR_7));

  VAR_7->path = FUNC_1(VAR_5, VAR_4);


  VAR_7->pool = VAR_5;

  VAR_7->write_content = FUNC_6(VAR_5);
  VAR_7->write_stream = FUNC_3(VAR_7->write_content,
                                                  VAR_5);

  *VAR_3 = FUNC_2(VAR_7, VAR_5);
  FUNC_5(*VAR_3, VAR_2);
  FUNC_4(*VAR_3, VAR_1);

  return VAR_0;
}
