
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_bde_work {scalar_t__ length; scalar_t__ data; scalar_t__ offset; struct bio* bp; } ;
struct g_bde_softc {int worklist_mutex; } ;
struct bio {scalar_t__ bio_length; scalar_t__ bio_offset; scalar_t__ bio_data; scalar_t__ bio_error; struct g_bde_softc* bio_driver1; TYPE_2__* bio_to; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_bde_softc* softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,scalar_t__,int ) ;
 int FUNC_1 (struct g_bde_work*) ;
 struct g_bde_work* FUNC_2 (struct g_bde_softc*) ;
 int FUNC_3 (struct g_bde_work*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct bio *VAR_1)
{
 struct g_bde_softc *VAR_2;
 struct g_bde_work *VAR_3;
 off_t VAR_4;

 VAR_2 = VAR_1->bio_to->geom->softc;
 VAR_1->bio_driver1 = VAR_2;

 FUNC_4(&VAR_2->worklist_mutex);
 for(VAR_4 = 0; VAR_4 < VAR_1->bio_length; ) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3 != ((void*)0)) {
   VAR_3->bp = VAR_1;
   VAR_3->offset = VAR_1->bio_offset + VAR_4;
   VAR_3->data = VAR_1->bio_data + VAR_4;
   VAR_3->length = VAR_1->bio_length - VAR_4;
   FUNC_1(VAR_3);
   VAR_4 += VAR_3->length;
   FUNC_3(VAR_3);
  }
  if (VAR_3 == ((void*)0) || VAR_1->bio_error != 0) {
   FUNC_0(VAR_1, VAR_1->bio_length - VAR_4, VAR_0);
   break;
  }
 }
 FUNC_5(&VAR_2->worklist_mutex);
 return;
}
