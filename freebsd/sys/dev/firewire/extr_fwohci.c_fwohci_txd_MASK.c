
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct fwohcidb_tr {struct fw_xfer* xfer; int dma_map; } ;
struct TYPE_6__ {int res; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;
struct fwohcidb {TYPE_2__ db; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_10__ {scalar_t__ queued; } ;
struct fwohci_dbch {int flags; TYPE_5__ xferq; struct fwohcidb_tr* top; struct fwohcidb_tr* bottom; int dmat; int am; } ;
struct fwohci_softc {TYPE_3__ fc; struct fwohci_dbch atrs; struct fwohci_dbch atrq; } ;
struct TYPE_9__ {scalar_t__ pay_len; } ;
struct fw_xfer {int flag; int resp; TYPE_4__ recv; int tv; } ;
struct firewire_comm {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;






 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct firewire_comm*) ;
 int FUNC_2 (struct firewire_comm*) ;
 int FUNC_3 (struct fwohcidb_tr*,struct fwohcidb*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (struct fwohci_softc*,int ,int) ;
 struct fwohcidb_tr* FUNC_6 (struct fwohcidb_tr*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct fwohci_softc*,int) ;
 int VAR_24 ;
 int FUNC_11 (struct fw_xfer*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct fwohci_softc*,struct fwohci_dbch*) ;
 int VAR_25 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 int FUNC_16 () ;
 int FUNC_17 (int) ;

void
FUNC_18(struct fwohci_softc *VAR_26, struct fwohci_dbch *VAR_27)
{
 int VAR_28, VAR_29, VAR_30 = 0;
 struct fwohcidb_tr *VAR_31;
 struct fwohcidb *VAR_32;
 struct fw_xfer *VAR_33;
 uint32_t VAR_34;
 u_int VAR_35, VAR_36;
 int VAR_37;
 struct firewire_comm *VAR_38 = (struct firewire_comm *)VAR_26;

 if (&VAR_26->atrq == VAR_27) {
  VAR_34 = VAR_14;
  VAR_29 = VAR_0;
 } else if (&VAR_26->atrs == VAR_27) {
  VAR_34 = VAR_15;
  VAR_29 = VAR_1;
 } else {
  return;
 }
 VAR_28 = FUNC_16();
 VAR_31 = VAR_27->bottom;
 VAR_37 = 0;
 FUNC_12(VAR_27->am, VAR_2);
 FUNC_12(VAR_27->am, VAR_3);
 while (VAR_27->xferq.queued > 0) {
  FUNC_3(VAR_31, VAR_32);
  VAR_36 = FUNC_0(VAR_32->db.desc.res) >> VAR_23;
  if (!(VAR_36 & VAR_16)) {
   if (VAR_38->status != VAR_7)

    goto out;
  }
  FUNC_7(VAR_27->dmat, VAR_31->dma_map,
   VAR_3);
  FUNC_8(VAR_27->dmat, VAR_31->dma_map);

  if (VAR_24 > 1)
   FUNC_10(VAR_26, VAR_29);

  if (VAR_36 & VAR_17) {

   FUNC_5(VAR_26, FUNC_4(VAR_34), VAR_18);
   FUNC_9(VAR_26->fc.dev, "force reset AT FIFO\n");
   FUNC_5(VAR_26, VAR_20, VAR_21);
   FUNC_5(VAR_26, VAR_19, VAR_22 | VAR_21);
   FUNC_5(VAR_26, FUNC_4(VAR_34), VAR_18);
  }
  VAR_35 = VAR_36 & VAR_8;
  switch (VAR_35) {
  case 139:
  case 141:
   VAR_30 = 0;
   break;
  case 144:
  case 143:
  case 142:
   VAR_30 = VAR_5;
   break;
  case 134:
  case 138:
   VAR_30 = VAR_4;
   break;
  case 133:
  case 129:
  case 132:
  case 136:
  case 135:
  case 130:
  case 131:
  case 128:
  case 140:
  case 137:
  default:
   VAR_30 = VAR_6;
   break;
  }
  if (VAR_31->xfer != ((void*)0)) {
   VAR_33 = VAR_31->xfer;
   if (VAR_33->flag & VAR_11) {




    FUNC_11(VAR_33);
   } else {
    FUNC_14(&VAR_33->tv);
    VAR_33->flag = VAR_12;
    if (VAR_30 == VAR_5) {
     VAR_33->flag = VAR_10;
     VAR_33->resp = VAR_30;
     VAR_33->recv.pay_len = 0;
     FUNC_11(VAR_33);
    } else if (VAR_35 != 139) {
     if (VAR_35 != 141)
      VAR_33->flag = VAR_13;
     VAR_33->resp = VAR_30;
     VAR_33->recv.pay_len = 0;
     FUNC_11(VAR_33);
    }
   }




  } else {
   FUNC_15("this shouldn't happen\n");
  }
  FUNC_1(VAR_38);
  VAR_27->xferq.queued--;
  FUNC_2(VAR_38);
  VAR_31->xfer = ((void*)0);

  VAR_37++;
  VAR_31 = FUNC_6(VAR_31, VAR_25);
  VAR_27->bottom = VAR_31;
  if (VAR_27->bottom == VAR_27->top) {

   if (VAR_24 && VAR_27->xferq.queued > 0)
    FUNC_15("queued > 0\n");
   break;
  }
 }
out:
 if ((VAR_27->flags & VAR_9) && VAR_37 > 0) {
  FUNC_15("make free slot\n");
  VAR_27->flags &= ~VAR_9;
  FUNC_1(VAR_38);
  FUNC_13(VAR_26, VAR_27);
  FUNC_2(VAR_38);
 }
 FUNC_17(VAR_28);
}
