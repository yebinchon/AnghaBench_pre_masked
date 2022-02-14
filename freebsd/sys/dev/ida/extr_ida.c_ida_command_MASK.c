
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct ida_softc {int dev; int lock; } ;
struct ida_qcb {int flags; int error; struct ida_hardware_qcb* hwqcb; } ;
struct TYPE_4__ {int command; int bcount; int blkno; } ;
struct TYPE_3__ {int drive; } ;
struct ida_hardware_qcb {TYPE_2__ req; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ida_softc*,struct ida_qcb*) ;
 struct ida_qcb* FUNC_5 (struct ida_softc*) ;
 int FUNC_6 (struct ida_softc*,struct ida_qcb*,void*,int) ;
 int FUNC_7 (struct ida_softc*,struct ida_qcb*) ;
 int FUNC_8 (int *,int ) ;

int
FUNC_9(struct ida_softc *VAR_5, int VAR_6, void *VAR_7, int VAR_8,
 int VAR_9, u_int32_t VAR_10, int VAR_11)
{
 struct ida_hardware_qcb *VAR_12;
 struct ida_qcb *VAR_13;
 int VAR_14;

 if (!VAR_4)
  FUNC_8(&VAR_5->lock, VAR_3);
 VAR_13 = FUNC_5(VAR_5);

 if (VAR_13 == ((void*)0)) {
  FUNC_0(VAR_5->dev, "out of QCBs\n");
  return (VAR_1);
 }

 VAR_13->flags = VAR_11 | VAR_2;
 VAR_12 = VAR_13->hwqcb;
 VAR_12->hdr.drive = VAR_9;
 VAR_12->req.blkno = FUNC_3(VAR_10);
 VAR_12->req.bcount = FUNC_2(FUNC_1(VAR_8, VAR_0));
 VAR_12->req.command = VAR_6;

 VAR_14 = FUNC_6(VAR_5, VAR_13, VAR_7, VAR_8);
 if (VAR_14 == 0) {
  VAR_14 = FUNC_7(VAR_5, VAR_13);

  if (VAR_14)
   return (VAR_14);
  VAR_14 = VAR_13->error;
 }




 FUNC_4(VAR_5, VAR_13);
 return (VAR_14);
}
