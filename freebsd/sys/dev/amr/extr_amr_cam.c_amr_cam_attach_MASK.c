
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_devq {int dummy; } ;
struct amr_softc {int amr_maxchan; int amr_cam_command; int amr_dev; int amr_list_lock; int ** amr_cam_sim; struct cam_devq* amr_cam_devq; int amr_cam_ccbq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,char*,struct amr_softc*,int ,int *,int,int ,struct cam_devq*) ;
 struct cam_devq* FUNC_2 (int ) ;
 int FUNC_3 (struct cam_devq*) ;
 struct amr_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 struct amr_softc *VAR_7;
 struct cam_devq *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_4(VAR_6);


 FUNC_0(&VAR_7->amr_cam_ccbq);







 if ((VAR_8 = FUNC_2(VAR_0)) == ((void*)0))
  return(VAR_1);
 VAR_7->amr_cam_devq = VAR_8;




 for (VAR_9 = 0; VAR_9 < VAR_7->amr_maxchan; VAR_9++) {


  if ((VAR_7->amr_cam_sim[VAR_9] = FUNC_1(VAR_3,
      VAR_5, "amr", VAR_7, FUNC_5(VAR_7->amr_dev),
      &VAR_7->amr_list_lock, 1, VAR_0, VAR_8)) == ((void*)0)) {
   FUNC_3(VAR_8);
   FUNC_6(VAR_7->amr_dev, "CAM SIM attach failed\n");
   return(VAR_1);
  }


  FUNC_7(&VAR_7->amr_list_lock);
  VAR_10 = FUNC_9(VAR_7->amr_cam_sim[VAR_9], VAR_7->amr_dev,VAR_9);
  FUNC_8(&VAR_7->amr_list_lock);
  if (VAR_10) {
   FUNC_6(VAR_7->amr_dev,
       "CAM XPT bus registration failed\n");
   return(VAR_2);
  }
 }




 VAR_7->amr_cam_command = VAR_4;
 return(0);
}
