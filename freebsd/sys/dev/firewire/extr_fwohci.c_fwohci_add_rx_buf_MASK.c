
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohcidb_tr {int dbcnt; int * buf; int dma_map; struct fwohcidb* db; } ;
struct TYPE_3__ {int cmd; int res; int addr; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;
struct fwohcidb {TYPE_2__ db; } ;
struct fw_xferq {int flag; int psize; int * buf; } ;
struct fwohci_dbch {int dmat; struct fw_xferq xferq; } ;
struct fwdma_alloc {int bus_addr; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int ,int *,int,int*,int ) ;
 int * FUNC_5 (int *,int) ;

int
FUNC_6(struct fwohci_dbch *VAR_9, struct fwohcidb_tr *VAR_10,
  int VAR_11, struct fwdma_alloc *VAR_12)
{
 struct fwohcidb *VAR_13 = VAR_10->db;
 struct fw_xferq *VAR_14;
 int VAR_15, VAR_16;
 bus_addr_t VAR_17[2];
 int VAR_18[2];

 VAR_14 = &VAR_9->xferq;
 if (VAR_14->buf == ((void*)0) && (VAR_9->xferq.flag & VAR_3) == 0) {
  if (VAR_10->buf == ((void*)0)) {
   VAR_10->buf = FUNC_4(VAR_9->dmat,
       &VAR_10->dma_map, VAR_14->psize, &VAR_17[0],
       VAR_1);
   if (VAR_10->buf == ((void*)0))
    return (VAR_2);
  }
  VAR_10->dbcnt = 1;
  VAR_18[0] = VAR_14->psize;
  FUNC_2(VAR_9->dmat, VAR_10->dma_map,
   VAR_0);
 } else {
  VAR_10->dbcnt = 0;
  if (VAR_12 != ((void*)0)) {
   VAR_18[VAR_10->dbcnt] = sizeof(uint32_t);
   VAR_17[VAR_10->dbcnt++] = VAR_12->bus_addr;
  }
  VAR_18[VAR_10->dbcnt] = VAR_14->psize;
  if (VAR_14->buf != ((void*)0)) {
   VAR_10->buf = FUNC_5(VAR_14->buf, VAR_11);
   VAR_17[VAR_10->dbcnt] = FUNC_3(VAR_14->buf, VAR_11);
  }
  VAR_10->dbcnt++;
 }
 for (VAR_15 = 0; VAR_15 < VAR_10->dbcnt; VAR_15++) {
  FUNC_1(VAR_13[VAR_15].db.desc.addr, VAR_17[VAR_15]);
  FUNC_1(VAR_13[VAR_15].db.desc.cmd, VAR_7 | VAR_18[VAR_15]);
  if (VAR_14->flag & VAR_4) {
   FUNC_0(VAR_13[VAR_15].db.desc.cmd, VAR_8);
  }
  FUNC_1(VAR_13[VAR_15].db.desc.res, VAR_18[VAR_15]);
 }
 VAR_16 = VAR_10->dbcnt - 1;
 if (VAR_14->flag & VAR_4) {
  FUNC_0(VAR_13[VAR_16].db.desc.cmd, VAR_6);
 }
 FUNC_0(VAR_13[VAR_16].db.desc.cmd, VAR_5);
 return 0;
}
