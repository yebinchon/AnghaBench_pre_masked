
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_softc {int lock; int bio_queue; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (struct ida_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct ida_softc *VAR_0, struct bio *VAR_1)
{
 FUNC_2(&VAR_0->lock);
 FUNC_0(&VAR_0->bio_queue, VAR_1);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_0->lock);
}
