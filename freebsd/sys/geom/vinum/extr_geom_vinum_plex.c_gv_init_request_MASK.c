
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_sd {scalar_t__ initialized; int name; struct gv_drive* drive_sc; } ;
struct gv_drive {struct g_consumer* consumer; } ;
struct g_consumer {int dummy; } ;
struct bio {struct gv_sd* bio_caller1; void* bio_done; void* bio_offset; int bio_pflags; void* bio_length; scalar_t__ bio_error; int bio_data; int bio_cmd; } ;
typedef void* off_t ;
typedef int intmax_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct bio* FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,struct g_consumer*) ;
 struct bio* FUNC_4 () ;
 void* VAR_2 ;

void
FUNC_5(struct gv_sd *VAR_3, off_t VAR_4, caddr_t VAR_5, off_t VAR_6)
{
 struct gv_drive *VAR_7;
 struct g_consumer *VAR_8;
 struct bio *VAR_9, *VAR_10;

 FUNC_1(VAR_3 != ((void*)0), ("gv_init_request: NULL s"));
 VAR_7 = VAR_3->drive_sc;
 FUNC_1(VAR_7 != ((void*)0), ("gv_init_request: NULL d"));
 VAR_8 = VAR_7->consumer;
 FUNC_1(VAR_8 != ((void*)0), ("gv_init_request: NULL cp"));

 VAR_9 = FUNC_4();
 if (VAR_9 == ((void*)0)) {
  FUNC_0(0, "subdisk '%s' init: write failed at offset %jd"
      " (drive offset %jd); out of memory", VAR_3->name,
      (intmax_t)VAR_3->initialized, (intmax_t)VAR_4);
  return;
 }
 VAR_9->bio_cmd = VAR_0;
 VAR_9->bio_data = VAR_5;
 VAR_9->bio_done = VAR_2;
 VAR_9->bio_error = 0;
 VAR_9->bio_length = VAR_6;
 VAR_9->bio_pflags |= VAR_1;
 VAR_9->bio_offset = VAR_4;
 VAR_9->bio_caller1 = VAR_3;


 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10 == ((void*)0)) {
  FUNC_0(0, "subdisk '%s' init: write failed at offset %jd"
      " (drive offset %jd); out of memory", VAR_3->name,
      (intmax_t)VAR_3->initialized, (intmax_t)VAR_4);
  return;
 }
 VAR_10->bio_done = VAR_2;
 VAR_10->bio_caller1 = VAR_3;

 FUNC_3(VAR_10, VAR_8);
}
