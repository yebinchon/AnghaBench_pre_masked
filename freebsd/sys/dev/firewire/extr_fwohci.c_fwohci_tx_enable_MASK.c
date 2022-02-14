
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
struct TYPE_7__ {int depend; int cmd; } ;
struct TYPE_8__ {TYPE_3__ desc; } ;
struct fwohcidb {TYPE_4__ db; } ;
struct TYPE_5__ {int nisodma; } ;
struct fwohci_softc {struct fwohci_dbch* it; TYPE_1__ fc; } ;
struct TYPE_6__ {int flag; int bnpacket; } ;
struct fwohci_dbch {int ndesc; int ndb; struct fwohcidb_tr* bottom; TYPE_2__ xferq; struct fwohcidb_tr* top; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 struct fwohcidb_tr* FUNC_4 (struct fwohcidb_tr*,int ) ;
 int FUNC_5 (struct fwohci_dbch*,struct fwohcidb_tr*,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct fwohci_softc *VAR_5, struct fwohci_dbch *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12;
 uint32_t VAR_13 = 0;
 struct fwohcidb_tr *VAR_14;
 struct fwohcidb *VAR_15;

 if (!(VAR_6->xferq.flag & VAR_1)) {
  VAR_7 = VAR_0;
  return VAR_7;
 }
 VAR_9 = VAR_6->ndesc;
 for (VAR_11 = 0; VAR_11 < VAR_5->fc.nisodma; VAR_11++) {
  if (&VAR_5->it[VAR_11] == VAR_6) {
   VAR_13 = FUNC_3(VAR_11);
   break;
  }
 }
 if (VAR_13 == 0) {
  VAR_7 = VAR_0;
  return VAR_7;
 }
 if (VAR_6->xferq.flag & VAR_2)
  return VAR_7;
 VAR_6->xferq.flag |= VAR_2;
 for (VAR_10 = 0, VAR_6->bottom = VAR_6->top; VAR_10 < (VAR_6->ndb - 1); VAR_10++) {
  VAR_6->bottom = FUNC_4(VAR_6->bottom, VAR_4);
 }
 VAR_14 = VAR_6->top;
 for (VAR_8 = 0; VAR_8 < VAR_6->ndb; VAR_8++) {
  FUNC_5(VAR_6, VAR_14, VAR_8);
  if (FUNC_4(VAR_14, VAR_4) == ((void*)0)) {
   break;
  }
  VAR_15 = VAR_14->db;
  VAR_12 = VAR_14->dbcnt - 1;
  FUNC_2(VAR_15[0].db.desc.depend,
    FUNC_4(VAR_14, VAR_4)->bus_addr | VAR_9);
  VAR_15[VAR_12].db.desc.depend = VAR_15[0].db.desc.depend;
  if (VAR_6->xferq.flag & VAR_1) {
   if (((VAR_8 + 1) % VAR_6->xferq.bnpacket) == 0) {
    FUNC_1(
     VAR_15[VAR_12].db.desc.cmd,
     VAR_3);

    FUNC_1(
     VAR_15[0].db.desc.cmd,
     VAR_3);
   }
  }
  VAR_14 = FUNC_4(VAR_14, VAR_4);
 }
 FUNC_0(
  VAR_6->bottom->db[VAR_6->bottom->dbcnt - 1].db.desc.depend, 0xf);
 return VAR_7;
}
