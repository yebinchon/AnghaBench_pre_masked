
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int dummy; } ;
struct gv_sd {scalar_t__ drive_offset; scalar_t__ size; scalar_t__ initialized; int name; struct gv_drive* drive_sc; } ;
struct gv_plex {struct gv_softc* vinumconf; } ;
struct gv_drive {struct g_consumer* consumer; } ;
struct g_consumer {int dummy; } ;
struct bio {scalar_t__ bio_offset; scalar_t__ bio_length; int bio_error; int * bio_data; struct gv_sd* bio_caller1; } ;
typedef scalar_t__ off_t ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct g_consumer*,int ,int,int ) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct gv_sd*,scalar_t__,int *,scalar_t__) ;
 int FUNC_9 (struct gv_softc*,int ,struct gv_softc*,int *,int ,int ) ;
 int FUNC_10 (struct gv_sd*,int ,int) ;

void
FUNC_11(struct gv_plex *VAR_5, struct bio *VAR_6)
{
 struct gv_softc *VAR_7;
 struct gv_drive *VAR_8;
 struct g_consumer *VAR_9;
 struct gv_sd *VAR_10;
 off_t VAR_11, VAR_12;
 caddr_t VAR_13;
 int VAR_14;

 VAR_10 = VAR_6->bio_caller1;
 VAR_11 = VAR_6->bio_offset;
 VAR_12 = VAR_6->bio_length;
 VAR_14 = VAR_6->bio_error;
 VAR_13 = VAR_6->bio_data;

 FUNC_1(VAR_10 != ((void*)0), ("gv_init_complete: NULL s"));
 VAR_8 = VAR_10->drive_sc;
 FUNC_1(VAR_8 != ((void*)0), ("gv_init_complete: NULL d"));
 VAR_9 = VAR_8->consumer;
 FUNC_1(VAR_9 != ((void*)0), ("gv_init_complete: NULL cp"));
 VAR_7 = VAR_5->vinumconf;
 FUNC_1(VAR_7 != ((void*)0), ("gv_init_complete: NULL sc"));

 FUNC_3(VAR_6);






 if (VAR_11 >= VAR_10->drive_offset + VAR_10->size) {

  if (VAR_13 != ((void*)0))
   FUNC_4(VAR_13);
  FUNC_5();
  FUNC_6();
  FUNC_2(VAR_9, 0, -1, 0);
  FUNC_7();
  if (VAR_14) {
   FUNC_10(VAR_10, VAR_1, VAR_4 |
       VAR_3);
  } else {
   FUNC_10(VAR_10, VAR_2, VAR_3);
   VAR_10->initialized = 0;
   FUNC_9(VAR_7, VAR_0, VAR_7, ((void*)0), 0, 0);
   FUNC_0(1, "subdisk '%s' init: finished "
       "successfully", VAR_10->name);
  }
  return;
 }
 VAR_10->initialized += VAR_12;
 VAR_11 += VAR_12;
 FUNC_8(VAR_10, VAR_11, VAR_13, VAR_12);
}
