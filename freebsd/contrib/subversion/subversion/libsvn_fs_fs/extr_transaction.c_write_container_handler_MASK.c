
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct write_container_baton {int size; int stream; scalar_t__ sha1_ctx; scalar_t__ md5_ctx; } ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__,char const*,int ) ;
 int FUNC_2 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
                        const char *VAR_2,
                        apr_size_t *VAR_3)
{
  struct write_container_baton *VAR_4 = VAR_1;

  FUNC_0(FUNC_1(VAR_4->md5_ctx, VAR_2, *VAR_3));
  if (VAR_4->sha1_ctx)
    FUNC_0(FUNC_1(VAR_4->sha1_ctx, VAR_2, *VAR_3));

  FUNC_0(FUNC_2(VAR_4->stream, VAR_2, VAR_3));
  VAR_4->size += *VAR_3;

  return VAR_0;
}
