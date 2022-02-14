
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* extent; } ;
struct TYPE_9__ {TYPE_2__ config; int os; } ;
typedef TYPE_3__ sli4_t ;
typedef int int32_t ;
struct TYPE_7__ {int * base; int * use_map; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

int32_t
FUNC_5(sli4_t *VAR_1)
{
 uint32_t VAR_2;

 if (FUNC_3(VAR_1)) {
  FUNC_2(VAR_1->os, "FW initialization failed\n");
  return -1;
 }

 if (VAR_1->config.extent[0].base) {
  FUNC_1(VAR_1->os, VAR_1->config.extent[0].base, VAR_0 * sizeof(uint32_t));
  VAR_1->config.extent[0].base = ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->config.extent[VAR_2].use_map) {
   FUNC_0(VAR_1->config.extent[VAR_2].use_map);
   VAR_1->config.extent[VAR_2].use_map = ((void*)0);
  }
  VAR_1->config.extent[VAR_2].base = ((void*)0);
 }

 if (FUNC_4(VAR_1)) {
  return -1;
 }

 return 0;
}
