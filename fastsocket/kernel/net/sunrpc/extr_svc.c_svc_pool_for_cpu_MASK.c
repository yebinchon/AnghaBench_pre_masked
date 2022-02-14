
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {unsigned int sv_nrpools; struct svc_pool* sv_pools; } ;
struct svc_pool_map {int mode; unsigned int* to_pool; } ;
struct svc_pool {int dummy; } ;




 size_t FUNC_0 (int) ;
 struct svc_pool_map VAR_0 ;
 scalar_t__ FUNC_1 (struct svc_serv*) ;

struct svc_pool *
FUNC_2(struct svc_serv *VAR_1, int VAR_2)
{
 struct svc_pool_map *VAR_3 = &VAR_0;
 unsigned int VAR_4 = 0;






 if (FUNC_1(VAR_1)) {
  switch (VAR_3->mode) {
  case 129:
   VAR_4 = VAR_3->to_pool[VAR_2];
   break;
  case 128:
   VAR_4 = VAR_3->to_pool[FUNC_0(VAR_2)];
   break;
  }
 }
 return &VAR_1->sv_pools[VAR_4 % VAR_1->sv_nrpools];
}
