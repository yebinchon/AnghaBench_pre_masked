
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tdfx_softc {int type; int addr0; int memrid; int addr1; int memrid2; int pio0; int pio0max; int piorid; TYPE_1__* devt; int * piorange; int * memrange2; int * memrange; int * curFile; int dv; int bus; int vendor; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {struct tdfx_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 struct tdfx_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 TYPE_1__* FUNC_5 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_11) {
 struct tdfx_softc *VAR_12;


 int VAR_13 = FUNC_0(0);


 VAR_10++;


 VAR_12 = FUNC_2(VAR_11);
 VAR_12->dev = VAR_11;
 VAR_12->vendor = FUNC_9(VAR_11);
 VAR_12->type = FUNC_7(VAR_11) >> 16;
 VAR_12->bus = FUNC_6(VAR_11);
 VAR_12->dv = FUNC_8(VAR_11);
 VAR_12->curFile = ((void*)0);






 VAR_12->addr0 = (FUNC_10(VAR_11, 0x10, 4) & 0xffff0000);




 VAR_12->memrange = FUNC_1(VAR_11, VAR_7,
  &VAR_13, VAR_4 | VAR_5);
 if(VAR_12->memrange == ((void*)0)) {



  VAR_12->memrid = 0;
 }
 else {
  VAR_12->memrid = VAR_13;




 }


 if(FUNC_7(VAR_11) == VAR_3 ||
  FUNC_7(VAR_11) == VAR_2) {
  VAR_13 = 0x14;
  VAR_12->addr1 = (FUNC_10(VAR_11, 0x14, 4) & 0xffff0000);



  VAR_12->memrange2 = FUNC_1(VAR_11,
   VAR_7, &VAR_13, VAR_4 | VAR_5);
  if(VAR_12->memrange2 == ((void*)0)) {



   VAR_12->memrid2 = 0;
  }
  else {
   VAR_12->memrid2 = VAR_13;
  }

  VAR_13 = VAR_1;
  VAR_12->pio0 = FUNC_10(VAR_11, 0x2c, 2);
  VAR_12->pio0max = FUNC_10(VAR_11, 0x30, 2) + VAR_12->pio0;
  VAR_12->piorange = FUNC_1(VAR_11,
   VAR_6, &VAR_13, VAR_4 | VAR_5);
  if(VAR_12->piorange == ((void*)0)) {



   VAR_12->piorid = 0;
  }
  else {
   VAR_12->piorid = VAR_13;
  }
 } else {
   VAR_12->addr1 = 0;
   VAR_12->memrange2 = ((void*)0);
   VAR_12->piorange = ((void*)0);
 }






 if(FUNC_12(VAR_11) != 0) {



  return -1;
 }







 VAR_12->devt = FUNC_5(&VAR_9, FUNC_3(VAR_11),
  VAR_8, VAR_0, 0600, "3dfx%x", FUNC_3(VAR_11));
 VAR_12->devt->si_drv1 = VAR_12;

 return 0;
}
