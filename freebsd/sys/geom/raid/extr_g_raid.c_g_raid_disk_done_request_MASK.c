
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_volume {int v_tr; } ;
struct g_raid_subdisk {scalar_t__ sd_offset; struct g_raid_volume* sd_volume; struct g_raid_softc* sd_softc; } ;
struct g_raid_softc {int dummy; } ;
struct g_raid_disk {int dummy; } ;
struct bio {int bio_offset; TYPE_1__* bio_from; struct g_raid_subdisk* bio_caller1; int bio_error; } ;
struct TYPE_2__ {struct g_raid_disk* private; int index; } ;


 int FUNC_0 (int,struct bio*,char*,int ) ;
 int FUNC_1 (int ,struct g_raid_subdisk*,struct bio*) ;
 int FUNC_2 (struct g_raid_softc*,TYPE_1__*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_0)
{
 struct g_raid_softc *VAR_1;
 struct g_raid_disk *VAR_2;
 struct g_raid_subdisk *VAR_3;
 struct g_raid_volume *VAR_4;

 FUNC_3();

 FUNC_0(3, VAR_0, "Disk request done: %d.", VAR_0->bio_error);
 VAR_3 = VAR_0->bio_caller1;
 VAR_1 = VAR_3->sd_softc;
 VAR_4 = VAR_3->sd_volume;
 if (VAR_0->bio_from != ((void*)0)) {
  VAR_0->bio_from->index--;
  VAR_2 = VAR_0->bio_from->private;
  if (VAR_2 == ((void*)0))
   FUNC_2(VAR_1, VAR_0->bio_from);
 }
 VAR_0->bio_offset -= VAR_3->sd_offset;

 FUNC_1(VAR_4->v_tr, VAR_3, VAR_0);
}
