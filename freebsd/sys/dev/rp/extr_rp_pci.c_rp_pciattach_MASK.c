
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_9__ {int io_num; int ** io; void** io_rid; int * bus_ctlp; int ctlmask; int aiop2off; int aiop2rid; int dev; } ;
typedef TYPE_1__ CONTROLLER_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int VAR_7 ;



 int VAR_8 ;
 int * FUNC_1 (int ,int ,void**,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 void* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int ,int ,int) ;
 int FUNC_12 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15;
 CONTROLLER_t *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_3(VAR_12);
 FUNC_2(VAR_16, sizeof(*VAR_16));
 VAR_16->dev = VAR_12;
 VAR_17 = FUNC_4(VAR_12);
 VAR_16->aiop2rid = VAR_10;
 VAR_16->aiop2off = VAR_9;
 VAR_16->ctlmask = VAR_11;


 VAR_16->io_num = 1;
 VAR_16->io_rid = FUNC_6(sizeof(*(VAR_16->io_rid)) * VAR_16->io_num, VAR_4, VAR_5 | VAR_6);
 VAR_16->io = FUNC_6(sizeof(*(VAR_16->io)) * VAR_16->io_num, VAR_4, VAR_5 | VAR_6);
 if (VAR_16->io_rid == ((void*)0) || VAR_16->io == ((void*)0)) {
  FUNC_5(VAR_12, "rp_pciattach: Out of memory.\n");
  VAR_18 = VAR_0;
  goto nogo;
 }

 VAR_16->bus_ctlp = ((void*)0);

 switch (FUNC_7(VAR_12)) {
 case 130:
 case 129:
 case 128:
  VAR_16->io_rid[0] = FUNC_0(2);
  break;
 default:
  VAR_16->io_rid[0] = FUNC_0(0);
  break;
 }
 VAR_16->io[0] = FUNC_1(VAR_12, VAR_8,
  &VAR_16->io_rid[0], VAR_7);
 if(VAR_16->io[0] == ((void*)0)) {
  FUNC_5(VAR_12, "ioaddr mapping failed for RocketPort(PCI).\n");
  VAR_18 = VAR_1;
  goto nogo;
 }

 VAR_14 = FUNC_11(VAR_16,
           VAR_3, 0,
           VAR_2, 0, FUNC_7(VAR_12));

 VAR_13 = 0;
 for(VAR_15=0; VAR_15 < VAR_14; VAR_15++) {
  FUNC_12(VAR_16, VAR_15);
  VAR_13 += FUNC_10(VAR_16, VAR_15);
 }

 VAR_18 = FUNC_8(VAR_16, VAR_14, VAR_13);
 if (VAR_18 != 0)
  goto nogo;

 return (0);

nogo:
 FUNC_9(VAR_16);

 return (VAR_18);
}
