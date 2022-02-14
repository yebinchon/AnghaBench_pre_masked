
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usbss_softc {int * sc_mem_res; int sc_mem_rid; } ;
typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct usbss_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct usbss_softc*,int ,int) ;
 int * FUNC_5 (int ,int ,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct usbss_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int ,int *,int,int *) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_7)
{
 struct usbss_softc *VAR_8 = FUNC_8(VAR_7);
 int VAR_9;
 uint32_t VAR_10;
 phandle_t VAR_11;


 VAR_8->sc_mem_res = FUNC_5(VAR_7, VAR_3,
     &VAR_8->sc_mem_rid, VAR_2);
 if (VAR_8->sc_mem_res == ((void*)0)) {
  FUNC_9(VAR_7,
      "Error: could not allocate mem resources\n");
  return (VAR_0);
 }


 FUNC_13(VAR_1);






 FUNC_4(VAR_8, VAR_5, VAR_6);
 FUNC_0(100);
 VAR_9 = 10;
 while (FUNC_3(VAR_8, VAR_5) & VAR_6) {
  FUNC_0(100);
  if (VAR_9-- == 0) {
   FUNC_9(VAR_7, "reset timeout.\n");
   return (VAR_0);
  }
 }


 VAR_10 = FUNC_3(VAR_8, VAR_4);
 FUNC_9(VAR_7, "TI AM335X USBSS v%d.%d.%d\n",
     (VAR_10 >> 8) & 7, (VAR_10 >> 6) & 3, VAR_10 & 63);

 VAR_11 = FUNC_10(VAR_7);

 if (VAR_11 == -1) {
  FUNC_14(VAR_7);
  return (VAR_0);
 }

 FUNC_12(VAR_7, VAR_11);




 FUNC_7(VAR_7);




 for (VAR_11 = FUNC_1(VAR_11); VAR_11 > 0; VAR_11 = FUNC_2(VAR_11))
  FUNC_11(VAR_7, VAR_11, 0, ((void*)0), -1, ((void*)0));

 return (FUNC_6(VAR_7));
}
