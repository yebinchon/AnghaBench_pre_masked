
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct fwohcidb_tr {int dbcnt; int bus_addr; struct fwohcidb* db; } ;
struct TYPE_6__ {int depend; int cmd; } ;
struct TYPE_7__ {TYPE_2__ desc; } ;
struct fwohcidb {TYPE_3__ db; } ;
struct TYPE_5__ {int nisodma; } ;
struct TYPE_8__ {int flag; int bnpacket; } ;
struct fwohci_dbch {int ndesc; int ndb; struct fwohcidb_tr* top; TYPE_4__ xferq; int am; scalar_t__ buf_offset; struct fwohcidb_tr* bottom; int db_trq; } ;
struct fwohci_softc {int dummy_dma; struct fwohci_dbch* ir; TYPE_1__ fc; struct fwohci_dbch arrs; struct fwohci_dbch arrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct fwohci_softc*,int ,int) ;
 struct fwohcidb_tr* FUNC_7 (int *) ;
 struct fwohcidb_tr* FUNC_8 (struct fwohcidb_tr*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct fwohci_dbch*,struct fwohcidb_tr*,int,int *) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_11(struct fwohci_softc *VAR_12, struct fwohci_dbch *VAR_13)
{
 int VAR_14 = 0;
 int VAR_15, VAR_16, VAR_17, VAR_18 = 0, VAR_19;
 uint32_t VAR_20 = 0;
 struct fwohcidb_tr *VAR_21;
 struct fwohcidb *VAR_22;

 VAR_16 = VAR_13->ndesc;
 if (&VAR_12->arrq == VAR_13) {
  VAR_20 = VAR_7;
 } else if (&VAR_12->arrs == VAR_13) {
  VAR_20 = VAR_8;
 } else {
  for (VAR_18 = 0; VAR_18 < VAR_12->fc.nisodma; VAR_18++) {
   if (&VAR_12->ir[VAR_18] == VAR_13) {
    VAR_20 = FUNC_5(VAR_18);
    break;
   }
  }
 }
 if (VAR_20 == 0) {
  VAR_14 = VAR_3;
  return VAR_14;
 }
 if (VAR_13->xferq.flag & VAR_6) {
  if (VAR_13->xferq.flag & VAR_5)
   return VAR_14;
 } else {
  if (VAR_13->xferq.flag & VAR_5) {
   VAR_14 = VAR_2;
   return VAR_14;
  }
 }
 VAR_13->xferq.flag |= VAR_5;
 VAR_13->top = FUNC_7(&VAR_13->db_trq);
 for (VAR_17 = 0, VAR_13->bottom = VAR_13->top; VAR_17 < (VAR_13->ndb - 1); VAR_17++) {
  VAR_13->bottom = FUNC_8(VAR_13->bottom, VAR_11);
 }
 VAR_21 = VAR_13->top;
 for (VAR_15 = 0; VAR_15 < VAR_13->ndb; VAR_15++) {
  FUNC_10(VAR_13, VAR_21, VAR_15, &VAR_12->dummy_dma);
  if (FUNC_8(VAR_21, VAR_11) == ((void*)0))
   break;
  VAR_22 = VAR_21->db;
  VAR_19 = VAR_21->dbcnt - 1;
  FUNC_2(VAR_22[VAR_19].db.desc.depend,
   FUNC_8(VAR_21, VAR_11)->bus_addr | VAR_16);
  if (VAR_13->xferq.flag & VAR_4) {
   if (((VAR_15 + 1) % VAR_13->xferq.bnpacket) == 0) {
    FUNC_1(
     VAR_22[VAR_19].db.desc.cmd,
     VAR_10);
    FUNC_0(
     VAR_22[VAR_19].db.desc.depend,
     0xf);
   }
  }
  VAR_21 = FUNC_8(VAR_21, VAR_11);
 }
 FUNC_0(
  VAR_13->bottom->db[VAR_21->dbcnt - 1].db.desc.depend, 0xf);
 VAR_13->buf_offset = 0;
 FUNC_9(VAR_13->am, VAR_0);
 FUNC_9(VAR_13->am, VAR_1);
 if (VAR_13->xferq.flag & VAR_6) {
  return VAR_14;
 } else {
  FUNC_6(VAR_12, FUNC_3(VAR_20), VAR_13->top->bus_addr | VAR_16);
 }
 FUNC_6(VAR_12, FUNC_4(VAR_20), VAR_9);
 return VAR_14;
}
