
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int ipsd_disk; } ;
typedef TYPE_1__ ipsdisk_softc_t ;
typedef int device_t ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(device_t VAR_2)
{
 ipsdisk_softc_t *VAR_3;

 FUNC_0(2, VAR_2,"in detach\n");
 VAR_3 = (ipsdisk_softc_t *)FUNC_1(VAR_2);
 if(VAR_3->state & VAR_1)
  return (VAR_0);
 FUNC_2(VAR_3->ipsd_disk);
 return 0;
}
