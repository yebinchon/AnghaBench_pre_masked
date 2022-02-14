
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s10_svc_softc {int vmem; } ;
struct s10_svc_mem {int size; int paddr; } ;
typedef int device_t ;


 struct s10_svc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(device_t VAR_0, struct s10_svc_mem *VAR_1)
{
 struct s10_svc_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->vmem, VAR_1->paddr, VAR_1->size);
}
