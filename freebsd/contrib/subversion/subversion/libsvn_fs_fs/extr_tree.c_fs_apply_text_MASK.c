
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct text_baton_t {int * stream; int result_checksum; int * pool; int path; int * root; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (struct text_baton_t*,int *) ;
 struct text_baton_t* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_stream_t **VAR_1,
              svn_fs_root_t *VAR_2,
              const char *VAR_3,
              svn_checksum_t *VAR_4,
              apr_pool_t *VAR_5)
{
  struct text_baton_t *VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_6));

  VAR_6->root = VAR_2;
  VAR_6->path = FUNC_4(VAR_3, VAR_5);
  VAR_6->pool = VAR_5;
  VAR_6->result_checksum = FUNC_3(VAR_4, VAR_5);

  FUNC_0(FUNC_1(VAR_6, VAR_5));

  *VAR_1 = VAR_6->stream;
  return VAR_0;
}
