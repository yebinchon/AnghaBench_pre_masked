
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {TYPE_1__* bio_disk; } ;
struct at45d_softc {int bio_queue; } ;
struct TYPE_2__ {scalar_t__ d_drv1; } ;


 int FUNC_0 (struct at45d_softc*) ;
 int FUNC_1 (struct at45d_softc*) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (struct at45d_softc*) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_0)
{
 struct at45d_softc *VAR_1;

 VAR_1 = (struct at45d_softc *)VAR_0->bio_disk->d_drv1;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->bio_queue, VAR_0);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
}
