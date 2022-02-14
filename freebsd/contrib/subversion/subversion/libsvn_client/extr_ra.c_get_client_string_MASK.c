
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {TYPE_1__* ctx; } ;
typedef TYPE_2__ callback_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int client_name; } ;


 int * VAR_0 ;
 char* FUNC_0 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                  const char **VAR_2,
                  apr_pool_t *VAR_3)
{
  callback_baton_t *VAR_4 = VAR_1;
  *VAR_2 = FUNC_0(VAR_3, VAR_4->ctx->client_name);
  return VAR_0;
}
