
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct cyapa_softc {int detaching; int mutex; TYPE_1__ selinfo; int devnode; scalar_t__ poll_thread_running; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct cyapa_softc*) ;
 int FUNC_1 (struct cyapa_softc*) ;
 int FUNC_2 (int ) ;
 struct cyapa_softc* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int*,int *,int ,char*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct cyapa_softc *VAR_3;

 VAR_3 = FUNC_3(VAR_2);


 FUNC_0(VAR_3);
 while (VAR_3->poll_thread_running) {
  VAR_3->detaching = 1;
  FUNC_7(&VAR_3->detaching, &VAR_3->mutex, VAR_0, "cyapadet", VAR_1);
 }
 FUNC_1(VAR_3);

 FUNC_2(VAR_3->devnode);

 FUNC_4(&VAR_3->selinfo.si_note, 0);
 FUNC_8(&VAR_3->selinfo);
 FUNC_5(&VAR_3->selinfo.si_note);

 FUNC_6(&VAR_3->mutex);

 return (0);
}
