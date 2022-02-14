
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int sc_freq; } ;
struct lsi64854_softc {struct ncr53c9x_softc* sc_client; } ;
struct esp_softc {int * sc_res; struct lsi64854_softc* sc_dma; int sc_dev; struct ncr53c9x_softc sc_ncr53c9x; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 struct esp_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_3 ;
 int FUNC_6 (struct esp_softc*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4)
{
 struct esp_softc *VAR_5;
 struct ncr53c9x_softc *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_4(VAR_4);
 VAR_6 = &VAR_5->sc_ncr53c9x;

 VAR_5->sc_dev = VAR_4;
 if (FUNC_0(FUNC_7(VAR_4), "clock-frequency",
     &VAR_6->sc_freq, sizeof(VAR_6->sc_freq)) == -1) {
  FUNC_8("failed to query OFW for clock-frequency\n");
  return (VAR_0);
 }


 VAR_5->sc_dma = (struct lsi64854_softc *)
     FUNC_4(FUNC_3(VAR_4));
 VAR_5->sc_dma->sc_client = VAR_6;




 VAR_8 = 0;
 if ((VAR_5->sc_res = FUNC_1(VAR_4, VAR_2,
     &VAR_8, VAR_1)) == ((void*)0)) {
  FUNC_5(VAR_4, "cannot allocate SCSI core registers\n");
  return (VAR_0);
 }

 VAR_7 = FUNC_6(VAR_5, &VAR_3);
 if (VAR_7 != 0) {
  FUNC_5(VAR_4, "espattach failed\n");
  goto fail_dma_eres;
 }

 return (0);

 fail_dma_eres:
 FUNC_2(VAR_4, VAR_2, FUNC_9(VAR_5->sc_res),
     VAR_5->sc_res);
 return (VAR_7);
}
