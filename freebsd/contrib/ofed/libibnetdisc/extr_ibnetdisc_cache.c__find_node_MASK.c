
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {TYPE_1__* node; struct TYPE_7__* htnext; } ;
typedef TYPE_2__ ibnd_node_cache_t ;
struct TYPE_8__ {TYPE_2__** nodescachetbl; } ;
typedef TYPE_3__ ibnd_fabric_cache_t ;
struct TYPE_6__ {scalar_t__ guid; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static ibnd_node_cache_t *FUNC_1(ibnd_fabric_cache_t * VAR_1,
         uint64_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2) % VAR_0;
 ibnd_node_cache_t *VAR_4;

 for (VAR_4 = VAR_1->nodescachetbl[VAR_3];
      VAR_4; VAR_4 = VAR_4->htnext) {
  if (VAR_4->node->guid == VAR_2)
   return VAR_4;
 }

 return ((void*)0);
}
