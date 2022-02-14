
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_virstor_softc {int dummy; } ;
struct bio {scalar_t__ bio_error; scalar_t__ bio_inbed; scalar_t__ bio_children; scalar_t__ bio_length; scalar_t__ bio_completed; TYPE_2__* bio_to; int bio_offset; struct bio* bio_parent; } ;
struct TYPE_4__ {int name; TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_virstor_softc* softc; } ;


 int FUNC_0 (int ,char*,scalar_t__,int ,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_1)
{
 struct g_virstor_softc *VAR_2;
 struct bio *VAR_3;

 VAR_3 = VAR_1->bio_parent;
 VAR_2 = VAR_3->bio_to->geom->softc;

 if (VAR_1->bio_error != 0) {
  FUNC_0(VAR_0, "Error %d for offset=%ju, length=%ju, %s",
      VAR_1->bio_error, VAR_1->bio_offset, VAR_1->bio_length,
      VAR_1->bio_to->name);
  if (VAR_3->bio_error == 0)
   VAR_3->bio_error = VAR_1->bio_error;
 }

 VAR_3->bio_inbed++;
 VAR_3->bio_completed += VAR_1->bio_completed;

 if (VAR_3->bio_children == VAR_3->bio_inbed) {
  VAR_3->bio_completed = VAR_3->bio_length;
  FUNC_2(VAR_3, VAR_3->bio_error);
 }
 FUNC_1(VAR_1);
}
