
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nisodma; int (* ibr ) (TYPE_2__*) ;int (* irx_enable ) (TYPE_2__*,int) ;int dev; } ;
struct fwohci_softc {TYPE_2__ fc; TYPE_1__* ir; } ;
struct fw_xferq {int flag; int stfree; int stdma; } ;
struct fw_bulkxfer {int dummy; } ;
typedef int device_t ;
struct TYPE_4__ {struct fw_xferq xferq; } ;


 int VAR_0 ;
 struct fw_bulkxfer* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct fw_bulkxfer*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct fwohci_softc*,int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;

int
FUNC_8(struct fwohci_softc *VAR_2, device_t VAR_3)
{
 int VAR_4;
 struct fw_xferq *VAR_5;
 struct fw_bulkxfer *VAR_6;

 FUNC_5(VAR_2, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_2->fc.nisodma; VAR_4++) {
  VAR_5 = &VAR_2->ir[VAR_4].xferq;
  if ((VAR_5->flag & VAR_0) != 0) {
   FUNC_4(VAR_2->fc.dev,
    "resume iso receive ch: %d\n", VAR_4);
   VAR_5->flag &= ~VAR_0;

   while ((VAR_6 = FUNC_0(&VAR_5->stdma)) != ((void*)0)) {
    FUNC_2(&VAR_5->stdma, VAR_1);
    FUNC_1(&VAR_5->stfree, VAR_6, VAR_1);
   }
   VAR_2->fc.irx_enable(&VAR_2->fc, VAR_4);
  }
 }

 FUNC_3(VAR_3);
 VAR_2->fc.ibr(&VAR_2->fc);
 return 0;
}
