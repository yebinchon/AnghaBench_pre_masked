
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_softc {int (* ipmi_startup ) (struct ipmi_softc*) ;int ipmi_dev_support; void* ipmi_power_cycle_tag; int ipmi_watchdog_pretimeout; int ipmi_watchdog_actions; scalar_t__ ipmi_watchdog_active; TYPE_1__* ipmi_cdev; void* ipmi_shutdown_tag; void* ipmi_watchdog_tag; scalar_t__ ipmi_driver_requests_polled; int ipmi_pending_requests; int ipmi_request_added; int ipmi_io_lock; int ipmi_requests_lock; int ipmi_dev; int ipmi_ich; } ;
struct ipmi_request {int ir_compcode; int ir_replylen; int* ir_reply; int* ir_request; } ;
typedef int device_t ;
struct TYPE_2__ {struct ipmi_softc* si_drv1; } ;


 void* FUNC_0 (int ,int ,struct ipmi_softc*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ipmi_request*,int ,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ipmi_request*,int ,int ,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *) ;
 int VAR_12 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_9 (struct ipmi_softc*) ;
 int FUNC_10 (struct ipmi_softc*,scalar_t__) ;
 int VAR_15 ;
 int FUNC_11 (struct ipmi_softc*,struct ipmi_request*,int ) ;
 int VAR_16 ;
 TYPE_1__* FUNC_12 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_13 (int *,char*,int *,int ) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_14 (struct ipmi_softc*) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void
FUNC_15(void *VAR_24)
{
 struct ipmi_softc *VAR_25 = VAR_24;
 struct ipmi_request *VAR_26;
 device_t VAR_27;
 int VAR_28, VAR_29;

 FUNC_5(&VAR_25->ipmi_ich);
 VAR_27 = VAR_25->ipmi_dev;


 FUNC_13(&VAR_25->ipmi_requests_lock, "ipmi requests", ((void*)0), VAR_10);
 FUNC_13(&VAR_25->ipmi_io_lock, "ipmi io", ((void*)0), VAR_10);
 FUNC_6(&VAR_25->ipmi_request_added, "ipmireq");
 FUNC_4(&VAR_25->ipmi_pending_requests);


 VAR_28 = VAR_25->ipmi_startup(VAR_25);
 if (VAR_28) {
  FUNC_8(VAR_27, "Failed to initialize interface: %d\n",
      VAR_28);
  return;
 }


 FUNC_2(VAR_26, FUNC_1(VAR_3, 0),
     VAR_6, 0, 15);

 VAR_28 = FUNC_11(VAR_25, VAR_26, VAR_9);
 if (VAR_28 == VAR_0) {
  FUNC_8(VAR_27, "Timed out waiting for GET_DEVICE_ID\n");
  return;
 } else if (VAR_28) {
  FUNC_8(VAR_27, "Failed GET_DEVICE_ID: %d\n", VAR_28);
  return;
 } else if (VAR_26->ir_compcode != 0) {
  FUNC_8(VAR_27,
      "Bad completion code for GET_DEVICE_ID: %d\n",
      VAR_26->ir_compcode);
  return;
 } else if (VAR_26->ir_replylen < 5) {
  FUNC_8(VAR_27, "Short reply for GET_DEVICE_ID: %d\n",
      VAR_26->ir_replylen);
  return;
 }

 FUNC_8(VAR_27, "IPMI device rev. %d, firmware rev. %d.%d%d, "
     "version %d.%d, device support mask %#x\n",
     VAR_26->ir_reply[1] & 0x0f,
     VAR_26->ir_reply[2] & 0x7f, VAR_26->ir_reply[3] >> 4, VAR_26->ir_reply[3] & 0x0f,
     VAR_26->ir_reply[4] & 0x0f, VAR_26->ir_reply[4] >> 4, VAR_26->ir_reply[5]);

 VAR_25->ipmi_dev_support = VAR_26->ir_reply[5];

 FUNC_3(VAR_26, FUNC_1(VAR_3, 0),
     VAR_4, 1, 0);

 FUNC_11(VAR_25, VAR_26, 0);


 if (VAR_26->ir_compcode == 0xc0) {
  FUNC_8(VAR_27, "Clear flags is busy\n");
 }
 if (VAR_26->ir_compcode == 0xc1) {
  FUNC_8(VAR_27, "Clear flags illegal\n");
 }

 for (VAR_29 = 0; VAR_29 < 8; VAR_29++) {
  FUNC_3(VAR_26, FUNC_1(VAR_3, 0),
      VAR_5, 1, 0);
  VAR_26->ir_request[0] = VAR_29;

  FUNC_11(VAR_25, VAR_26, 0);

  if (VAR_26->ir_compcode != 0)
   break;
 }
 FUNC_8(VAR_27, "Number of channels %d\n", VAR_29);





 if (VAR_25->ipmi_driver_requests_polled) {
  FUNC_3(VAR_26, FUNC_1(VAR_3, 0),
      VAR_7, 0, 0);

  FUNC_11(VAR_25, VAR_26, 0);

  if (VAR_26->ir_compcode == 0x00) {
   FUNC_8(VAR_27, "Attached watchdog\n");

   VAR_25->ipmi_watchdog_tag = FUNC_0(
    VAR_20, VAR_16, VAR_25, 0);
   VAR_25->ipmi_shutdown_tag = FUNC_0(
    VAR_19, VAR_15,
    VAR_25, 0);
  }
 }

 VAR_25->ipmi_cdev = FUNC_12(&VAR_13, FUNC_7(VAR_27),
     VAR_12, VAR_1, 0660, "ipmi%d", FUNC_7(VAR_27));
 if (VAR_25->ipmi_cdev == ((void*)0)) {
  FUNC_8(VAR_27, "Failed to create cdev\n");
  return;
 }
 VAR_25->ipmi_cdev->si_drv1 = VAR_25;






 if (VAR_17 && VAR_22 > 0) {
  VAR_23 = VAR_8;
  if (FUNC_10(VAR_25, VAR_22) == 0 &&
      FUNC_9(VAR_25) == 0) {
   VAR_25->ipmi_watchdog_active = VAR_22;
   VAR_25->ipmi_watchdog_actions = VAR_23;
   VAR_25->ipmi_watchdog_pretimeout = VAR_21;
  } else
   (void)FUNC_10(VAR_25, 0);
  FUNC_9(VAR_25);
 } else if (!VAR_17)
  (void)FUNC_10(VAR_25, 0);





 if (VAR_25->ipmi_dev_support & VAR_2) {
  FUNC_8(VAR_27, "Establishing power cycle handler\n");
  VAR_25->ipmi_power_cycle_tag = FUNC_0(VAR_18,
      VAR_14, VAR_25, VAR_11 - 2);
 }
}
