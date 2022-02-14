
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_8__ {int io_num; int ** io; scalar_t__* io_rid; int * bus_ctlp; int ctlmask; int aiop2off; int aiop2rid; int dev; } ;
typedef int ISACONTROLLER_t ;
typedef TYPE_1__ CONTROLLER_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ,int ,scalar_t__*,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 void* FUNC_8 (int,int ,int) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_14)
{
 int VAR_15;
 CONTROLLER_t *VAR_16;
 int VAR_17;
 CONTROLLER_t *VAR_18;
 int VAR_19;





 if (FUNC_7(VAR_14) != 0)
  return (VAR_1);


 if (FUNC_1(VAR_14, VAR_8, 0) == 0)
  return (VAR_1);

 VAR_15 = FUNC_4(VAR_14);
 if (VAR_15 >= 4) {
  FUNC_5(VAR_14, "rpprobe: unit number %d invalid.\n", VAR_15);
  return (VAR_1);
 }
 FUNC_5(VAR_14, "probing for RocketPort(ISA) unit %d.\n", VAR_15);

 VAR_18 = FUNC_3(VAR_14);
 FUNC_2(VAR_18, sizeof(*VAR_18));
 VAR_18->dev = VAR_14;
 VAR_18->aiop2rid = VAR_11;
 VAR_18->aiop2off = VAR_10;
 VAR_18->ctlmask = VAR_12;


 VAR_18->io_num = 1;
 VAR_18->io_rid = FUNC_8(sizeof(*(VAR_18->io_rid)) * VAR_3, VAR_4, VAR_5 | VAR_6);
 VAR_18->io = FUNC_8(sizeof(*(VAR_18->io)) * VAR_3, VAR_4, VAR_5 | VAR_6);
 if (VAR_18->io_rid == ((void*)0) || VAR_18->io == ((void*)0)) {
  FUNC_5(VAR_14, "rp_attach: Out of memory.\n");
  VAR_19 = VAR_0;
  goto nogo;
 }

 VAR_18->bus_ctlp = FUNC_8(sizeof(ISACONTROLLER_t) * 1, VAR_4, VAR_5 | VAR_6);
 if (VAR_18->bus_ctlp == ((void*)0)) {
  FUNC_5(VAR_14, "rp_attach: Out of memory.\n");
  VAR_19 = VAR_0;
  goto nogo;
 }

 VAR_18->io_rid[0] = 0;
 if (VAR_9 != ((void*)0)) {
  VAR_16 = VAR_9;
  VAR_18->io[0] = FUNC_0(VAR_14, VAR_8, &VAR_18->io_rid[0], 0x40, VAR_7);
 } else {
  VAR_16 = VAR_9 = VAR_18;
  VAR_18->io[0] = FUNC_0(VAR_14, VAR_8, &VAR_18->io_rid[0], 0x44, VAR_7);
 }
 if (VAR_18->io[0] == ((void*)0)) {
  FUNC_5(VAR_14, "rp_attach: Resource not available.\n");
  VAR_19 = VAR_1;
  goto nogo;
 }

 VAR_17 = FUNC_10(VAR_18,
    VAR_16,
    VAR_3, 0,
    VAR_2, 0);
 if (VAR_17 <= 0) {
  FUNC_5(VAR_14, "board%d init failed.\n", VAR_15);
  VAR_19 = VAR_1;
  goto nogo;
 }

 if (VAR_9 == ((void*)0))
  VAR_9 = VAR_16;
 VAR_13++;

 FUNC_6(VAR_14, "RocketPort ISA");

 return (0);

nogo:
 FUNC_9(VAR_18);

 return (VAR_19);
}
