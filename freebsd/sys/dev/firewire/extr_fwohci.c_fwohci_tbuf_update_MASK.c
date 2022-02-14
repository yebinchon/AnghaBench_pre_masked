
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohcidb_tr {struct fwohcidb* db; } ;
struct TYPE_5__ {int res; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;
struct fwohcidb {TYPE_3__ db; } ;
struct firewire_comm {int dev; struct fw_xferq** it; } ;
struct fwohci_softc {TYPE_1__* it; struct firewire_comm fc; } ;
struct fw_xferq {int stfree; int stdma; } ;
struct fw_bulkxfer {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_4__ {int ndesc; int am; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct firewire_comm*) ;
 int FUNC_2 (struct firewire_comm*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fw_bulkxfer* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct fw_bulkxfer*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct fwohci_softc*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct fw_xferq*) ;

__attribute__((used)) static void
FUNC_12(struct fwohci_softc *VAR_8, int VAR_9)
{
 struct firewire_comm *VAR_10 = &VAR_8->fc;
 struct fwohcidb *VAR_11;
 struct fw_bulkxfer *VAR_12;
 struct fw_xferq *VAR_13;
 uint32_t VAR_14, VAR_15;
 int VAR_16, VAR_17=0, VAR_18;

 VAR_13 = VAR_10->it[VAR_9];
 VAR_18 = VAR_8->it[VAR_9].ndesc - 1;
 VAR_16 = FUNC_9();
 FUNC_1(VAR_10);
 FUNC_8(VAR_8->it[VAR_9].am, VAR_0);
 if (VAR_5)
  FUNC_7(VAR_8, VAR_2 + VAR_9);
 while ((VAR_12 = FUNC_3(&VAR_13->stdma)) != ((void*)0)) {
  VAR_11 = ((struct fwohcidb_tr *)(VAR_12->end))->db;
  VAR_14 = FUNC_0(VAR_11[VAR_18].db.desc.res)
    >> VAR_4;
  VAR_11 = ((struct fwohcidb_tr *)(VAR_12->start))->db;

  VAR_15 = FUNC_0(VAR_11[VAR_18].db.desc.res)
    & VAR_3;
  if (VAR_14 == 0)
   break;
  FUNC_5(&VAR_13->stdma, VAR_7);
  switch (VAR_14 & VAR_1) {
  case 128:



   break;
  default:
   FUNC_6(VAR_10->dev,
    "Isochronous transmit err %02x(%s)\n",
     VAR_14, VAR_6[VAR_14 & 0x1f]);
  }
  FUNC_4(&VAR_13->stfree, VAR_12, VAR_7);
  VAR_17++;
 }
 FUNC_2(VAR_10);
 FUNC_10(VAR_16);
 if (VAR_17)
  FUNC_11(VAR_13);
}
