
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct TYPE_4__ {int wcroot_abspath; TYPE_1__* ctx; } ;
typedef TYPE_2__ callback_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int wc_ctx; } ;


 int * VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,int ,int const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                svn_stream_t **VAR_2,
                const svn_checksum_t *VAR_3,
                apr_pool_t *VAR_4)
{
  callback_baton_t *VAR_5 = VAR_1;

  if (! VAR_5->wcroot_abspath)
    {
      *VAR_2 = ((void*)0);
      return VAR_0;
    }

  return FUNC_0(
             FUNC_1(VAR_2,
                                                       VAR_5->ctx->wc_ctx,
                                                       VAR_5->wcroot_abspath,
                                                       VAR_3,
                                                       VAR_4, VAR_4));
}
