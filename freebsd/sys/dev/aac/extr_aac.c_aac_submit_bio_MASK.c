
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {TYPE_1__* bio_disk; } ;
struct aac_softc {int dummy; } ;
struct aac_disk {struct aac_softc* ad_controller; } ;
struct TYPE_2__ {scalar_t__ d_drv1; } ;


 char* VAR_0 ;
 int FUNC_0 (struct aac_softc*,struct bio*) ;
 int FUNC_1 (struct aac_softc*) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

void
FUNC_3(struct bio *VAR_1)
{
 struct aac_disk *VAR_2;
 struct aac_softc *VAR_3;

 VAR_2 = (struct aac_disk *)VAR_1->bio_disk->d_drv1;
 VAR_3 = VAR_2->ad_controller;
 FUNC_2(VAR_3, VAR_0, "");


 FUNC_0(VAR_3, VAR_1);
 FUNC_1(VAR_3);
}
