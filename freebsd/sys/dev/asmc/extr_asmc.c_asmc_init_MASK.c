
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct asmc_softc {int sc_sms_intr_works; scalar_t__ sc_nfan; TYPE_1__* sc_model; } ;
typedef int device_t ;
struct TYPE_2__ {int * smc_sms_x; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int ,int*,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_11 ;
 struct asmc_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_12)
{
 struct asmc_softc *VAR_13 = FUNC_7(VAR_12);
 int VAR_14, VAR_15 = 1;
 uint8_t VAR_16[4];

 if (VAR_13->sc_model->smc_sms_x == ((void*)0))
  goto nosms;




 VAR_16[0] = 0x01;
 FUNC_0(("intok key\n"));
 FUNC_5(VAR_12, VAR_0, VAR_16, 1);
 FUNC_1(50);




 VAR_16[0] = 20;
 FUNC_0(("low int key\n"));
 FUNC_5(VAR_12, VAR_6, VAR_16, 1);
 FUNC_1(200);

 VAR_16[0] = 20;
 FUNC_0(("high int key\n"));
 FUNC_5(VAR_12, VAR_4, VAR_16, 1);
 FUNC_1(200);

 VAR_16[0] = 0x00;
 VAR_16[1] = 0x60;
 FUNC_0(("sms low key\n"));
 FUNC_5(VAR_12, VAR_5, VAR_16, 2);
 FUNC_1(200);

 VAR_16[0] = 0x01;
 VAR_16[1] = 0xc0;
 FUNC_0(("sms high key\n"));
 FUNC_5(VAR_12, VAR_3, VAR_16, 2);
 FUNC_1(200);





 VAR_16[0] = 0x01;
 FUNC_0(("sms flag key\n"));
 FUNC_5(VAR_12, VAR_2, VAR_16, 1);
 FUNC_1(100);

 VAR_13->sc_sms_intr_works = 0;





 for (VAR_14 = 0; VAR_14 < 1000; VAR_14++) {
  if (FUNC_4(VAR_12, VAR_1, VAR_16, 2) == 0 &&
      (VAR_16[0] == VAR_9 && VAR_16[1] == VAR_10)) {
   VAR_15 = 0;
   VAR_13->sc_sms_intr_works = 1;
   goto out;
  }
  VAR_16[0] = VAR_9;
  VAR_16[1] = VAR_10;
  FUNC_0(("sms key\n"));
  FUNC_5(VAR_12, VAR_1, VAR_16, 2);
  FUNC_1(50);
 }
 FUNC_8(VAR_12, "WARNING: Sudden Motion Sensor not initialized!\n");

out:
 FUNC_6(VAR_12);
nosms:
 VAR_13->sc_nfan = FUNC_3(VAR_12);
 if (VAR_13->sc_nfan > VAR_7) {
  FUNC_8(VAR_12, "more than %d fans were detected. Please "
      "report this.\n", VAR_7);
  VAR_13->sc_nfan = VAR_7;
 }

 if (VAR_11) {



  FUNC_4(VAR_12, VAR_8, VAR_16, 4);
  FUNC_8(VAR_12, "number of keys: %d\n", FUNC_9(*(uint32_t*)VAR_16));
 }





 return (VAR_15);
}
