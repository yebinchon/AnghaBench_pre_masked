
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {int lock; TYPE_1__* dlist; scalar_t__ count; } ;
struct octeon_device {TYPE_2__ dispatch; } ;
struct TYPE_3__ {int head; scalar_t__ opcode; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *,int ) ;

int
FUNC_2(struct octeon_device *VAR_2)
{
 uint32_t VAR_3;

 VAR_2->dispatch.count = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->dispatch.dlist[VAR_3].opcode = 0;
  FUNC_0(&VAR_2->dispatch.dlist[VAR_3].head);
 }

 FUNC_1(&VAR_2->dispatch.lock, "dispatch_lock", ((void*)0), VAR_1);

 return (0);
}
