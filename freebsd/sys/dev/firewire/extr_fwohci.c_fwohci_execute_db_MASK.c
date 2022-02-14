
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fwohcidb_tr {size_t dbcnt; struct fwohcidb* db; } ;
struct TYPE_5__ {int res; int cmd; int addr; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;
struct fwohcidb {TYPE_2__ db; } ;
struct TYPE_7__ {int ds_len; int ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, bus_dma_segment_t *VAR_3, int VAR_4, int VAR_5)
{
 struct fwohcidb_tr *VAR_6;
 struct fwohcidb *VAR_7;
 bus_dma_segment_t *VAR_8;
 int VAR_9;

 VAR_6 = (struct fwohcidb_tr *)VAR_2;
 VAR_7 = &VAR_6->db[VAR_6->dbcnt];
 if (VAR_5) {
  if (VAR_1 || VAR_5 != VAR_0)
   FUNC_1("fwohci_execute_db: error=%d\n", VAR_5);
  return;
 }
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_8 = &VAR_3[VAR_9];
  FUNC_0(VAR_7->db.desc.addr, VAR_8->ds_addr);
  FUNC_0(VAR_7->db.desc.cmd, VAR_8->ds_len);
   FUNC_0(VAR_7->db.desc.res, 0);
  VAR_7++;
  VAR_6->dbcnt++;
 }
}
