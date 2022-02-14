
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ds_consumer; } ;
struct g_mirror_disk {TYPE_2__* d_softc; TYPE_1__ d_sync; } ;
struct bio {scalar_t__ bio_offset; int bio_length; void* bio_caller1; int bio_to; int bio_from; int bio_done; void* bio_data; int bio_cmd; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {scalar_t__ sc_mediasize; int sc_provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void
FUNC_2(const struct g_mirror_disk *VAR_3, struct bio *VAR_4,
    off_t VAR_5)
{
 void *VAR_6;
 int VAR_7;

 VAR_6 = VAR_4->bio_data;
 VAR_7 = (int)(uintptr_t)VAR_4->bio_caller1;
 FUNC_1(VAR_4);

 VAR_4->bio_cmd = VAR_0;
 VAR_4->bio_data = VAR_6;
 VAR_4->bio_done = VAR_2;
 VAR_4->bio_from = VAR_3->d_sync.ds_consumer;
 VAR_4->bio_to = VAR_3->d_softc->sc_provider;
 VAR_4->bio_caller1 = (void *)(uintptr_t)VAR_7;
 VAR_4->bio_offset = VAR_5;
 VAR_4->bio_length = FUNC_0(VAR_1,
     VAR_3->d_softc->sc_mediasize - VAR_4->bio_offset);
}
