
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {TYPE_1__* extent; scalar_t__ has_extents; } ;
struct TYPE_10__ {int bmbx; int os; TYPE_3__ vpd; TYPE_2__ config; } ;
typedef TYPE_4__ sli4_t ;
typedef int int32_t ;
struct TYPE_7__ {int * use_map; int * base; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;

int32_t
FUNC_5(sli4_t *VAR_1)
{
 uint32_t VAR_2;

 if (VAR_1->config.extent[0].base) {
  FUNC_2(VAR_1->os, VAR_1->config.extent[0].base, VAR_0 * sizeof(uint32_t));
  VAR_1->config.extent[0].base = ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->config.has_extents) {
                                             ;
  }

  VAR_1->config.extent[VAR_2].base = ((void*)0);

  FUNC_0(VAR_1->config.extent[VAR_2].use_map);
  VAR_1->config.extent[VAR_2].use_map = ((void*)0);
 }

 if (FUNC_4(VAR_1)) {
  FUNC_3(VAR_1->os, "FW deinitialization failed\n");
 }

 FUNC_1(VAR_1->os, &VAR_1->vpd.data);
 FUNC_1(VAR_1->os, &VAR_1->bmbx);

 return 0;
}
