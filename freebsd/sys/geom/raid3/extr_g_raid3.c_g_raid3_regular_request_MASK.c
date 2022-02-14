
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_raid3_softc {int sc_inflight; int sc_bump_id; int sc_state; int sc_writes; } ;
struct g_raid3_disk {int d_flags; } ;
struct bio {scalar_t__ bio_cmd; scalar_t__ bio_inbed; scalar_t__ bio_children; int bio_error; int bio_pflags; struct g_raid3_disk* bio_caller2; int bio_length; int bio_completed; TYPE_3__* bio_from; TYPE_2__* bio_to; struct bio* bio_parent; } ;
struct TYPE_6__ {struct g_raid3_disk* private; int index; } ;
struct TYPE_5__ {TYPE_1__* geom; } ;
struct TYPE_4__ {struct g_raid3_softc* softc; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct bio* FUNC_0 (struct bio*) ;
 int FUNC_1 (int,struct bio*,char*,...) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,struct bio*) ;
 int FUNC_4 (struct bio*,int) ;
 int FUNC_5 (struct g_raid3_softc*,struct bio*) ;
 int VAR_7 ;
 int FUNC_6 (struct g_raid3_disk*,int ,int ) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct g_raid3_softc*,TYPE_3__*) ;
 int FUNC_9 (struct g_raid3_softc*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static void
FUNC_13(struct bio *VAR_8)
{
 struct g_raid3_softc *VAR_9;
 struct g_raid3_disk *VAR_10;
 struct bio *VAR_11;

 FUNC_10();

 VAR_11 = VAR_8->bio_parent;
 VAR_9 = VAR_11->bio_to->geom->softc;
 VAR_8->bio_from->index--;
 if (VAR_8->bio_cmd == 128)
  VAR_9->sc_writes--;
 VAR_10 = VAR_8->bio_from->private;
 if (VAR_10 == ((void*)0)) {
  FUNC_11();
  FUNC_8(VAR_9, VAR_8->bio_from);
  FUNC_12();
 }

 FUNC_1(3, VAR_8, "Request finished.");
 VAR_11->bio_inbed++;
 FUNC_2(VAR_11->bio_inbed <= VAR_11->bio_children,
     ("bio_inbed (%u) is bigger than bio_children (%u).", VAR_11->bio_inbed,
     VAR_11->bio_children));
 if (VAR_11->bio_inbed != VAR_11->bio_children)
  return;
 switch (VAR_11->bio_cmd) {
 case 129:
  FUNC_7(VAR_11);
  break;
 case 128:
 case 130:
     {
  int VAR_12 = 0;

  VAR_11->bio_completed = VAR_11->bio_length;
  while ((VAR_8 = FUNC_0(VAR_11)) != ((void*)0)) {
   if (VAR_8->bio_error == 0) {
    FUNC_5(VAR_9, VAR_8);
    continue;
   }

   if (VAR_12 == 0)
    VAR_12 = VAR_8->bio_error;
   else if (VAR_11->bio_error == 0) {



    VAR_11->bio_error = VAR_12;
   }

   VAR_10 = VAR_8->bio_caller2;
   if (VAR_10 == ((void*)0)) {
    FUNC_5(VAR_9, VAR_8);
    continue;
   }

   if ((VAR_10->d_flags & VAR_4) == 0) {
    VAR_10->d_flags |= VAR_4;
    FUNC_1(0, VAR_8,
        "Request failed (error=%d).",
        VAR_8->bio_error);
   } else {
    FUNC_1(1, VAR_8,
        "Request failed (error=%d).",
        VAR_8->bio_error);
   }
   if (VAR_7 &&
       VAR_9->sc_state == VAR_3) {
    VAR_9->sc_bump_id |= VAR_2;
    FUNC_6(VAR_10,
        VAR_5,
        VAR_6);
   }
   FUNC_5(VAR_9, VAR_8);
  }
  if (VAR_11->bio_error == 0)
   FUNC_1(3, VAR_11, "Request finished.");
  else
   FUNC_1(0, VAR_11, "Request failed.");
  VAR_11->bio_pflags &= ~VAR_0;
  VAR_11->bio_pflags &= ~VAR_1;
  FUNC_3(&VAR_9->sc_inflight, VAR_11);

  FUNC_9(VAR_9);
  FUNC_4(VAR_11, VAR_11->bio_error);
  break;
     }
 }
}
