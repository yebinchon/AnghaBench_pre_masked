
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vmem_t ;
struct vmem_freelist {int dummy; } ;
struct TYPE_4__ {int bt_size; } ;
typedef TYPE_1__ bt_t ;


 int FUNC_0 (struct vmem_freelist*,TYPE_1__*,int ) ;
 struct vmem_freelist* FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(vmem_t *VAR_1, bt_t *VAR_2)
{
 struct vmem_freelist *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2->bt_size);
 FUNC_0(VAR_3, VAR_2, VAR_0);
}
