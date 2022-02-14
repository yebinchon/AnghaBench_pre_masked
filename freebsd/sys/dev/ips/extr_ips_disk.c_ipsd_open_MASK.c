
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disk {TYPE_1__* d_drv1; } ;
struct TYPE_2__ {int dev; int state; } ;
typedef TYPE_1__ ipsdisk_softc_t ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct disk *VAR_1)
{
 ipsdisk_softc_t *VAR_2 = VAR_1->d_drv1;

 VAR_2->state |= VAR_0;
 FUNC_0(2, VAR_2->dev, "I'm open\n");
        return 0;
}
