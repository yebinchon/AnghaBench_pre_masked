
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct __instance_walk_param {int (* callback ) (TYPE_1__*,void*) ;void* data; int retval; int addr; } ;
struct TYPE_9__ {int addr; } ;
typedef TYPE_1__ Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,struct __instance_walk_param*,TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,TYPE_1__*,int *,int *) ;

int FUNC_2(Dwarf_Die *VAR_2, int (*VAR_3)(Dwarf_Die *, void *),
         void *VAR_4)
{
 Dwarf_Die VAR_5;
 Dwarf_Die VAR_6;
 struct __instance_walk_param VAR_7 = {
  .addr = VAR_2->addr,
  .callback = VAR_3,
  .data = VAR_4,
  .retval = -VAR_0,
 };

 if (FUNC_1(VAR_2, &VAR_5, ((void*)0), ((void*)0)) == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_5, VAR_1, &VAR_7, &VAR_6);

 return VAR_7.retval;
}
