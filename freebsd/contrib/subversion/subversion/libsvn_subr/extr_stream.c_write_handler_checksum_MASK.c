
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct checksum_stream_baton {int proxy; int write_ctx; scalar_t__ write_checksum; } ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,scalar_t__) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_0, const char *VAR_1, apr_size_t *VAR_2)
{
  struct checksum_stream_baton *VAR_3 = VAR_0;

  if (VAR_3->write_checksum && *VAR_2 > 0)
    FUNC_0(FUNC_1(VAR_3->write_ctx, VAR_1, *VAR_2));

  return FUNC_2(FUNC_3(VAR_3->proxy, VAR_1, VAR_2));
}
