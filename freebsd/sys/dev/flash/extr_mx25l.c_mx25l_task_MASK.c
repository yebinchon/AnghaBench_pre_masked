
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mx25l_softc {scalar_t__ sc_taskstate; int sc_bio_queue; int sc_mtx; int sc_dev; } ;
struct bio {int bio_cmd; int bio_error; int bio_bcount; int bio_data; int bio_offset; } ;
typedef int device_t ;




 int VAR_0 ;
 int FUNC_0 (struct mx25l_softc*) ;
 int FUNC_1 (struct mx25l_softc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct bio*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mx25l_softc*,int *,int ,char*,int ) ;
 int FUNC_7 (struct mx25l_softc*,int ,int ,int ) ;
 int FUNC_8 (struct mx25l_softc*,int ,int ,int ) ;
 int FUNC_9 (struct mx25l_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_4)
{
 struct mx25l_softc *VAR_5 = (struct mx25l_softc*)VAR_4;
 struct bio *VAR_6;
 device_t VAR_7;

 for (;;) {
  VAR_7 = VAR_5->sc_dev;
  FUNC_0(VAR_5);
  do {
   if (VAR_5->sc_taskstate == VAR_3) {
    VAR_5->sc_taskstate = VAR_2;
    FUNC_1(VAR_5);
    FUNC_9(VAR_5);
    FUNC_5(0);
   }
   VAR_6 = FUNC_3(&VAR_5->sc_bio_queue);
   if (VAR_6 == ((void*)0))
    FUNC_6(VAR_5, &VAR_5->sc_mtx, VAR_1, "mx25jq", 0);
  } while (VAR_6 == ((void*)0));
  FUNC_4(&VAR_5->sc_bio_queue, VAR_6);
  FUNC_1(VAR_5);

  switch (VAR_6->bio_cmd) {
  case 129:
   VAR_6->bio_error = FUNC_7(VAR_5, VAR_6->bio_offset,
       VAR_6->bio_data, VAR_6->bio_bcount);
   break;
  case 128:
   VAR_6->bio_error = FUNC_8(VAR_5, VAR_6->bio_offset,
       VAR_6->bio_data, VAR_6->bio_bcount);
   break;
  default:
   VAR_6->bio_error = VAR_0;
  }


  FUNC_2(VAR_6);
 }
}
