
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_entry_t ;
struct sseg_closure {int size; int count; } ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static void
FUNC_0(vm_map_entry_t VAR_0, void *VAR_1)
{
 struct sseg_closure *VAR_2 = (struct sseg_closure *)VAR_1;

 VAR_2->count++;
 VAR_2->size += VAR_0->end - VAR_0->start;
}
