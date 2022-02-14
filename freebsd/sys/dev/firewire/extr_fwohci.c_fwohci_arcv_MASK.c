
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


typedef char uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct iovec {char* iov_base; int iov_len; } ;
struct fwohcidb_tr {int bus_addr; char* buf; TYPE_6__* db; int dma_map; } ;
struct fwohci_trailer {int dummy; } ;
struct TYPE_10__ {int dev; int status; } ;
struct TYPE_14__ {int psize; } ;
struct fwohci_dbch {int buf_offset; TYPE_7__ xferq; struct fwohcidb_tr* top; struct fwohcidb_tr* pdb_tr; int dmat; int am; } ;
struct fwohci_softc {TYPE_3__ fc; struct fwohci_dbch arrs; struct fwohci_dbch arrq; } ;
struct fw_rcv_buf {int nvec; int spd; struct iovec* vec; TYPE_3__* fc; } ;
struct TYPE_8__ {int tcode; } ;
struct TYPE_9__ {TYPE_1__ common; } ;
struct fw_pkt {TYPE_2__ mode; } ;
typedef int pktbuf ;
typedef char* caddr_t ;
struct TYPE_11__ {int res; } ;
struct TYPE_12__ {TYPE_4__ desc; } ;
struct TYPE_13__ {TYPE_5__ db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (struct fwohci_softc*,int ) ;
 int FUNC_3 (struct fwohci_softc*,int ,int ) ;
 struct fwohcidb_tr* FUNC_4 (struct fwohcidb_tr*,int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*,int,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (struct fw_rcv_buf*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct fwohci_softc*,struct fwohci_dbch*,struct fwohcidb_tr*,int,int) ;
 int FUNC_11 (struct fw_pkt*,int) ;
 int FUNC_12 (struct fwohci_softc*,struct fwohci_dbch*,struct fw_pkt*) ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(struct fwohci_softc *VAR_13, struct fwohci_dbch *VAR_14, int VAR_15)
{
 struct fwohcidb_tr *VAR_16;
 struct iovec VAR_17[2];
 struct fw_pkt VAR_18;
 int VAR_19;
 struct fw_pkt *VAR_20;
 uint8_t *VAR_21;
 uint32_t VAR_22, VAR_23, VAR_24, VAR_25;
 u_int VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 int VAR_32;
 caddr_t VAR_33;
 int VAR_34;

 if (&VAR_13->arrq == VAR_14) {
  VAR_23 = VAR_4;
 } else if (&VAR_13->arrs == VAR_14) {
  VAR_23 = VAR_5;
 } else {
  return;
 }

 VAR_32 = FUNC_14();
 VAR_16 = VAR_14->top;
 VAR_30 = 0;

 FUNC_9(VAR_14->am, VAR_0);
 FUNC_9(VAR_14->am, VAR_1);
 VAR_24 = FUNC_0(VAR_16->db[0].db.desc.res) >> VAR_9;
 VAR_34 = FUNC_0(VAR_16->db[0].db.desc.res) & VAR_8;
 while (VAR_24 & VAR_6) {






  VAR_27 = VAR_14->xferq.psize - VAR_34;
  VAR_21 = (uint8_t *)VAR_16->buf;
  if (VAR_14->pdb_tr == ((void*)0)) {
   VAR_27 -= VAR_14->buf_offset;
   VAR_21 += VAR_14->buf_offset;
  }
  if (VAR_27 > 0)
   FUNC_6(VAR_14->dmat, VAR_16->dma_map,
     VAR_0);
  while (VAR_27 > 0) {
   if (VAR_15 >= 0 && VAR_15-- == 0)
    goto out;
   if (VAR_14->pdb_tr != ((void*)0)) {

    int VAR_35;

    VAR_31 = VAR_14->buf_offset;
    if (VAR_31 < 0)
     VAR_31 = - VAR_31;
    VAR_33 = VAR_14->pdb_tr->buf + VAR_31;
    VAR_35 = VAR_14->xferq.psize - VAR_31;
    if (VAR_10)
     FUNC_13("rlen=%d, offset=%d\n",
      VAR_35, VAR_14->buf_offset);
    if (VAR_14->buf_offset < 0) {

     char *VAR_36;

     VAR_36 = (char *)&VAR_18;
     FUNC_5(VAR_33, VAR_36, VAR_35);
     VAR_36 += VAR_35;

     VAR_35 = sizeof(VAR_18) - VAR_35;
     if (VAR_35 < 0)
      FUNC_13("why rlen < 0\n");
     FUNC_5(VAR_16->buf, VAR_36, VAR_35);
     VAR_21 += VAR_35;
     VAR_27 -= VAR_35;
     VAR_29 = FUNC_11(&VAR_18, sizeof(VAR_18));
     if (VAR_29 <= 0) {
      FUNC_13("hlen should be positive.");
      goto err;
     }
     VAR_31 = sizeof(VAR_18);
     VAR_17[0].iov_base = (char *)&VAR_18;
     VAR_17[0].iov_len = VAR_31;
    } else {

     VAR_31 = VAR_35;
     VAR_17[0].iov_base = VAR_33;
     VAR_17[0].iov_len = VAR_35;
    }
    VAR_20=(struct fw_pkt *)VAR_17[0].iov_base;
    VAR_19 = 1;
   } else {

    VAR_20=(struct fw_pkt *)VAR_21;
    VAR_29 = FUNC_11(VAR_20, VAR_27);
    if (VAR_29 == 0)
     goto err;
    if (VAR_29 < 0) {
     VAR_14->pdb_tr = VAR_16;
     VAR_14->buf_offset = - VAR_14->buf_offset;

     if (VAR_34 != 0) {
      FUNC_13("resCount=%d hlen=%d\n",
          VAR_34, VAR_29);
          goto err;
     }
     goto out;
    }
    VAR_31 = 0;
    VAR_19 = 0;
   }
   VAR_28 = FUNC_12(VAR_13, VAR_14, VAR_20) - VAR_31;
   if (VAR_28 < 0) {


    FUNC_13("plen(%d) is negative! offset=%d\n",
        VAR_28, VAR_31);
    goto err;
   }
   if (VAR_28 > 0) {
    VAR_27 -= VAR_28;
    if (VAR_27 < 0) {
     VAR_14->pdb_tr = VAR_16;
     if (VAR_10)
      FUNC_13("splitted payload\n");

     if (VAR_34 != 0) {
      FUNC_13("resCount=%d plen=%d"
          " len=%d\n",
          VAR_34, VAR_28, VAR_27);
      goto err;
     }
     goto out;
    }
    VAR_17[VAR_19].iov_base = VAR_21;
    VAR_17[VAR_19].iov_len = VAR_28;
    VAR_19++;
    VAR_21 += VAR_28;
   }
   VAR_14->buf_offset = VAR_21 - (uint8_t *)VAR_16->buf;
   if (VAR_19 == 0)
    FUNC_13("nvec == 0\n");


   VAR_22 = FUNC_0(*(uint32_t *)(VAR_21 - sizeof(struct fwohci_trailer)));




   VAR_26 = (VAR_22 >> 21) & 0x3;
   VAR_25 = (VAR_22 >> 16) & 0x1f;
   switch (VAR_25) {
   case 129:




   case 130:
   {
    struct fw_rcv_buf VAR_37;

    if ((VAR_17[VAR_19-1].iov_len -=
     sizeof(struct fwohci_trailer)) == 0)
     VAR_19--;
    VAR_37.fc = &VAR_13->fc;
    VAR_37.vec = VAR_17;
    VAR_37.nvec = VAR_19;
    VAR_37.spd = VAR_26;
    FUNC_8(&VAR_37);
    break;
   }
   case 128:
    if ((VAR_13->fc.status != VAR_3) &&
        (VAR_13->fc.status != VAR_2))
     FUNC_13("got BUSRST packet!?\n");
    break;
   default:
    FUNC_7(VAR_13->fc.dev,
        "Async DMA Receive error err=%02x %s"
        " plen=%d offset=%d len=%d status=0x%08x"
        " tcode=0x%x, stat=0x%08x\n",
        VAR_25, VAR_11[VAR_25], VAR_28,
        VAR_14->buf_offset, VAR_27,
        FUNC_2(VAR_13, FUNC_1(VAR_23)),
        VAR_20->mode.common.tcode, VAR_22);

    goto err;

    break;
   }
   VAR_30++;
   if (VAR_14->pdb_tr != ((void*)0)) {
    FUNC_10(VAR_13, VAR_14, VAR_14->pdb_tr,
        VAR_23, 1);
    VAR_14->pdb_tr = ((void*)0);
   }

  }
out:
  if (VAR_34 == 0) {

   if (VAR_14->pdb_tr == ((void*)0)) {
    FUNC_10(VAR_13, VAR_14, VAR_16, VAR_23, 1);
    VAR_14->buf_offset = 0;
   } else
    if (VAR_14->pdb_tr != VAR_16)
     FUNC_13("pdb_tr != db_tr\n");
   VAR_16 = FUNC_4(VAR_16, VAR_12);
   VAR_24 = FUNC_0(VAR_16->db[0].db.desc.res)
      >> VAR_9;
   VAR_34 = FUNC_0(VAR_16->db[0].db.desc.res)
      & VAR_8;

   VAR_14->top = VAR_16;
  } else {
   VAR_14->buf_offset = VAR_14->xferq.psize - VAR_34;
   break;
  }

 }




 FUNC_15(VAR_32);
 return;

err:
 FUNC_7(VAR_13->fc.dev, "AR DMA status=%x, ",
     FUNC_2(VAR_13, FUNC_1(VAR_23)));
 VAR_14->pdb_tr = ((void*)0);

 FUNC_13(" skip buffer");
 while (VAR_34 == 0) {
  FUNC_13(" #");
  FUNC_10(VAR_13, VAR_14, VAR_16, VAR_23, 0);
  VAR_16 = FUNC_4(VAR_16, VAR_12);
  VAR_34 = FUNC_0(VAR_16->db[0].db.desc.res)
      & VAR_8;
 }
 FUNC_13(" done\n");
 VAR_14->top = VAR_16;
 VAR_14->buf_offset = VAR_14->xferq.psize - VAR_34;
 FUNC_3(VAR_13, FUNC_1(VAR_23), VAR_7);
 FUNC_15(VAR_32);
}
