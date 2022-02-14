
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
struct g_kerneldump {scalar_t__ offset; scalar_t__ length; } ;
struct g_concat_softc {size_t sc_ndisks; struct g_concat_disk* sc_disks; } ;
struct g_concat_disk {scalar_t__ d_start; scalar_t__ d_end; TYPE_4__* d_consumer; } ;
struct bio {int bio_done; scalar_t__ bio_data; TYPE_2__* bio_to; } ;
struct TYPE_8__ {TYPE_3__* provider; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {TYPE_1__* geom; } ;
struct TYPE_5__ {struct g_concat_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 struct bio* FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*,TYPE_4__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_3)
{
 struct g_concat_softc *VAR_4;
 struct g_concat_disk *VAR_5;
 struct bio *VAR_6;
 struct g_kerneldump *VAR_7;
 u_int VAR_8;

 VAR_4 = VAR_3->bio_to->geom->softc;
 VAR_7 = (struct g_kerneldump *)VAR_3->bio_data;
 for (VAR_8 = 0; VAR_8 < VAR_4->sc_ndisks; VAR_8++) {
  if (VAR_4->sc_disks[VAR_8].d_start <= VAR_7->offset &&
      VAR_4->sc_disks[VAR_8].d_end > VAR_7->offset)
   break;
 }
 if (VAR_8 == VAR_4->sc_ndisks) {
  FUNC_2(VAR_3, VAR_1);
  return;
 }
 VAR_5 = &VAR_4->sc_disks[VAR_8];
 VAR_7->offset -= VAR_5->d_start;
 if (VAR_7->length > VAR_5->d_end - VAR_5->d_start - VAR_7->offset)
  VAR_7->length = VAR_5->d_end - VAR_5->d_start - VAR_7->offset;
 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_3, VAR_0);
  return;
 }
 VAR_6->bio_done = VAR_2;
 FUNC_3(VAR_6, VAR_5->d_consumer);
 FUNC_0(1, "Kernel dump will go to %s.",
     VAR_5->d_consumer->provider->name);
}
