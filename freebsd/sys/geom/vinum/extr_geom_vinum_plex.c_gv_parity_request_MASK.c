
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int dummy; } ;
struct gv_plex {int stripesize; int name; struct gv_softc* vinumconf; } ;
struct bio {int bio_pflags; int bio_offset; void* bio_data; struct gv_plex* bio_caller1; int bio_length; scalar_t__ bio_error; int bio_done; int bio_cmd; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ,int) ;
 struct bio* FUNC_3 () ;
 int VAR_7 ;
 int FUNC_4 (struct gv_softc*,struct bio*) ;

void
FUNC_5(struct gv_plex *VAR_8, int VAR_9, off_t VAR_10)
{
 struct gv_softc *VAR_11;
 struct bio *VAR_12;

 FUNC_1(VAR_8 != ((void*)0), ("gv_parity_request: NULL p"));
 VAR_11 = VAR_8->vinumconf;
 FUNC_1(VAR_11 != ((void*)0), ("gv_parity_request: NULL sc"));

 VAR_12 = FUNC_3();
 if (VAR_12 == ((void*)0)) {
  FUNC_0(0, "rebuild of %s failed creating bio: "
      "out of memory", VAR_8->name);
  return;
 }

 VAR_12->bio_cmd = VAR_0;
 VAR_12->bio_done = VAR_7;
 VAR_12->bio_error = 0;
 VAR_12->bio_length = VAR_8->stripesize;
 VAR_12->bio_caller1 = VAR_8;





 if (VAR_9 & VAR_3)
  VAR_12->bio_data = FUNC_2(VAR_4, VAR_5);
 else if (VAR_9 & VAR_1)
  VAR_12->bio_data = FUNC_2(VAR_8->stripesize, VAR_5 | VAR_6);
 else {
  FUNC_0(0, "invalid flags given in rebuild");
  return;
 }

 VAR_12->bio_pflags = VAR_9;
 VAR_12->bio_pflags |= VAR_2;


 VAR_12->bio_offset = VAR_10;
 FUNC_4(VAR_11, VAR_12);

}
