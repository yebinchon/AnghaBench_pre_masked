
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int (* setup_device_regs ) (struct octeon_device*) ;int (* enable_io_queues ) (struct octeon_device*) ;int (* enable_interrupt ) (struct octeon_device*,int ) ;scalar_t__ (* soft_reset ) (struct octeon_device*) ;} ;
struct TYPE_5__ {int num_pf_rings; } ;
struct octeon_device {int num_oqs; int status; TYPE_4__* console; TYPE_3__ fn_list; TYPE_2__** droq; TYPE_1__ sriov_info; int ** instr_queue; int app_mode; int device; } ;
struct lio_instr_queue {int dummy; } ;
struct TYPE_8__ {int print; } ;
struct TYPE_6__ {int max_count; int pkts_credit_reg; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct octeon_device*,int ,char*) ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;
 scalar_t__ FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (struct octeon_device*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct octeon_device*,char*,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_8 (struct octeon_device*,char*) ;
 int FUNC_9 (struct octeon_device*,char*,...) ;
 int FUNC_10 (struct octeon_device*,char*) ;
 int FUNC_11 (struct octeon_device*) ;
 scalar_t__ FUNC_12 (struct octeon_device*) ;
 int FUNC_13 (struct octeon_device*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct octeon_device*,int ,int ,int ,int) ;
 int FUNC_16 (struct octeon_device*,int ,int ,int ,struct octeon_device*) ;
 scalar_t__ FUNC_17 (struct octeon_device*) ;
 scalar_t__ FUNC_18 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_19 (struct octeon_device*) ;
 scalar_t__ FUNC_20 (struct octeon_device*) ;
 scalar_t__ FUNC_21 (struct octeon_device*) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (struct octeon_device*,int) ;
 int FUNC_24 (struct octeon_device*,unsigned long*) ;
 int FUNC_25 (struct octeon_device*,int ,int ) ;
 void* FUNC_26 (int,int ,int) ;
 scalar_t__ FUNC_27 (char*,int ) ;
 scalar_t__ FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 scalar_t__ FUNC_32 (struct octeon_device*) ;
 int FUNC_33 (struct octeon_device*) ;
 int FUNC_34 (struct octeon_device*,int ) ;
 int FUNC_35 (struct octeon_device*) ;

__attribute__((used)) static int
FUNC_36(struct octeon_device *VAR_26)
{
 unsigned long VAR_27 = VAR_0;
 char *VAR_28 = ((void*)0);
 int VAR_29 = 0;
 int VAR_30, VAR_31, VAR_32;
 uint8_t VAR_33, VAR_34, VAR_35;
 char VAR_36[] = "\n";

 VAR_33 = FUNC_29(VAR_26->device);
 VAR_34 = FUNC_31(VAR_26->device);
 VAR_35 = FUNC_30(VAR_26->device);

 FUNC_0(&VAR_26->status, VAR_1);


 if (FUNC_28(VAR_26->device)) {
  FUNC_9(VAR_26, "pci_enable_device failed\n");
  return (1);
 }

 FUNC_0(&VAR_26->status, VAR_10);


 if (FUNC_4(VAR_26)) {
  FUNC_9(VAR_26, "Chip specific setup failed\n");
  return (1);
 }

 FUNC_0(&VAR_26->status, VAR_11);






 FUNC_15(VAR_26, VAR_33, VAR_34, VAR_35, 1);


 VAR_26->app_mode = VAR_14;

 if (!FUNC_5(VAR_26) && !FUNC_1()) {
  VAR_29 = 0;

  if (VAR_26->fn_list.soft_reset(VAR_26))
   return (1);


  if (!FUNC_5(VAR_26))
   VAR_29 = 0;
  else
   VAR_29 = 1;
 } else {
  VAR_29 = 1;
 }





 if (FUNC_12(VAR_26))
  return (1);

 FUNC_16(VAR_26, VAR_17,
     VAR_18,
     VAR_24, VAR_26);
 FUNC_0(&VAR_26->status, VAR_3);

 VAR_32 = VAR_26->fn_list.setup_device_regs(VAR_26);
 if (VAR_32) {
  FUNC_9(VAR_26,
       "Failed to configure device registers\n");
  return (VAR_32);
 }


 if (FUNC_21(VAR_26)) {
  FUNC_9(VAR_26, "sc buffer pool allocation failed\n");
  return (1);
 }

 FUNC_0(&VAR_26->status,
        VAR_13);

 if (FUNC_3(VAR_26)) {
  FUNC_9(VAR_26,
       "IOQ vector allocation failed\n");
  return (1);
 }

 FUNC_0(&VAR_26->status,
        VAR_9);

 for (VAR_30 = 0; VAR_30 < VAR_15; VAR_30++) {
  VAR_26->instr_queue[VAR_30] =
   FUNC_26(sizeof(struct lio_instr_queue),
          VAR_20, VAR_21 | VAR_22);
  if (VAR_26->instr_queue[VAR_30] == ((void*)0))
   return (1);
 }


 if (FUNC_17(VAR_26)) {
  FUNC_9(VAR_26,
       "Instruction queue initialization failed\n");
  return (1);
 }

 FUNC_0(&VAR_26->status,
        VAR_6);






 if (FUNC_20(VAR_26)) {
  FUNC_9(VAR_26, "Response list allocation failed\n");
  return (1);
 }

 FUNC_0(&VAR_26->status, VAR_12);

 for (VAR_30 = 0; VAR_30 < VAR_16; VAR_30++) {
  VAR_26->droq[VAR_30] = FUNC_26(sizeof(*VAR_26->droq[VAR_30]),
          VAR_20, VAR_21 | VAR_22);
  if (VAR_26->droq[VAR_30] == ((void*)0))
   return (1);
 }

 if (FUNC_19(VAR_26)) {
  FUNC_9(VAR_26, "Output queue initialization failed\n");
  return (1);
 }

 FUNC_0(&VAR_26->status, VAR_4);




 if (FUNC_18(VAR_26,
    VAR_26->sriov_info.num_pf_rings))
  return (1);


 VAR_26->fn_list.enable_interrupt(VAR_26, VAR_23);

 FUNC_0(&VAR_26->status, VAR_7);
 for (VAR_31 = 0; VAR_31 < VAR_26->num_oqs; VAR_31++)
  FUNC_25(VAR_26,
    VAR_26->droq[VAR_31]->pkts_credit_reg,
    VAR_26->droq[VAR_31]->max_count);


 VAR_32 = VAR_26->fn_list.enable_io_queues(VAR_26);
 if (VAR_32) {
  FUNC_9(VAR_26, "Failed to enable input/output queues");
  return (VAR_32);
 }

 FUNC_0(&VAR_26->status, VAR_8);

 if (!VAR_29) {
  FUNC_8(VAR_26, "Waiting for DDR initialization...\n");
  if (!VAR_27) {
   FUNC_10(VAR_26,
         "WAITING. Set ddr_timeout to non-zero value to proceed with initialization.\n");
  }

  FUNC_22(VAR_19);





  while (!VAR_27) {
   if (FUNC_27("-", FUNC_14(100))) {

    return (1);
   }
  }

  VAR_32 = FUNC_24(VAR_26, &VAR_27);
  if (VAR_32) {
   FUNC_9(VAR_26,
        "DDR not initialized. Please confirm that board is configured to boot from Flash, ret: %d\n",
        VAR_32);
   return (1);
  }

  if (FUNC_23(VAR_26, 1100)) {
   FUNC_9(VAR_26, "Board not responding\n");
   return (1);
  }


  VAR_32 = FUNC_7(VAR_26, VAR_36, 50);

  FUNC_8(VAR_26, "Initializing consoles\n");
  VAR_32 = FUNC_11(VAR_26);
  if (VAR_32) {
   FUNC_9(VAR_26, "Could not access board consoles\n");
   return (1);
  }






  VAR_28 = FUNC_6(0) ? "" : ((void*)0);
  VAR_32 = FUNC_2(VAR_26, 0, VAR_28);

  if (VAR_32) {
   FUNC_9(VAR_26, "Could not access board console\n");
   return (1);
  } else if (FUNC_6(0)) {




   VAR_26->console[0].print = VAR_25;
  }

  FUNC_0(&VAR_26->status,
         VAR_2);

  FUNC_8(VAR_26, "Loading firmware\n");

  VAR_32 = FUNC_13(VAR_26);
  if (VAR_32) {
   FUNC_9(VAR_26, "Could not load firmware to board\n");
   return (1);
  }
 }

 FUNC_0(&VAR_26->status, VAR_5);

 return (0);
}
