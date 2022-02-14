
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccd_s {scalar_t__ sc_secsize; int sc_flags; int sc_pick; int sc_size; scalar_t__* sc_blk; } ;
struct bio {scalar_t__ bio_cmd; scalar_t__ bio_offset; long bio_data; long bio_length; long bio_completed; int bio_error; int bio_from; TYPE_2__* bio_to; } ;
typedef scalar_t__ daddr_t ;
typedef long caddr_t ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct ccd_s* softc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (long) ;
 int FUNC_1 (struct bio**,struct ccd_s*,struct bio*,scalar_t__,long,long) ;
 int FUNC_2 (struct bio*,int) ;
 int FUNC_3 (struct bio*,int ) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_4)
{
 long VAR_5, VAR_6;
 struct bio *VAR_7[2];
 caddr_t VAR_8;
 daddr_t VAR_9;
 int VAR_10;
 struct ccd_s *VAR_11;

 VAR_11 = VAR_4->bio_to->geom->softc;






 if(VAR_4->bio_cmd == VAR_0) {
  FUNC_2(VAR_4, VAR_3);
  return;
 }




 VAR_9 = VAR_4->bio_offset / VAR_11->sc_secsize;




 VAR_8 = VAR_4->bio_data;
 for (VAR_5 = VAR_4->bio_length; VAR_5 > 0; VAR_5 -= VAR_6) {
  VAR_10 = FUNC_1(VAR_7, VAR_11, VAR_4, VAR_9, VAR_8, VAR_5);
  if (VAR_10) {
   VAR_4->bio_completed += VAR_5;
   if (VAR_4->bio_error == 0)
    VAR_4->bio_error = VAR_10;
   if (VAR_4->bio_completed == VAR_4->bio_length)
    FUNC_2(VAR_4, VAR_4->bio_error);
   return;
  }
  VAR_6 = VAR_7[0]->bio_length;

  if (VAR_11->sc_flags & VAR_2) {
   if (VAR_7[0]->bio_cmd != VAR_1) {
    FUNC_3(VAR_7[0], VAR_7[0]->bio_from);
    FUNC_3(VAR_7[1], VAR_7[1]->bio_from);
   } else {
    int VAR_12 = VAR_11->sc_pick;
    daddr_t VAR_13 = VAR_11->sc_size / 16;

    if (VAR_9 < VAR_11->sc_blk[VAR_12] - VAR_13 ||
        VAR_9 > VAR_11->sc_blk[VAR_12] + VAR_13
    ) {
     VAR_11->sc_pick = VAR_12 = 1 - VAR_12;
    }
    VAR_11->sc_blk[VAR_12] = VAR_9 + FUNC_0(VAR_6);
    FUNC_3(VAR_7[VAR_12], VAR_7[VAR_12]->bio_from);
   }
  } else {



   FUNC_3(VAR_7[0], VAR_7[0]->bio_from);
  }
  VAR_9 += FUNC_0(VAR_6);
  VAR_8 += VAR_6;
 }
}
