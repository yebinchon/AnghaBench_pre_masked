
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int (* enable_interrupt ) (struct octeon_device*,int ) ;int (* disable_interrupt ) (struct octeon_device*,int ) ;} ;
struct octeon_device {int num_msix_irqs; TYPE_2__ fn_list; int device; int * msix_res; int aux_vector; int * tag; TYPE_1__* ioq_vector; scalar_t__ msix_on; } ;
struct TYPE_3__ {int * msix_res; int vector; int * tag; } ;


 scalar_t__ FUNC_0 (struct octeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (struct octeon_device*,char*) ;
 scalar_t__ FUNC_4 (struct octeon_device*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct octeon_device*,int ) ;
 int FUNC_7 (struct octeon_device*,int ) ;

__attribute__((used)) static int
FUNC_8(struct octeon_device *VAR_2, uint32_t VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (!VAR_2->msix_on)
  return (0);





 VAR_2->fn_list.disable_interrupt(VAR_2, VAR_0);

 if (VAR_2->msix_on) {
  if (FUNC_0(VAR_2))
   VAR_5 = VAR_2->num_msix_irqs - 1;

  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   if (VAR_2->ioq_vector[VAR_4].tag != ((void*)0)) {
    FUNC_2(VAR_2->device,
        VAR_2->ioq_vector[VAR_4].msix_res,
        VAR_2->ioq_vector[VAR_4].tag);
    VAR_2->ioq_vector[VAR_4].tag = ((void*)0);
   }

   if (VAR_2->ioq_vector[VAR_4].msix_res != ((void*)0)) {
    FUNC_1(VAR_2->device, VAR_1,
           VAR_2->ioq_vector[VAR_4].vector,
       VAR_2->ioq_vector[VAR_4].msix_res);
    VAR_2->ioq_vector[VAR_4].msix_res = ((void*)0);
   }
  }


  if (VAR_2->tag != ((void*)0)) {
   FUNC_2(VAR_2->device, VAR_2->msix_res, VAR_2->tag);
   VAR_2->tag = ((void*)0);
  }

  if (VAR_2->msix_res != ((void*)0)) {
   FUNC_1(VAR_2->device, VAR_1,
          VAR_2->aux_vector,
          VAR_2->msix_res);
   VAR_2->msix_res = ((void*)0);
  }

  FUNC_5(VAR_2->device);

 }

 if (FUNC_4(VAR_2, VAR_3)) {
  FUNC_3(VAR_2, "Setup interuupt failed\n");
  return (1);
 }


 VAR_2->fn_list.enable_interrupt(VAR_2, VAR_0);

 return (0);
}
