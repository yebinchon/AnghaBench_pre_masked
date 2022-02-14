
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rng_init_done; int rng; int mhash; } ;
typedef TYPE_1__ br_ssl_engine_context ;
typedef int br_hash_class ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int *,int ) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(br_ssl_engine_context *VAR_4)
{
 const br_hash_class *VAR_5;

 if (VAR_4->rng_init_done != 0) {
  return 1;
 }
 VAR_5 = FUNC_1(&VAR_4->mhash, VAR_2);
 if (!VAR_5) {
  VAR_5 = FUNC_1(&VAR_4->mhash, VAR_3);
  if (!VAR_5) {
   VAR_5 = FUNC_1(&VAR_4->mhash,
    VAR_1);
   if (!VAR_5) {
    FUNC_2(VAR_4, VAR_0);
    return 0;
   }
  }
 }
 FUNC_0(&VAR_4->rng, VAR_5, ((void*)0), 0);
 VAR_4->rng_init_done = 1;
 return 1;
}
