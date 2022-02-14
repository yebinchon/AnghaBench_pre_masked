
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_stripe_softc {int sc_lock; } ;
struct bio {scalar_t__ bio_cmd; scalar_t__ bio_error; scalar_t__ bio_inbed; scalar_t__ bio_children; int * bio_driver1; scalar_t__ bio_completed; int * bio_caller1; int * bio_data; int bio_length; int bio_offset; TYPE_2__* bio_to; struct bio* bio_parent; } ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_stripe_softc* softc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,scalar_t__) ;
 int FUNC_2 (struct g_stripe_softc*,int *,int *,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct bio *VAR_2)
{
 struct g_stripe_softc *VAR_3;
 struct bio *VAR_4;

 VAR_4 = VAR_2->bio_parent;
 VAR_3 = VAR_4->bio_to->geom->softc;
 if (VAR_2->bio_cmd == VAR_0 && VAR_2->bio_caller1 != ((void*)0)) {
  FUNC_2(VAR_3, VAR_2->bio_data, VAR_2->bio_caller1, VAR_2->bio_offset,
      VAR_2->bio_length, 1);
  VAR_2->bio_data = VAR_2->bio_caller1;
  VAR_2->bio_caller1 = ((void*)0);
 }
 FUNC_3(&VAR_3->sc_lock);
 if (VAR_4->bio_error == 0)
  VAR_4->bio_error = VAR_2->bio_error;
 VAR_4->bio_completed += VAR_2->bio_completed;
 VAR_4->bio_inbed++;
 if (VAR_4->bio_children == VAR_4->bio_inbed) {
  FUNC_4(&VAR_3->sc_lock);
  if (VAR_4->bio_driver1 != ((void*)0))
   FUNC_5(VAR_1, VAR_4->bio_driver1);
  FUNC_1(VAR_4, VAR_4->bio_error);
 } else
  FUNC_4(&VAR_3->sc_lock);
 FUNC_0(VAR_2);
}
