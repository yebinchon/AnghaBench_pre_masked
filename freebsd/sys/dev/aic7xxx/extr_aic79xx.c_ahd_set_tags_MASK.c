
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int dummy; } ;
struct ahd_devinfo {int lun; int target; int channel; } ;
typedef int ahd_queue_alg ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*,struct ahd_devinfo*,int ) ;
 int FUNC_1 (struct ahd_softc*,int ,int ,int ,int ,int *) ;

void
FUNC_2(struct ahd_softc *VAR_1, struct ahd_devinfo *VAR_2,
      ahd_queue_alg VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_1, VAR_2->channel, VAR_2->target,
         VAR_2->lun, VAR_0, &VAR_3);
}
