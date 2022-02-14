
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* cdev; } ;
struct pqisrc_softstate {TYPE_1__ os_specific; } ;
struct TYPE_4__ {struct pqisrc_softstate* si_drv1; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int *,int,int ,int ,int,char*,int) ;
 int VAR_4 ;

int FUNC_2(struct pqisrc_softstate *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_2;

 FUNC_0("IN idx = %d\n", VAR_6);

 VAR_5->os_specific.cdev = FUNC_1(&VAR_4, VAR_6,
    VAR_3, VAR_0, 0640,
    "smartpqi%u", VAR_6);
 if(VAR_5->os_specific.cdev) {
  VAR_5->os_specific.cdev->si_drv1 = VAR_5;
 } else {
  VAR_7 = VAR_1;
 }

 FUNC_0("OUT error = %d\n", VAR_7);
 return VAR_7;
}
