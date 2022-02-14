
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct n25q_softc {int sc_bio_queue; } ;
struct bio {TYPE_1__* bio_disk; } ;
struct TYPE_2__ {scalar_t__ d_drv1; } ;


 int FUNC_0 (struct n25q_softc*) ;
 int FUNC_1 (struct n25q_softc*) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (struct n25q_softc*) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_0)
{
 struct n25q_softc *VAR_1;

 VAR_1 = (struct n25q_softc *)VAR_0->bio_disk->d_drv1;

 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->sc_bio_queue, VAR_0);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
}
