
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct md_s {scalar_t__ type; int flags; int fwsectors; int fwheads; char* ident; int (* start ) (struct md_s*,struct bio*) ;int devstat; int queue_mtx; int bio_queue; } ;
struct bio {scalar_t__ bio_cmd; int bio_length; int bio_completed; int bio_bcount; int bio_resid; } ;
struct TYPE_5__ {int td_pflags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct bio* FUNC_0 (int *) ;
 TYPE_1__* VAR_11 ;
 int FUNC_1 (int ,struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*,char*,int) ;
 scalar_t__ FUNC_3 (struct bio*,char*,char*) ;
 int FUNC_4 (struct bio*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct md_s*,int *,int,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (struct md_s*,struct bio*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_12)
{
 struct md_s *VAR_13;
 struct bio *VAR_14;
 int VAR_15;

 VAR_13 = VAR_12;
 FUNC_11(VAR_11);
 FUNC_9(VAR_11, VAR_9);
 FUNC_12(VAR_11);
 if (VAR_13->type == VAR_7)
  VAR_11->td_pflags |= VAR_10;

 for (;;) {
  FUNC_7(&VAR_13->queue_mtx);
  if (VAR_13->flags & VAR_5) {
   VAR_13->flags |= VAR_4;
   FUNC_8(&VAR_13->queue_mtx);
   FUNC_5(0);
  }
  VAR_14 = FUNC_0(&VAR_13->bio_queue);
  if (!VAR_14) {
   FUNC_6(VAR_13, &VAR_13->queue_mtx, VAR_9 | VAR_8, "mdwait", 0);
   continue;
  }
  FUNC_8(&VAR_13->queue_mtx);
  if (VAR_14->bio_cmd == VAR_0) {
   int VAR_16 = ((VAR_13->flags & VAR_6) != 0);

   if ((VAR_13->fwsectors && VAR_13->fwheads &&
       (FUNC_2(VAR_14, "GEOM::fwsectors",
       VAR_13->fwsectors) ||
       FUNC_2(VAR_14, "GEOM::fwheads",
       VAR_13->fwheads))) ||
       FUNC_2(VAR_14, "GEOM::candelete", 1))
    VAR_15 = -1;
   else if (VAR_13->ident[0] != '\0' &&
       FUNC_3(VAR_14, "GEOM::ident", VAR_13->ident))
    VAR_15 = -1;
   else if (FUNC_2(VAR_14, "MNT::verified", VAR_16))
    VAR_15 = -1;
   else
    VAR_15 = VAR_3;
  } else {
   VAR_15 = VAR_13->start(VAR_13, VAR_14);
  }

  if (VAR_14->bio_cmd == VAR_1 || VAR_14->bio_cmd == VAR_2) {







   VAR_14->bio_bcount = VAR_14->bio_length;
   VAR_14->bio_resid = (VAR_15 == -1 ? VAR_14->bio_bcount : 0);
   FUNC_1(VAR_13->devstat, VAR_14);
  }
  if (VAR_15 != -1) {
   VAR_14->bio_completed = VAR_14->bio_length;
   FUNC_4(VAR_14, VAR_15);
  }
 }
}
