
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int delta_stream; int rep_size; int sha1_checksum_ctx; int md5_checksum_ctx; } ;
typedef TYPE_1__ rep_write_baton_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int ) ;
 int * FUNC_2 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0,
                   const char *VAR_1,
                   apr_size_t *VAR_2)
{
  rep_write_baton_t *VAR_3 = VAR_0;

  FUNC_0(FUNC_1(VAR_3->md5_checksum_ctx, VAR_1, *VAR_2));
  FUNC_0(FUNC_1(VAR_3->sha1_checksum_ctx, VAR_1, *VAR_2));
  VAR_3->rep_size += *VAR_2;

  return FUNC_2(VAR_3->delta_stream, VAR_1, VAR_2);
}
