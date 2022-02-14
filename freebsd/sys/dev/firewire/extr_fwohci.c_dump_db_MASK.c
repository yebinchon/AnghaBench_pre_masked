
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohcidb_tr {int bus_addr; struct fwohcidb* db; } ;
struct fwohcidb {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct fwohci_dbch {int ndb; int ndesc; struct fwohcidb_tr* top; } ;
struct fwohci_softc {TYPE_1__ fc; struct fwohci_dbch* ir; struct fwohci_dbch* it; struct fwohci_dbch arrs; struct fwohci_dbch arrq; struct fwohci_dbch atrs; struct fwohci_dbch atrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fwohci_softc*,int) ;
 struct fwohcidb_tr* FUNC_3 (struct fwohcidb_tr*,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_5 (struct fwohcidb_tr*,struct fwohcidb*,int,int) ;
 int FUNC_6 (char*,int,...) ;

void
FUNC_7(struct fwohci_softc *VAR_7, uint32_t VAR_8)
{
 struct fwohci_dbch *VAR_9;
 struct fwohcidb_tr *VAR_10 = ((void*)0), *VAR_11, *VAR_12 = ((void*)0);
 struct fwohcidb *VAR_13 = ((void*)0), *VAR_14, *VAR_15 = ((void*)0);
 int VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;

 if (VAR_8 == 0) {
  VAR_19 = VAR_4;
  VAR_9 = &VAR_7->atrq;
 } else if (VAR_8 == 1) {
  VAR_19 = VAR_5;
  VAR_9 = &VAR_7->atrs;
 } else if (VAR_8 == 2) {
  VAR_19 = VAR_2;
  VAR_9 = &VAR_7->arrq;
 } else if (VAR_8 == 3) {
  VAR_19 = VAR_3;
  VAR_9 = &VAR_7->arrs;
 } else if (VAR_8 < VAR_0) {
  VAR_19 = FUNC_1(VAR_8 - VAR_1);
  VAR_9 = &VAR_7->it[VAR_8 - VAR_1];
 } else {
  VAR_19 = FUNC_0(VAR_8 - VAR_0);
  VAR_9 = &VAR_7->ir[VAR_8 - VAR_0];
 }
 VAR_18 = FUNC_2(VAR_7, VAR_19 + 0xc);

 if (VAR_9->ndb == 0) {
  FUNC_4(VAR_7->fc.dev, "No DB is attached ch=%d\n", VAR_8);
  return;
 }
 VAR_11 = VAR_9->top;
 VAR_14 = VAR_11->db;
 for (VAR_16 = 0; VAR_16 < VAR_9->ndb; VAR_16++) {
  VAR_10 = FUNC_3(VAR_11, VAR_6);
  if (VAR_10 == ((void*)0)) {
   VAR_13 = ((void*)0);
   goto outdb;
  }
  VAR_12 = FUNC_3(VAR_10, VAR_6);
  for (VAR_17 = 0; VAR_17 < VAR_9->ndesc; VAR_17++) {
   if ((VAR_18 & 0xfffffff0) == VAR_10->bus_addr) {
    VAR_13 = VAR_10->db;
    if (VAR_12 != ((void*)0)) {
     VAR_15 = VAR_12->db;
    } else {
     VAR_15 = ((void*)0);
    }
    goto outdb;
   }
  }
  VAR_11 = FUNC_3(VAR_11, VAR_6);
  if (VAR_11 == ((void*)0)) {
   VAR_13 = ((void*)0);
   goto outdb;
  }
  VAR_14 = VAR_11->db;
 }
outdb:
 if (VAR_13 != ((void*)0)) {




  FUNC_6("Current DB %d\n", VAR_8);
  FUNC_5(VAR_10, VAR_13, VAR_8, VAR_9->ndesc);




 } else {
  FUNC_6("dbdump err ch = %d cmd = 0x%08x\n", VAR_8, VAR_18);
 }
 return;
}
