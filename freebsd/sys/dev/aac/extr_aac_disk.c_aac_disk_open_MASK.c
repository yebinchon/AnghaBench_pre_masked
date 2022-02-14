
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disk {scalar_t__ d_drv1; } ;
struct aac_disk {int ad_flags; TYPE_1__* ad_controller; } ;
struct TYPE_2__ {int aac_state; int aac_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct disk *VAR_4)
{
 struct aac_disk *VAR_5;

 FUNC_1(((void*)0), VAR_3, "");

 VAR_5 = (struct aac_disk *)VAR_4->d_drv1;

 if (VAR_5 == ((void*)0)) {
  FUNC_2("aac_disk_open: No Softc\n");
  return (VAR_2);
 }


 if (VAR_5->ad_controller->aac_state & VAR_1) {
  FUNC_0(VAR_5->ad_controller->aac_dev,
      "Controller Suspended controller state = 0x%x\n",
      VAR_5->ad_controller->aac_state);
  return(VAR_2);
 }

 VAR_5->ad_flags |= VAR_0;
 return (0);
}
