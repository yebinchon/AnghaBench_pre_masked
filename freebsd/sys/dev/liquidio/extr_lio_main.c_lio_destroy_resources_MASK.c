
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* soft_reset ) (struct octeon_device*) ;int (* disable_interrupt ) (struct octeon_device*,int ) ;int (* disable_io_queues ) (struct octeon_device*) ;} ;
struct TYPE_5__ {int oq; int iq; } ;
struct octeon_device {int device; TYPE_3__ fn_list; int ** instr_queue; TYPE_2__ io_qmask; int ** droq; int * msix_res; int aux_vector; int * tag; TYPE_1__* ioq_vector; int num_msix_irqs; int msix_on; int status; int app_mode; } ;
struct TYPE_4__ {int * msix_res; int vector; int * tag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct octeon_device*) ;
 int FUNC_10 (struct octeon_device*,int) ;
 int FUNC_11 (struct octeon_device*,int) ;
 int FUNC_12 (struct octeon_device*) ;
 int FUNC_13 (struct octeon_device*) ;
 int FUNC_14 (struct octeon_device*,char*,int ) ;
 int FUNC_15 (struct octeon_device*,char*) ;
 int FUNC_16 (struct octeon_device*) ;
 int FUNC_17 (struct octeon_device*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct octeon_device*) ;
 int FUNC_21 (struct octeon_device*) ;
 int FUNC_22 (int) ;
 int FUNC_23 (struct octeon_device*,int) ;
 int FUNC_24 (struct octeon_device*) ;
 int FUNC_25 (struct octeon_device*) ;
 int FUNC_26 (struct octeon_device*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (struct octeon_device*) ;
 int FUNC_30 (struct octeon_device*,int ) ;
 int FUNC_31 (struct octeon_device*) ;

__attribute__((used)) static void
FUNC_32(struct octeon_device *VAR_6)
{
 int VAR_7, VAR_8;

 switch (FUNC_3(&VAR_6->status)) {
 case 129:
 case 141:

  FUNC_4(&VAR_6->status, 135);

  VAR_6->app_mode = VAR_0;
  FUNC_14(VAR_6, "Device state is now %s\n",
       FUNC_18(&VAR_6->status));

  FUNC_22(100);


 case 138:


 case 142:

  FUNC_21(VAR_6);


 case 134:
  if (FUNC_26(VAR_6))
   FUNC_15(VAR_6, "There were pending requests\n");

  if (FUNC_24(VAR_6))
   FUNC_15(VAR_6, "IQ had pending instructions\n");






  VAR_6->fn_list.disable_io_queues(VAR_6);

  if (FUNC_25(VAR_6))
   FUNC_15(VAR_6, "OQ had pending packets\n");


 case 136:

  VAR_6->fn_list.disable_interrupt(VAR_6, VAR_4);

  if (VAR_6->msix_on) {
   for (VAR_7 = 0; VAR_7 < VAR_6->num_msix_irqs - 1; VAR_7++) {
    if (VAR_6->ioq_vector[VAR_7].tag != ((void*)0)) {
     FUNC_6(VAR_6->device,
        VAR_6->ioq_vector[VAR_7].msix_res,
            VAR_6->ioq_vector[VAR_7].tag);
     VAR_6->ioq_vector[VAR_7].tag = ((void*)0);
    }
    if (VAR_6->ioq_vector[VAR_7].msix_res != ((void*)0)) {
     FUNC_5(VAR_6->device,
      VAR_5,
      VAR_6->ioq_vector[VAR_7].vector,
      VAR_6->ioq_vector[VAR_7].msix_res);
     VAR_6->ioq_vector[VAR_7].msix_res = ((void*)0);
    }
   }

   if (VAR_6->tag != ((void*)0)) {
    FUNC_6(VAR_6->device, VAR_6->msix_res,
        VAR_6->tag);
    VAR_6->tag = ((void*)0);
   }

   if (VAR_6->msix_res != ((void*)0)) {
    FUNC_5(VAR_6->device, VAR_5,
           VAR_6->aux_vector,
           VAR_6->msix_res);
    VAR_6->msix_res = ((void*)0);
   }

   FUNC_28(VAR_6->device);
  }

 case 135:
 case 139:

  FUNC_19(100);
  for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_6); VAR_7++) {
   if (!(VAR_6->io_qmask.oq & FUNC_0(VAR_7)))
    continue;
   FUNC_10(VAR_6, VAR_7);
  }


 case 130:
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   if (VAR_6->droq[VAR_7] != ((void*)0)) {
    FUNC_7(VAR_6->droq[VAR_7], VAR_3);
    VAR_6->droq[VAR_7] = ((void*)0);
   }
  }
  FUNC_12(VAR_6);


 case 137:
  for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_6); VAR_7++) {
   if (!(VAR_6->io_qmask.iq & FUNC_0(VAR_7)))
    continue;

   FUNC_11(VAR_6, VAR_7);
  }


 case 133:
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   if (VAR_6->instr_queue[VAR_7] != ((void*)0)) {
    FUNC_7(VAR_6->instr_queue[VAR_7], VAR_3);
    VAR_6->instr_queue[VAR_7] = ((void*)0);
   }
  }
  FUNC_16(VAR_6);


 case 128:
  FUNC_17(VAR_6);


 case 140:
  FUNC_9(VAR_6);


 case 131:
  VAR_8 = FUNC_13(VAR_6);

  if (FUNC_8())
   FUNC_20(VAR_6);

  if (!VAR_8)
   VAR_6->fn_list.soft_reset(VAR_6);

  FUNC_23(VAR_6, 0);
  FUNC_23(VAR_6, 1);


 case 132:

  FUNC_27(VAR_6->device);


 case 143:
  break;
 }
}
