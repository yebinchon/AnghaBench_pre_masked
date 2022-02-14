
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_slicer {struct g_slice* slices; } ;
struct g_slice {scalar_t__ length; scalar_t__ offset; } ;
struct g_geom {int consumer; struct g_slicer* softc; } ;
struct g_consumer {int dummy; } ;
struct bio {scalar_t__ bio_offset; scalar_t__ bio_length; int bio_done; TYPE_1__* bio_to; int * bio_from; } ;
struct TYPE_2__ {int index; struct g_geom* geom; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct g_consumer* FUNC_1 (int *) ;
 struct bio* FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,struct g_consumer*) ;
 int VAR_1 ;

void
FUNC_5(struct bio *VAR_2)
{
 struct bio *VAR_3;
 struct g_geom *VAR_4;
 struct g_consumer *VAR_5;
 struct g_slicer *VAR_6;
 struct g_slice *VAR_7;
 int VAR_8;

 FUNC_0(VAR_2->bio_to != ((void*)0),
     ("NULL bio_to in g_slice_finish_hot(%p)", VAR_2));
 FUNC_0(VAR_2->bio_from != ((void*)0),
     ("NULL bio_from in g_slice_finish_hot(%p)", VAR_2));
 VAR_4 = VAR_2->bio_to->geom;
 VAR_6 = VAR_4->softc;
 VAR_5 = FUNC_1(&VAR_4->consumer);
 FUNC_0(VAR_5 != ((void*)0), ("NULL consumer in g_slice_finish_hot(%p)", VAR_2));
 VAR_8 = VAR_2->bio_to->index;
 VAR_7 = &VAR_6->slices[VAR_8];

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_2, VAR_0);
  return;
 }
 if (VAR_3->bio_offset + VAR_3->bio_length > VAR_7->length)
  VAR_3->bio_length = VAR_7->length - VAR_3->bio_offset;
 VAR_3->bio_done = VAR_1;
 VAR_3->bio_offset += VAR_7->offset;
 FUNC_4(VAR_3, VAR_5);
 return;
}
