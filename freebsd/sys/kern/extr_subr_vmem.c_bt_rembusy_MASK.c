
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ vm_nbusytag; int vm_inuse; } ;
typedef TYPE_1__ vmem_t ;
struct TYPE_8__ {scalar_t__ bt_size; } ;
typedef TYPE_2__ bt_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(vmem_t *VAR_1, bt_t *VAR_2)
{

 FUNC_2(VAR_1);
 FUNC_1(VAR_1->vm_nbusytag > 0);
 VAR_1->vm_inuse -= VAR_2->bt_size;
 VAR_1->vm_nbusytag--;
 FUNC_0(VAR_2, VAR_0);
}
