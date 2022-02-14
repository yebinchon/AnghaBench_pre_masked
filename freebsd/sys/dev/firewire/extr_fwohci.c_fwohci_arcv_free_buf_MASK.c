
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohcidb_tr {struct fwohcidb* db; } ;
struct TYPE_5__ {int depend; int res; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;
struct fwohcidb {TYPE_3__ db; } ;
struct fwohci_softc {int dummy; } ;
struct TYPE_4__ {int psize; } ;
struct fwohci_dbch {struct fwohcidb_tr* bottom; int am; TYPE_1__ xferq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fwohci_softc*,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct fwohci_softc *VAR_2, struct fwohci_dbch *VAR_3,
    struct fwohcidb_tr *VAR_4, uint32_t VAR_5, int VAR_6)
{
 struct fwohcidb *VAR_7 = &VAR_4->db[0];

 FUNC_0(VAR_7->db.desc.depend, 0xf);
 FUNC_2(VAR_7->db.desc.res, VAR_3->xferq.psize);
 FUNC_1(VAR_3->bottom->db[0].db.desc.depend, 1);
 FUNC_5(VAR_3->am, VAR_0);
 VAR_3->bottom = VAR_4;

 if (VAR_6)
  FUNC_4(VAR_2, FUNC_3(VAR_5), VAR_1);
}
