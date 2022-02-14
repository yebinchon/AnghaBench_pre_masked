
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct checksum_stream_baton {int read_more; int read_ctx; scalar_t__ read_checksum; int proxy; } ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2, char *VAR_3, apr_size_t *VAR_4)
{
  struct checksum_stream_baton *VAR_5 = VAR_2;
  apr_size_t VAR_6 = *VAR_4;

  FUNC_0(FUNC_2(VAR_5->proxy, VAR_3, VAR_4));

  if (VAR_5->read_checksum)
    FUNC_0(FUNC_1(VAR_5->read_ctx, VAR_3, *VAR_4));

  if (VAR_6 != *VAR_4)
    VAR_5->read_more = VAR_0;

  return VAR_1;
}
