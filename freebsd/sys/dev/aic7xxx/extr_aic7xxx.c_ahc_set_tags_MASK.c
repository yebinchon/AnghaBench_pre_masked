
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int dummy; } ;
struct ahc_devinfo {int lun; int target; int channel; } ;
typedef int ahc_queue_alg ;


 int VAR_0 ;
 int FUNC_0 (struct ahc_softc*,struct ahc_devinfo*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,int ,int ,int ,int *) ;

void
FUNC_2(struct ahc_softc *VAR_1, struct ahc_devinfo *VAR_2,
      ahc_queue_alg VAR_3)
{
  FUNC_0(VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_1, VAR_2->channel, VAR_2->target,
          VAR_2->lun, VAR_0, &VAR_3);
}
