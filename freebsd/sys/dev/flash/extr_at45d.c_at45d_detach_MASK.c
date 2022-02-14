
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at45d_softc {scalar_t__ taskstate; int dummybuf; int bio_queue; scalar_t__ disk; int dev; int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct at45d_softc*) ;
 int FUNC_1 (struct at45d_softc*) ;
 int FUNC_2 (struct at45d_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int *,int ) ;
 struct at45d_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct at45d_softc*,int *,int ,char*,int) ;
 int FUNC_9 (struct at45d_softc*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 struct at45d_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_6);
 VAR_8 = 0;

 FUNC_0(VAR_7);
 if (VAR_7->taskstate == VAR_2) {
  VAR_7->taskstate = VAR_4;
  FUNC_9(VAR_7);
  while (VAR_8 == 0 && VAR_7->taskstate != VAR_3) {
   VAR_8 = FUNC_8(VAR_7, &VAR_7->sc_mtx, 0, "at45dt", VAR_5 * 3);
   if (VAR_8 != 0) {
    VAR_7->taskstate = VAR_2;
    FUNC_5(VAR_7->dev,
        "Failed to stop queue task\n");
   }
  }
 }
 FUNC_2(VAR_7);

 if (VAR_8 == 0 && VAR_7->taskstate == VAR_3) {
  if (VAR_7->disk) {
   FUNC_6(VAR_7->disk);
   FUNC_3(&VAR_7->bio_queue, ((void*)0), VAR_0);
   FUNC_7(VAR_7->dummybuf, VAR_1);
  }
  FUNC_1(VAR_7);
 }
 return (VAR_8);
}
