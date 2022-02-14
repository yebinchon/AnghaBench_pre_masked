
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int vm_seglist; } ;
typedef TYPE_1__ vmem_t ;
struct TYPE_9__ {scalar_t__ bt_type; } ;
typedef TYPE_2__ bt_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(vmem_t *VAR_2, bt_t *VAR_3)
{

 FUNC_0(VAR_3->bt_type != VAR_0);
 FUNC_1(&VAR_2->vm_seglist, VAR_3, VAR_1);
 FUNC_2(VAR_2, VAR_3);
}
