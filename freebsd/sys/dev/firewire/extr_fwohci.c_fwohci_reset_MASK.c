
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohcidb_tr {int * xfer; } ;
struct TYPE_13__ {int nisodma; int maxrec; int speed; int* config_rom; } ;
struct TYPE_12__ {int ndb; struct fwohcidb_tr* top; struct fwohcidb_tr* bottom; int db_trq; } ;
struct TYPE_11__ {int ndb; struct fwohcidb_tr* top; struct fwohcidb_tr* bottom; int db_trq; } ;
struct TYPE_10__ {int flag; } ;
struct TYPE_14__ {TYPE_3__ xferq; } ;
struct TYPE_9__ {int bus_addr; } ;
struct TYPE_8__ {int bus_addr; } ;
struct fwohci_softc {int intmask; TYPE_6__ fc; TYPE_5__ atrs; TYPE_4__ atrq; TYPE_7__ arrs; TYPE_7__ arrq; TYPE_2__ sid_dma; TYPE_1__ crom_dma; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (int) ;
 int VAR_33 ;
 int FUNC_3 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_4 (struct fwohci_softc*,int ) ;
 int FUNC_5 (struct fwohci_softc*,int ,int) ;
 void* FUNC_6 (int *) ;
 struct fwohcidb_tr* FUNC_7 (struct fwohcidb_tr*,int ) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ VAR_36 ;
 int FUNC_9 (struct fwohci_softc*,int ) ;
 int FUNC_10 (struct fwohci_softc*,TYPE_7__*) ;
 int FUNC_11 (TYPE_6__*,int) ;
 int VAR_37 ;
 int* VAR_38 ;
 int FUNC_12 (char*,int) ;

void
FUNC_13(struct fwohci_softc *VAR_39, device_t VAR_40)
{
 int VAR_41, VAR_42, VAR_43;
 uint32_t VAR_44, VAR_45;
 struct fwohcidb_tr *VAR_46;


 FUNC_5(VAR_39, VAR_1, ~0);


 FUNC_5(VAR_39, VAR_4, VAR_11);
 FUNC_5(VAR_39, VAR_5, VAR_11);
 FUNC_5(VAR_39, VAR_6, VAR_11);
 FUNC_5(VAR_39, VAR_7, VAR_11);

 FUNC_5(VAR_39, VAR_33, ~0);
 for (VAR_41 = 0; VAR_41 < VAR_39->fc.nisodma; VAR_41++) {
  FUNC_5(VAR_39, FUNC_2(VAR_41), VAR_11);
  FUNC_5(VAR_39, FUNC_3(VAR_41), VAR_11);
 }


 FUNC_5(VAR_39, VAR_15, VAR_20);
 if (VAR_36)
  FUNC_8(VAR_40, "resetting OHCI...");
 VAR_41 = 0;
 while (FUNC_4(VAR_39, VAR_15) & VAR_20) {
  if (VAR_41++ > 100) break;
  FUNC_0(1000);
 }
 if (VAR_36)
  FUNC_12("done (loop=%d)\n", VAR_41);


 FUNC_9(VAR_39, VAR_40);


 VAR_44 = FUNC_4(VAR_39, VAR_9);
 VAR_45 = VAR_44 | VAR_8;
 VAR_42 = (VAR_44 & 0x0000f000) >> 12;
 VAR_43 = (VAR_44 & 0x00000007);
 FUNC_8(VAR_40, "Link %s, max_rec %d bytes.\n",
   VAR_38[VAR_43], FUNC_1(VAR_42));

 VAR_39->fc.maxrec = VAR_39->fc.speed + 8;
 if (VAR_42 != VAR_39->fc.maxrec) {
  VAR_45 = (VAR_45 & 0xffff0fff) | (VAR_39->fc.maxrec << 12);
  FUNC_8(VAR_40, "max_rec %d -> %d\n",
    FUNC_1(VAR_42), FUNC_1(VAR_39->fc.maxrec));
 }
 if (VAR_36)
  FUNC_8(VAR_40, "BUS_OPT 0x%x -> 0x%x\n", VAR_44, VAR_45);
 FUNC_5(VAR_39, VAR_9, VAR_45);


 FUNC_5(VAR_39, VAR_13, VAR_39->fc.config_rom[0]);
 FUNC_5(VAR_39, VAR_14, VAR_39->crom_dma.bus_addr);
 FUNC_5(VAR_39, VAR_16, VAR_17);
 FUNC_5(VAR_39, VAR_15, VAR_19);
 FUNC_5(VAR_39, VAR_35, VAR_39->sid_dma.bus_addr);
 FUNC_5(VAR_39, VAR_34, VAR_12);


 FUNC_5(VAR_39, VAR_15, VAR_18);


 VAR_39->arrq.xferq.flag &= ~VAR_3;
 VAR_39->arrs.xferq.flag &= ~VAR_3;
 FUNC_10(VAR_39, &VAR_39->arrq);
 FUNC_10(VAR_39, &VAR_39->arrs);


 FUNC_5(VAR_39, VAR_6, VAR_11 | VAR_10);
 FUNC_5(VAR_39, VAR_7, VAR_11 | VAR_10);


 FUNC_5(VAR_39, VAR_2,

  (0xffff << 16) | (0x0f << 8) | (0x0f << 4) | 0x0f);

 VAR_39->atrq.top = FUNC_6(&VAR_39->atrq.db_trq);
 VAR_39->atrs.top = FUNC_6(&VAR_39->atrs.db_trq);
 VAR_39->atrq.bottom = VAR_39->atrq.top;
 VAR_39->atrs.bottom = VAR_39->atrs.top;

 for (VAR_41 = 0, VAR_46 = VAR_39->atrq.top; VAR_41 < VAR_39->atrq.ndb;
     VAR_41++, VAR_46 = FUNC_7(VAR_46, VAR_37)) {
  VAR_46->xfer = ((void*)0);
 }
 for (VAR_41 = 0, VAR_46 = VAR_39->atrs.top; VAR_41 < VAR_39->atrs.ndb;
     VAR_41++, VAR_46 = FUNC_7(VAR_46, VAR_37)) {
  VAR_46->xfer = ((void*)0);
 }


 VAR_39->intmask = (VAR_28 | VAR_31
   | VAR_22 | VAR_23
   | VAR_26 | VAR_27
   | VAR_29 | VAR_32);
 VAR_39->intmask |= VAR_24 | VAR_25;
 VAR_39->intmask |= VAR_21 | VAR_30;
 FUNC_5(VAR_39, VAR_0, VAR_39->intmask);
 FUNC_11(&VAR_39->fc, 1);
}
