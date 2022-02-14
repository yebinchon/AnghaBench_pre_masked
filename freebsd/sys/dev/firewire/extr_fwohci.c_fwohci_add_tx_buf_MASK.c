
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohcidb_tr {int dbcnt; int buf; struct fwohcidb* db; } ;
struct TYPE_3__ {int res; int cmd; int addr; } ;
struct TYPE_4__ {TYPE_1__ desc; int * immed; } ;
struct fwohcidb {TYPE_2__ db; } ;
struct fw_xferq {scalar_t__ buf; } ;
struct fwohci_dbch {struct fw_xferq xferq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_4(struct fwohci_dbch *VAR_6, struct fwohcidb_tr *VAR_7,
        int VAR_8)
{
 struct fwohcidb *VAR_9 = VAR_7->db;
 struct fw_xferq *VAR_10;
 int VAR_11 = 0;

 VAR_10 = &VAR_6->xferq;
 if (VAR_10->buf == 0) {
  VAR_11 = VAR_0;
  return VAR_11;
 }
 VAR_7->buf = FUNC_3(VAR_10->buf, VAR_8);
 VAR_7->dbcnt = 3;

 FUNC_0(VAR_9[0].db.desc.cmd,
  VAR_4 | VAR_2 | 8);
 FUNC_0(VAR_9[0].db.desc.addr, 0);
 FUNC_1((void *)&VAR_9[1].db.immed[0], sizeof(VAR_9[1].db.immed));
 FUNC_0(VAR_9[2].db.desc.addr,
 FUNC_2(VAR_10->buf, VAR_8) + sizeof(uint32_t));

 FUNC_0(VAR_9[2].db.desc.cmd,
  VAR_3 | VAR_5 | VAR_1);

 FUNC_0(VAR_9[0].db.desc.res, 0);
 FUNC_0(VAR_9[2].db.desc.res, 0);

 return 0;
}
