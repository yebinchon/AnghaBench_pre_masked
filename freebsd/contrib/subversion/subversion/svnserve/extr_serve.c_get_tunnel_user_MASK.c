
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* tunnel_user; int tunnel; } ;
typedef TYPE_1__ serve_params_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (int *) ;

__attribute__((used)) static const char *FUNC_1(serve_params_t *VAR_0, apr_pool_t *VAR_1)
{

  if (!VAR_0->tunnel)
    return ((void*)0);


  if (VAR_0->tunnel_user)
    return VAR_0->tunnel_user;

  return FUNC_0(VAR_1);
}
