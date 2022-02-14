
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct idad_softc {int drive; } ;
struct ida_softc {int flags; int bio_queue; int lock; } ;
struct ida_qcb {int error; struct ida_hardware_qcb* hwqcb; int flags; struct bio* buf; } ;
struct TYPE_4__ {int command; int bcount; int blkno; } ;
struct TYPE_3__ {int drive; } ;
struct ida_hardware_qcb {TYPE_2__ req; TYPE_1__ hdr; } ;
struct bio {scalar_t__ bio_cmd; int bio_bcount; int bio_data; int bio_pblkno; struct idad_softc* bio_driver1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct bio* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ida_softc*,struct ida_qcb*) ;
 struct ida_qcb* FUNC_4 (struct ida_softc*) ;
 int FUNC_5 (struct ida_softc*,struct ida_qcb*,int ,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(struct ida_softc *VAR_8)
{
 struct ida_hardware_qcb *VAR_9;
 struct ida_qcb *VAR_10;
 struct idad_softc *VAR_11;
 struct bio *VAR_12;
 int VAR_13;

 FUNC_6(&VAR_8->lock, VAR_7);
 for (;;) {
  if (VAR_8->flags & VAR_6)
   return;
  VAR_12 = FUNC_0(&VAR_8->bio_queue);
  if (VAR_12 == ((void*)0))
   return;

  VAR_10 = FUNC_4(VAR_8);
  if (VAR_10 == ((void*)0))
   return;

  FUNC_1(&VAR_8->bio_queue, VAR_12);
  VAR_10->buf = VAR_12;
  VAR_10->flags = VAR_12->bio_cmd == VAR_0 ? VAR_4 : VAR_5;

  VAR_9 = VAR_10->hwqcb;
  VAR_11 = VAR_12->bio_driver1;
  VAR_9->hdr.drive = VAR_11->drive;
  VAR_9->req.blkno = VAR_12->bio_pblkno;
  VAR_9->req.bcount = FUNC_2(VAR_12->bio_bcount, VAR_3);
  VAR_9->req.command = VAR_12->bio_cmd == VAR_0 ? VAR_1 : VAR_2;

  VAR_13 = FUNC_5(VAR_8, VAR_10, VAR_12->bio_data, VAR_12->bio_bcount);
  if (VAR_13) {
   VAR_10->error = VAR_13;
   FUNC_3(VAR_8, VAR_10);
  }
 }
}
