
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct s10_svc_softc {int vmem; } ;
struct s10_svc_mem {int size; int paddr; scalar_t__ vaddr; scalar_t__ fill; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct s10_svc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int,int,int *) ;

int
FUNC_4(device_t VAR_4, struct s10_svc_mem *VAR_5, int VAR_6)
{
 struct s10_svc_softc *VAR_7;

 VAR_7 = FUNC_0(VAR_4);

 if (VAR_6 <= 0)
  return (VAR_0);

 if (FUNC_3(VAR_7->vmem, VAR_6,
     VAR_2 | VAR_3, &VAR_5->paddr)) {
  FUNC_1(VAR_4, "Can't allocate memory\n");
  return (VAR_1);
 }

 VAR_5->size = VAR_6;
 VAR_5->fill = 0;
 VAR_5->vaddr = (vm_offset_t)FUNC_2(VAR_5->paddr, VAR_5->size);

 return (0);
}
