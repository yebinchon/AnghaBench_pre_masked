
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_temp_softc {int flags; int temp_lock; int event_thread; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ow_temp_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ow_temp_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct ow_temp_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 FUNC_3(&VAR_4->temp_lock);
 VAR_4->flags |= VAR_0;
 while (VAR_4->flags & VAR_1) {
  FUNC_4(VAR_4);
  FUNC_1(VAR_4->event_thread, &VAR_4->temp_lock, VAR_2, "owtun", 0);
 }
 FUNC_2(&VAR_4->temp_lock);

 return 0;
}
