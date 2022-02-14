
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmem_addr_t ;
struct TYPE_2__ {int qc_size; int qc_vmem; } ;
typedef TYPE_1__ qcache_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, void **VAR_1, int VAR_2)
{
 qcache_t *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_3->qc_vmem, (vmem_addr_t)VAR_1[VAR_4], VAR_3->qc_size);
}
