
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_mirror_softc {int sc_disks; } ;
struct g_mirror_disk {int d_consumer; } ;
struct g_kerneldump {scalar_t__ length; } ;
struct bio {int bio_done; TYPE_1__* bio_to; scalar_t__ bio_data; } ;
struct TYPE_2__ {scalar_t__ mediasize; struct g_mirror_softc* private; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 struct g_mirror_disk* FUNC_1 (int *) ;
 struct bio* FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct g_mirror_disk*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct bio *VAR_2)
{
 struct g_mirror_softc *VAR_3;
 struct g_mirror_disk *VAR_4;
 struct bio *VAR_5;
 struct g_kerneldump *VAR_6;
 VAR_3 = VAR_2->bio_to->private;
 VAR_4 = FUNC_1(&VAR_3->sc_disks);

 VAR_6 = (struct g_kerneldump *)VAR_2->bio_data;
 if (VAR_6->length > VAR_2->bio_to->mediasize)
  VAR_6->length = VAR_2->bio_to->mediasize;
 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_2, VAR_0);
  return;
 }
 VAR_5->bio_done = VAR_1;
 FUNC_4(VAR_5, VAR_4->d_consumer);
 FUNC_0(1, "Kernel dump will go to %s.",
     FUNC_5(VAR_4));
}
