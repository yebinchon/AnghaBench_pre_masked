
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_softc {int sc_ndisks; struct g_raid3_disk* sc_syncdisk; } ;
struct TYPE_2__ {struct bio** ds_bios; } ;
struct g_raid3_disk {TYPE_1__ d_sync; } ;
struct bio {int bio_offset; int bio_length; scalar_t__ bio_cmd; } ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct g_raid3_softc *VAR_2, struct bio *VAR_3)
{
 struct g_raid3_disk *VAR_4;
 struct bio *VAR_5;
 off_t VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_4 = VAR_2->sc_syncdisk;
 if (VAR_4 == ((void*)0))
  return (0);
 VAR_6 = VAR_3->bio_offset;
 VAR_7 = VAR_3->bio_offset + VAR_3->bio_length;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_5 = VAR_4->d_sync.ds_bios[VAR_10];
  if (VAR_5 == ((void*)0))
   continue;
  VAR_8 = VAR_5->bio_offset;
  VAR_9 = VAR_5->bio_length;
  if (VAR_5->bio_cmd == VAR_0) {
   VAR_8 *= VAR_2->sc_ndisks - 1;
   VAR_9 *= VAR_2->sc_ndisks - 1;
  }
  VAR_9 += VAR_8;
  if (VAR_7 > VAR_8 && VAR_6 < VAR_9)
   return (1);
 }
 return (0);
}
