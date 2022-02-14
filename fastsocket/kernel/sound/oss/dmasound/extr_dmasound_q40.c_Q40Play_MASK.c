
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int count; scalar_t__ rear_size; scalar_t__ block_size; int syncing; scalar_t__ active; } ;


 int FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
        unsigned long VAR_2;

 if (VAR_1.active || VAR_1.count<=0 ) {

  return;
 }


 if (VAR_1.count <= 1 && VAR_1.rear_size < VAR_1.block_size && !VAR_1.syncing) {



          return;
 }
 FUNC_1(&VAR_0.lock, VAR_2);
 FUNC_0(1);
 FUNC_2(&VAR_0.lock, VAR_2);
}
