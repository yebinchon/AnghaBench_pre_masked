
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ofwd_softc {int ofwd_queue_mtx; int ofwd_bio_queue; } ;
struct bio {TYPE_2__* bio_to; } ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct ofwd_softc* softc; } ;


 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ofwd_softc*) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_0)
{
 struct ofwd_softc *VAR_1;

 VAR_1 = VAR_0->bio_to->geom->softc;
 FUNC_1(&VAR_1->ofwd_queue_mtx);
 FUNC_0(&VAR_1->ofwd_bio_queue, VAR_0);
 FUNC_2(&VAR_1->ofwd_queue_mtx);
 FUNC_3(VAR_1);
}
