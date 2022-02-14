
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohcidb_tr {int dbcnt; int bus_addr; struct fwohcidb* db; int dma_map; } ;
struct TYPE_4__ {int depend; int res; int cmd; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;
struct fwohcidb {TYPE_2__ db; } ;
struct TYPE_6__ {int dev; } ;
struct fwohci_softc {TYPE_3__ fc; struct fwohci_dbch* ir; } ;
struct fw_xferq {int flag; int bnpacket; int bnchunk; int stdma; int stfree; scalar_t__ queued; } ;
struct fwohci_dbch {int ndb; int ndesc; int flags; int am; int dmat; struct fw_xferq xferq; } ;
struct fw_bulkxfer {scalar_t__ start; scalar_t__ end; int * mbuf; } ;
struct firewire_comm {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct firewire_comm*) ;
 int FUNC_4 (struct firewire_comm*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct fwohci_softc*,int ) ;
 int FUNC_10 (struct fwohci_softc*,int ,int) ;
 struct fw_bulkxfer* FUNC_11 (int *) ;
 int FUNC_12 (int *,struct fw_bulkxfer*,int ) ;
 struct fw_bulkxfer* FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int ,int ,int *,int ,struct fwohcidb_tr*,int ) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (struct fwohci_softc*,scalar_t__) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct fwohci_softc*,struct fwohci_dbch*) ;
 int VAR_21 ;
 int FUNC_20 (struct fwohci_softc*,struct fwohci_dbch*) ;
 int VAR_22 ;
 int FUNC_21 (char*,int) ;
 int FUNC_22 () ;
 int FUNC_23 (int) ;
 unsigned short* VAR_23 ;

__attribute__((used)) static int
FUNC_24(struct firewire_comm *VAR_24, int VAR_25)
{
 struct fwohci_softc *VAR_26 = (struct fwohci_softc *)VAR_24;
 int VAR_27 = 0, VAR_28, VAR_29;
 unsigned short VAR_30, VAR_31;
 uint32_t VAR_32;
 struct fwohci_dbch *VAR_33;
 struct fwohcidb_tr *VAR_34;
 struct fw_bulkxfer *VAR_35, *VAR_36, *VAR_37;
 struct fw_xferq *VAR_38;

 VAR_33 = &VAR_26->ir[VAR_25];
 VAR_38 = &VAR_33->xferq;

 if ((VAR_38->flag & VAR_6) == 0) {
  VAR_30 = (VAR_38->flag >> 6) & 3;
  VAR_31 = VAR_38->flag & 0x3f;
  FUNC_10(VAR_26, FUNC_8(VAR_25), VAR_23[VAR_30] | VAR_31);

  VAR_38->queued = 0;
  VAR_33->ndb = VAR_38->bnpacket * VAR_38->bnchunk;
  VAR_33->ndesc = 2;
  FUNC_19(VAR_26, VAR_33);
  if ((VAR_33->flags & VAR_3) == 0)
   return VAR_2;
  VAR_27 = FUNC_20(VAR_26, VAR_33);
 }
 if (VAR_27)
  return VAR_27;

 VAR_35 = FUNC_11(&VAR_38->stfree);
 if (VAR_35 == ((void*)0)) {
  FUNC_16(VAR_24->dev, "IR DMA no free chunk\n");
  return 0;
 }

 VAR_29 = VAR_33->ndesc - 1;
 VAR_28 = FUNC_22();
 if ((VAR_38->flag & VAR_5) == 0)
  FUNC_3(VAR_24);
 VAR_36 = FUNC_13(&VAR_38->stdma, VAR_20, VAR_22);
 while ((VAR_37 = FUNC_11(&VAR_38->stfree)) != ((void*)0)) {
  struct fwohcidb *VAR_39;


  if (VAR_37->mbuf != ((void*)0)) {
   VAR_34 = (struct fwohcidb_tr *)(VAR_37->start);
   VAR_34->dbcnt = 1;
   VAR_27 = FUNC_15(VAR_33->dmat, VAR_34->dma_map,
     VAR_37->mbuf, VAR_21, VAR_34,
                0);
    FUNC_1(VAR_34->db[1].db.desc.cmd,
    VAR_18 | VAR_12 |
    VAR_13 | VAR_8);
  }

  VAR_39 = ((struct fwohcidb_tr *)(VAR_37->end))->db;
  FUNC_2(VAR_39[VAR_29].db.desc.res, 0);
  FUNC_0(VAR_39[VAR_29].db.desc.depend, 0xf);
  if (VAR_36 != ((void*)0)) {
   VAR_39 = ((struct fwohcidb_tr *)(VAR_36->end))->db;
   FUNC_1(VAR_39[VAR_29].db.desc.depend, VAR_33->ndesc);
  }
  FUNC_14(&VAR_38->stfree, VAR_22);
  FUNC_12(&VAR_38->stdma, VAR_37, VAR_22);
  VAR_36 = VAR_37;
 }
 if ((VAR_38->flag & VAR_5) == 0)
  FUNC_4(VAR_24);
 FUNC_18(VAR_33->am, VAR_1);
 FUNC_18(VAR_33->am, VAR_0);
 FUNC_23(VAR_28);
 VAR_32 = FUNC_9(VAR_26, FUNC_6(VAR_25));
 if (VAR_32 & VAR_9)
  return 0;
 if (VAR_32 & VAR_10) {
  FUNC_10(VAR_26, FUNC_7(VAR_25), VAR_10);
  FUNC_16(VAR_26->fc.dev, "IR DMA overrun (0x%08x)\n", VAR_32);
 }

 if (VAR_19)
  FUNC_21("start IR DMA 0x%x\n", VAR_32);
 FUNC_10(VAR_26, VAR_16, 1 << VAR_25);
 FUNC_10(VAR_26, VAR_17, 1 << VAR_25);
 FUNC_10(VAR_26, VAR_15, 1 << VAR_25);
 FUNC_10(VAR_26, FUNC_7(VAR_25), 0xf0000000);
 FUNC_10(VAR_26, FUNC_6(VAR_25), VAR_11);
 FUNC_10(VAR_26, FUNC_5(VAR_25),
  ((struct fwohcidb_tr *)(VAR_35->start))->bus_addr
       | VAR_33->ndesc);
 FUNC_10(VAR_26, FUNC_6(VAR_25), VAR_10);
 FUNC_10(VAR_26, VAR_4, VAR_14);



 return VAR_27;
}
