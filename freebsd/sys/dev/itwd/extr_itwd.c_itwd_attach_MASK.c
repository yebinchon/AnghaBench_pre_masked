
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct itwd_softc {int wd_ev; int * intr_res; scalar_t__ intr_rid; int intr_handle; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int*) ;
 int * FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int *) ;
 int FUNC_4 (int ,int ,scalar_t__,int,int) ;
 int FUNC_5 (int ,int *,int,int *,int ,int ,int *) ;
 struct itwd_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_8 (int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_8)
{
 struct itwd_softc *VAR_9 = FUNC_6(VAR_8);
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;


 FUNC_8(VAR_8, 0x74, 0);
 FUNC_8(VAR_8, 0x73, 0);

 FUNC_1("dev.itwd.irq", &VAR_10);
 FUNC_1("dev.itwd.nmi", &VAR_11);
 if (VAR_10 < 0 || VAR_10 > 15) {
  FUNC_7(VAR_8, "Ignoring invalid IRQ value %d\n", VAR_10);
  VAR_10 = 0;
 }
 if (VAR_10 == 0 && VAR_11) {
  FUNC_7(VAR_8, "Ignoring NMI mode if IRQ is not set\n");
  VAR_11 = 0;
 }
 if (VAR_10 != 0 && !VAR_11) {
  VAR_9->intr_rid = 0;
  FUNC_4(VAR_8, VAR_4, VAR_9->intr_rid, VAR_10, 1);

  VAR_9->intr_res = FUNC_2(VAR_8, VAR_4,
      &VAR_9->intr_rid, VAR_3);
  if (VAR_9->intr_res == ((void*)0)) {
   FUNC_7(VAR_8, "unable to map interrupt\n");
   return (VAR_0);
  }
  VAR_12 = FUNC_5(VAR_8, VAR_9->intr_res,
      VAR_2 | VAR_1, ((void*)0), VAR_5, VAR_8,
      &VAR_9->intr_handle);
  if (VAR_12 != 0) {
   FUNC_3(VAR_8, VAR_4,
       VAR_9->intr_rid, VAR_9->intr_res);
   FUNC_7(VAR_8, "Unable to setup irq: error %d\n",
       VAR_12);
   return (VAR_0);
  }
 }
 if (VAR_10 != 0) {
  FUNC_7(VAR_8, "Using IRQ%d to signal timeout\n", VAR_10);
 } else {

  VAR_10 = 0x40;
  FUNC_7(VAR_8, "Configured for system reset on timeout\n");
 }

 FUNC_8(VAR_8, 0x71, 0);
 FUNC_8(VAR_8, 0x72, 0x80 | (uint8_t)VAR_10);

 VAR_9->wd_ev = FUNC_0(VAR_6, VAR_7, VAR_8, 0);
 return (0);
}
