
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int bus_addr; } ;
struct fwohci_softc {int maxrec; int speed; int* config_rom; TYPE_1__ sid_dma; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (struct fwohci_softc*,int ) ;
 int FUNC_3 (struct fwohci_softc*,int ,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (struct fwohci_softc*,int ) ;
 int* VAR_15 ;
 int FUNC_7 (char*,int) ;

void
FUNC_8(struct fwohci_softc *VAR_16, device_t VAR_17)
{
 int VAR_18, VAR_19, VAR_20;
 uint32_t VAR_21, VAR_22;


 FUNC_3(VAR_16, VAR_0, ~0);


 FUNC_3(VAR_16, VAR_6, VAR_11);
 if (VAR_14)
  FUNC_5(VAR_17, "resetting OHCI...");
 VAR_18 = 0;
 while(FUNC_2(VAR_16, VAR_6) & VAR_11) {
  if (VAR_18++ > 100) break;
  FUNC_0(1000);
 }
 if (VAR_14)
  FUNC_7("done (loop=%d)\n", VAR_18);


 FUNC_6(VAR_16, VAR_17);


 VAR_21 = FUNC_2(VAR_16, VAR_2);
 VAR_22 = VAR_21 | VAR_1;
 VAR_19 = (VAR_21 & 0x0000f000) >> 12;
 VAR_20 = (VAR_21 & 0x00000007);
 FUNC_5(VAR_17, "Link %s, max_rec %d bytes.\n",
   VAR_15[VAR_20], FUNC_1(VAR_19));

 VAR_16->maxrec = VAR_16->speed + 8;
 if (VAR_19 != VAR_16->maxrec) {
  VAR_22 = (VAR_22 & 0xffff0fff) | (VAR_16->maxrec << 12);
  FUNC_5(VAR_17, "max_rec %d -> %d\n",
    FUNC_1(VAR_19), FUNC_1(VAR_16->maxrec));
 }
 if (VAR_14)
  FUNC_5(VAR_17, "BUS_OPT 0x%x -> 0x%x\n", VAR_21, VAR_22);
 FUNC_3(VAR_16, VAR_2, VAR_22);


 FUNC_3(VAR_16, VAR_4, VAR_16->config_rom[0]);
 FUNC_3(VAR_16, VAR_5, FUNC_4(VAR_16->config_rom));



 FUNC_3(VAR_16, VAR_7, VAR_8);
 FUNC_3(VAR_16, VAR_6, VAR_10);





 FUNC_3(VAR_16, VAR_6, VAR_9);
}
