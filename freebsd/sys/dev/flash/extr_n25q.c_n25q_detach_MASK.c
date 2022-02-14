
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n25q_softc {scalar_t__ sc_taskstate; int sc_bio_queue; int sc_disk; int dev; int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct n25q_softc*) ;
 int FUNC_1 (struct n25q_softc*) ;
 int FUNC_2 (struct n25q_softc*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,int *,int ) ;
 struct n25q_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (struct n25q_softc*,int *,int ,char*,int) ;
 int FUNC_8 (struct n25q_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 struct n25q_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = 0;

 FUNC_0(VAR_6);
 if (VAR_6->sc_taskstate == VAR_1) {
  VAR_6->sc_taskstate = VAR_3;
  FUNC_8(VAR_6);
  while (VAR_7 == 0 && VAR_6->sc_taskstate != VAR_2) {
   VAR_7 = FUNC_7(VAR_6, &VAR_6->sc_mtx, 0, "n25q", VAR_4 * 3);
   if (VAR_7 != 0) {
    VAR_6->sc_taskstate = VAR_1;
    FUNC_5(VAR_6->dev,
        "Failed to stop queue task\n");
   }
  }
 }
 FUNC_2(VAR_6);

 if (VAR_7 == 0 && VAR_6->sc_taskstate == VAR_2) {
  FUNC_6(VAR_6->sc_disk);
  FUNC_3(&VAR_6->sc_bio_queue, ((void*)0), VAR_0);
  FUNC_1(VAR_6);
 }
 return (VAR_7);
}
