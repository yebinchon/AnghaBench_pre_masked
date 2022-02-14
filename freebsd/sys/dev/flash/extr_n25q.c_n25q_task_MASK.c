
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n25q_softc {scalar_t__ sc_taskstate; int sc_bio_queue; int sc_mtx; int dev; } ;
struct bio {int bio_cmd; int bio_error; int bio_bcount; int bio_data; int bio_offset; } ;
typedef int device_t ;




 int VAR_0 ;
 int FUNC_0 (struct n25q_softc*) ;
 int FUNC_1 (struct n25q_softc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct bio*) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct n25q_softc*,int *,int ,char*,int ) ;
 int FUNC_7 (int ,struct bio*,int ,int ,int ) ;
 int FUNC_8 (int ,struct bio*,int ,int ,int ) ;
 int FUNC_9 (struct n25q_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_5)
{
 struct n25q_softc *VAR_6;
 struct bio *VAR_7;
 device_t VAR_8;

 VAR_6 = (struct n25q_softc *)VAR_5;

 VAR_8 = VAR_6->dev;

 for (;;) {
  FUNC_0(VAR_6);
  do {
   if (VAR_6->sc_taskstate == VAR_3) {
    VAR_6->sc_taskstate = VAR_2;
    FUNC_1(VAR_6);
    FUNC_9(VAR_6);
    FUNC_5(0);
   }
   VAR_7 = FUNC_3(&VAR_6->sc_bio_queue);
   if (VAR_7 == ((void*)0))
    FUNC_6(VAR_6, &VAR_6->sc_mtx, VAR_1, "jobqueue", VAR_4);
  } while (VAR_7 == ((void*)0));
  FUNC_4(&VAR_6->sc_bio_queue, VAR_7);
  FUNC_1(VAR_6);

  switch (VAR_7->bio_cmd) {
  case 129:
   VAR_7->bio_error = FUNC_7(VAR_8, VAR_7, VAR_7->bio_offset,
       VAR_7->bio_data, VAR_7->bio_bcount);
   break;
  case 128:
   VAR_7->bio_error = FUNC_8(VAR_8, VAR_7, VAR_7->bio_offset,
       VAR_7->bio_data, VAR_7->bio_bcount);
   break;
  default:
   VAR_7->bio_error = VAR_0;
  }

  FUNC_2(VAR_7);
 }
}
