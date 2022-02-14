
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rng_init_done; int rng; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 int FUNC_0 (int *,void const*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(br_ssl_engine_context *VAR_0,
 const void *VAR_1, size_t VAR_2)
{






 if (!FUNC_1(VAR_0)) {
  return;
 }
 FUNC_0(&VAR_0->rng, VAR_1, VAR_2);
 VAR_0->rng_init_done = 2;
}
