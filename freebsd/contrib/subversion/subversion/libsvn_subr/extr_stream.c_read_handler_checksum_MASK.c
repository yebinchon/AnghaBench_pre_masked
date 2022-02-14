
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct checksum_stream_baton {int read_ctx; scalar_t__ read_checksum; int proxy; } ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1, char *VAR_2, apr_size_t *VAR_3)
{
  struct checksum_stream_baton *VAR_4 = VAR_1;

  FUNC_0(FUNC_2(VAR_4->proxy, VAR_2, VAR_3));

  if (VAR_4->read_checksum)
    FUNC_0(FUNC_1(VAR_4->read_ctx, VAR_2, *VAR_3));

  return VAR_0;
}
