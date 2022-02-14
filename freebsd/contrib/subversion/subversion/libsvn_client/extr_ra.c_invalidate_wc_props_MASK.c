
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {TYPE_1__* ctx; int base_dir_abspath; } ;
typedef TYPE_2__ callback_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int wc_ctx; } ;


 char* FUNC_0 (int ,char const*,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0,
                    const char *VAR_1,
                    const char *VAR_2,
                    apr_pool_t *VAR_3)
{
  callback_baton_t *VAR_4 = VAR_0;
  const char *VAR_5;

  VAR_5 = FUNC_0(VAR_4->base_dir_abspath, VAR_1, VAR_3);
  return FUNC_1(FUNC_2(
                              VAR_4->ctx->wc_ctx, VAR_5, VAR_3));
}
