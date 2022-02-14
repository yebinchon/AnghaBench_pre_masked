
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohcidb_tr {int bus_addr; struct fwohcidb* db; } ;
struct TYPE_4__ {int cmd; int depend; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;
struct fwohcidb {TYPE_2__ db; } ;
struct TYPE_6__ {int dev; } ;
struct fwohci_softc {TYPE_3__ fc; struct fwohci_dbch* it; } ;
struct fw_xferq {int flag; int bnpacket; int bnchunk; int stfree; int stdma; int stvalid; int buf; } ;
struct fwohci_dbch {int flags; int ndb; int ndesc; int am; struct fw_xferq xferq; } ;
struct fw_bulkxfer {scalar_t__ start; scalar_t__ end; int poffset; } ;
struct firewire_comm {int (* cyctimer ) (struct firewire_comm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (struct firewire_comm*) ;
 int FUNC_2 (struct firewire_comm*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct fwohci_softc*,int ) ;
 int FUNC_7 (struct fwohci_softc*,int ,int) ;
 struct fw_bulkxfer* FUNC_8 (int *) ;
 int FUNC_9 (int *,struct fw_bulkxfer*,int ) ;
 struct fw_bulkxfer* FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (struct fwohci_softc*,scalar_t__) ;
 int FUNC_14 (struct fwohci_softc*,scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_15 (int ,int ,int,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct fwohci_softc*,struct fwohci_dbch*) ;
 int FUNC_18 (struct firewire_comm*,int) ;
 int FUNC_19 (struct fwohci_softc*,struct fwohci_dbch*) ;
 int FUNC_20 (struct fwohci_softc*,int,struct fw_bulkxfer*) ;
 int VAR_17 ;
 int FUNC_21 (char*,int,...) ;
 int FUNC_22 () ;
 int FUNC_23 (int) ;
 int FUNC_24 (struct firewire_comm*) ;

__attribute__((used)) static int
FUNC_25(struct firewire_comm *VAR_18, int VAR_19)
{
 struct fwohci_softc *VAR_20 = (struct fwohci_softc *)VAR_18;
 int VAR_21 = 0;
 unsigned short VAR_22, VAR_23;
 struct fwohci_dbch *VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;
 uint32_t VAR_29;
 struct fw_bulkxfer *VAR_30, *VAR_31, *VAR_32;
 struct fw_xferq *VAR_33;

 VAR_24 = &VAR_20->it[VAR_19];
 VAR_33 = &VAR_24->xferq;

 VAR_22 = (VAR_33->flag >> 6) & 3;
 VAR_23 = VAR_33->flag & 0x3f;
 if ((VAR_24->flags & VAR_3) == 0) {
  VAR_24->ndb = VAR_33->bnpacket * VAR_33->bnchunk;
  VAR_24->ndesc = 3;
  FUNC_17(VAR_20, VAR_24);
  if ((VAR_24->flags & VAR_3) == 0)
   return VAR_2;

  VAR_21 = FUNC_19(VAR_20, VAR_24);
 }
 if (VAR_21)
  return VAR_21;

 VAR_28 = VAR_24->ndesc - 1;
 VAR_27 = FUNC_22();
 FUNC_1(VAR_18);
 VAR_32 = FUNC_10(&VAR_33->stdma, VAR_16, VAR_17);
 while ((VAR_31 = FUNC_8(&VAR_33->stvalid)) != ((void*)0)) {
  struct fwohcidb *VAR_34;

  FUNC_15(VAR_33->buf, VAR_31->poffset, VAR_33->bnpacket,
     VAR_1);
  FUNC_20(VAR_20, VAR_19, VAR_31);
  if (VAR_32 != ((void*)0)) {
   VAR_34 = ((struct fwohcidb_tr *)(VAR_32->end))->db;
   FUNC_0(VAR_34[0].db.desc.depend, VAR_24->ndesc);
   FUNC_0(VAR_34[VAR_28].db.desc.depend, VAR_24->ndesc);

  }
  FUNC_11(&VAR_33->stvalid, VAR_17);
  FUNC_9(&VAR_33->stdma, VAR_31, VAR_17);
  VAR_32 = VAR_31;
 }
 FUNC_2(VAR_18);
 FUNC_16(VAR_24->am, VAR_1);
 FUNC_16(VAR_24->am, VAR_0);
 FUNC_23(VAR_27);
 VAR_29 = FUNC_6(VAR_20, FUNC_4(VAR_19));
 if (VAR_15 && (VAR_29 & VAR_7))
  FUNC_21("stat 0x%x\n", VAR_29);

 if (VAR_29 & (VAR_8 | VAR_7))
  return 0;




 FUNC_7(VAR_20, VAR_13, 1 << VAR_19);
 FUNC_7(VAR_20, VAR_14, 1 << VAR_19);
 FUNC_7(VAR_20, VAR_12, 1 << VAR_19);
 FUNC_7(VAR_20, VAR_4, VAR_11);

 VAR_30 = FUNC_8(&VAR_33->stdma);
 FUNC_7(VAR_20, FUNC_3(VAR_19),
  ((struct fwohcidb_tr *)(VAR_30->start))->bus_addr | VAR_24->ndesc);
 if (VAR_15 > 1) {
  FUNC_21("fwohci_itxbuf_enable: kick 0x%08x\n", VAR_29);

  FUNC_14(VAR_20, VAR_5 + VAR_19);

 }
 if ((VAR_29 & VAR_9) == 0) {


  if (FUNC_8(&VAR_33->stfree) != ((void*)0))
   goto out;



  FUNC_7(VAR_20, FUNC_5(VAR_19), 0xffff0000);


  VAR_26 = (VAR_18->cyctimer(VAR_18) >> 12) & 0x7fff;
  VAR_25 = FUNC_18(VAR_18, VAR_26);

  FUNC_7(VAR_20, FUNC_4(VAR_19),
    VAR_7 | (VAR_25 << 16)
    | VAR_9);



  if (VAR_15 > 1) {
   FUNC_21("cycle_match: 0x%04x->0x%04x\n",
      VAR_26, VAR_25);
   FUNC_14(VAR_20, VAR_5 + VAR_19);
   FUNC_13(VAR_20, VAR_5 + VAR_19);
  }
 } else if ((VAR_29 & VAR_7) == 0) {
  FUNC_12(VAR_20->fc.dev,
   "IT DMA underrun (0x%08x)\n", VAR_29);
  FUNC_7(VAR_20, FUNC_4(VAR_19), VAR_10);
 }
out:
 return VAR_21;
}
