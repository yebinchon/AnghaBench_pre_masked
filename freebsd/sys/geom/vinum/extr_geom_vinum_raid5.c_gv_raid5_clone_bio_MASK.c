
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_sd {scalar_t__ drive_offset; } ;
struct gv_raid5_packet {int length; scalar_t__ lockbase; } ;
struct bio {struct gv_raid5_packet* bio_caller2; struct gv_sd* bio_caller1; int bio_done; int bio_length; scalar_t__ bio_offset; int * bio_data; int bio_cflags; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bio* FUNC_0 (struct bio*) ;
 int * FUNC_1 (int ,int) ;
 int VAR_3 ;

__attribute__((used)) static struct bio *
FUNC_2(struct bio *VAR_4, struct gv_sd *VAR_5, struct gv_raid5_packet *VAR_6,
    caddr_t VAR_7, int VAR_8)
{
 struct bio *VAR_9;

 VAR_9 = FUNC_0(VAR_4);
 if (VAR_9 == ((void*)0))
  return (((void*)0));
 if (VAR_7 == ((void*)0)) {
  VAR_9->bio_data = FUNC_1(VAR_6->length, VAR_1 | VAR_2);
  VAR_9->bio_cflags |= VAR_0;
 } else
  VAR_9->bio_data = VAR_7;
 VAR_9->bio_offset = VAR_6->lockbase + VAR_5->drive_offset;
 VAR_9->bio_length = VAR_6->length;
 VAR_9->bio_done = VAR_3;
 VAR_9->bio_caller1 = VAR_5;
 if (VAR_8)
  VAR_9->bio_caller2 = VAR_6;

 return (VAR_9);
}
