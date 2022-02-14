
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_maxchan; int * amr_cam_devq; int amr_list_lock; int ** amr_cam_sim; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct amr_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct amr_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_4(&VAR_2->amr_list_lock);
 for (VAR_3 = 0; VAR_3 < VAR_2->amr_maxchan; VAR_3++) {



  if (VAR_2->amr_cam_sim[VAR_3] != ((void*)0)) {
   FUNC_6(FUNC_1(VAR_2->amr_cam_sim[VAR_3]));
   FUNC_0(VAR_2->amr_cam_sim[VAR_3], VAR_0);
  }
 }
 FUNC_5(&VAR_2->amr_list_lock);


 if (VAR_2->amr_cam_devq != ((void*)0))
  FUNC_2(VAR_2->amr_cam_devq);

 return (0);
}
