
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mly_softc {int mly_cam_channels; TYPE_1__* mly_controllerinfo; int mly_dev; int ** mly_cam_sim; int mly_lock; } ;
struct cam_devq {int dummy; } ;
struct TYPE_2__ {int physical_channels_present; int virtual_channels_present; int maximum_parallel_commands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mly_softc*) ;
 int FUNC_1 (struct mly_softc*) ;
 void* FUNC_2 (int ,int ,char*,struct mly_softc*,int ,int *,int ,int,struct cam_devq*) ;
 struct cam_devq* FUNC_3 (int ) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct mly_softc*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct mly_softc *VAR_4)
{
    struct cam_devq *VAR_5;
    int VAR_6, VAR_7;

    FUNC_5(1);




    if ((VAR_5 = FUNC_3(VAR_4->mly_controllerinfo->maximum_parallel_commands)) == ((void*)0)) {
 FUNC_7(VAR_4, "can't allocate CAM SIM queue\n");
 return(VAR_0);
    }





    if (FUNC_8("hw.mly.register_physical_channels")) {
 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4->mly_controllerinfo->physical_channels_present; VAR_7++, VAR_6++) {

     if ((VAR_4->mly_cam_sim[VAR_6] = FUNC_2(VAR_2, VAR_3, "mly", VAR_4,
            FUNC_6(VAR_4->mly_dev),
            &VAR_4->mly_lock,
            VAR_4->mly_controllerinfo->maximum_parallel_commands,
            1, VAR_5)) == ((void*)0)) {
  return(VAR_0);
     }
     FUNC_0(VAR_4);
     if (FUNC_9(VAR_4->mly_cam_sim[VAR_6], VAR_4->mly_dev, VAR_6)) {
  FUNC_1(VAR_4);
  FUNC_7(VAR_4, "CAM XPT phsyical channel registration failed\n");
  return(VAR_1);
     }
     FUNC_1(VAR_4);
     FUNC_4(1, "registered physical channel %d", VAR_6);
 }
    }




    VAR_6 = VAR_4->mly_controllerinfo->physical_channels_present;
    for (VAR_7 = 0; VAR_7 < VAR_4->mly_controllerinfo->virtual_channels_present; VAR_7++, VAR_6++) {
 if ((VAR_4->mly_cam_sim[VAR_6] = FUNC_2(VAR_2, VAR_3, "mly", VAR_4,
        FUNC_6(VAR_4->mly_dev),
        &VAR_4->mly_lock,
        VAR_4->mly_controllerinfo->maximum_parallel_commands,
        0, VAR_5)) == ((void*)0)) {
     return(VAR_0);
 }
 FUNC_0(VAR_4);
 if (FUNC_9(VAR_4->mly_cam_sim[VAR_6], VAR_4->mly_dev, VAR_6)) {
     FUNC_1(VAR_4);
     FUNC_7(VAR_4, "CAM XPT virtual channel registration failed\n");
     return(VAR_1);
 }
 FUNC_1(VAR_4);
 FUNC_4(1, "registered virtual channel %d", VAR_6);
    }





    VAR_4->mly_cam_channels = VAR_4->mly_controllerinfo->physical_channels_present +
 VAR_4->mly_controllerinfo->virtual_channels_present;

    return(0);
}
