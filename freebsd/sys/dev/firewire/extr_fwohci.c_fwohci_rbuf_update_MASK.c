
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohcidb_tr {int dma_map; TYPE_3__* db; } ;
struct firewire_comm {int dev; struct fw_xferq** ir; } ;
struct fwohci_softc {TYPE_4__* ir; struct firewire_comm fc; } ;
struct fw_xferq {int flag; int (* hand ) (struct fw_xferq*) ;int stvalid; int stdma; int bnpacket; int * buf; } ;
struct fw_bulkxfer {int resp; int poffset; int * mbuf; scalar_t__ end; } ;
struct TYPE_8__ {int ndesc; int dmat; int am; } ;
struct TYPE_5__ {int res; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;
struct TYPE_7__ {TYPE_2__ db; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct firewire_comm*) ;
 int FUNC_2 (struct firewire_comm*) ;
 int VAR_4 ;
 struct fw_bulkxfer* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct fw_bulkxfer*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int,int ) ;
 int FUNC_9 (struct fwohci_softc*,int) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct fw_xferq*) ;
 int FUNC_14 (struct fw_xferq*) ;

__attribute__((used)) static void
FUNC_15(struct fwohci_softc *VAR_7, int VAR_8)
{
 struct firewire_comm *VAR_9 = &VAR_7->fc;
 struct fwohcidb_tr *VAR_10;
 struct fw_bulkxfer *VAR_11;
 struct fw_xferq *VAR_12;
 uint32_t VAR_13;
 int VAR_14 = 0, VAR_15;

 VAR_12 = VAR_9->ir[VAR_8];
 VAR_15 = VAR_7->ir[VAR_8].ndesc - 1;




 if ((VAR_12->flag & VAR_3) == 0)
  FUNC_1(VAR_9);
 FUNC_11(VAR_7->ir[VAR_8].am, VAR_0);
 while ((VAR_11 = FUNC_3(&VAR_12->stdma)) != ((void*)0)) {
  VAR_10 = (struct fwohcidb_tr *)VAR_11->end;
  VAR_13 = FUNC_0(VAR_10->db[VAR_15].db.desc.res)
    >> VAR_4;
  if (VAR_13 == 0)
   break;

  if (VAR_11->mbuf != ((void*)0)) {
   FUNC_6(VAR_7->ir[VAR_8].dmat, VAR_10->dma_map,
      VAR_0);
   FUNC_7(VAR_7->ir[VAR_8].dmat, VAR_10->dma_map);
  } else if (VAR_12->buf != ((void*)0)) {
   FUNC_10(VAR_12->buf, VAR_11->poffset,
    VAR_12->bnpacket, VAR_0);
  } else {

   FUNC_12("fwohci_rbuf_update: this shouldn't happened\n");
  }

  FUNC_5(&VAR_12->stdma, VAR_6);
  FUNC_4(&VAR_12->stvalid, VAR_11, VAR_6);
  switch (VAR_13 & VAR_2) {
  case 128:
   VAR_11->resp = 0;
   break;
  default:
   VAR_11->resp = VAR_1;
   FUNC_8(VAR_9->dev,
    "Isochronous receive err %02x(%s)\n",
     VAR_13, VAR_5[VAR_13 & 0x1f]);
  }
  VAR_14++;
 }
 if ((VAR_12->flag & VAR_3) == 0)
  FUNC_2(VAR_9);
 if (VAR_14 == 0)
  return;

 if (VAR_12->flag & VAR_3)
  VAR_12->hand(VAR_12);
 else
  FUNC_14(VAR_12);
}
