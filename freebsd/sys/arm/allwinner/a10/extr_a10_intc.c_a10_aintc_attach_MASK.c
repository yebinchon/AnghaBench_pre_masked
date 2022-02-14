
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a10_aintc_softc {int aintc_res; int mtx; int aintc_bsh; int aintc_bst; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct a10_aintc_softc*) ;
 int FUNC_3 (struct a10_aintc_softc*,int ,int) ;
 int FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 struct a10_aintc_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,char*,char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6)
{
 struct a10_aintc_softc *VAR_7 = FUNC_6(VAR_6);
 int VAR_8 = 0;
 int VAR_9;
 VAR_7->sc_dev = VAR_6;

 VAR_7->aintc_res = FUNC_4(VAR_6, VAR_5,
     &VAR_8, VAR_2);
 if (!VAR_7->aintc_res) {
  FUNC_7(VAR_6, "could not allocate resource\n");
  goto error;
 }

 VAR_7->aintc_bst = FUNC_10(VAR_7->aintc_res);
 VAR_7->aintc_bsh = FUNC_9(VAR_7->aintc_res);

 FUNC_8(&VAR_7->mtx, "A10 AINTC lock", "", VAR_1);


 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  FUNC_3(VAR_7, FUNC_0(VAR_9), 0);
  FUNC_3(VAR_7, FUNC_1(VAR_9), 0xffffffff);
 }

 FUNC_3(VAR_7, VAR_4, 0x01);


 FUNC_3(VAR_7, VAR_3, 0x00);

 if (FUNC_2(VAR_7) != 0) {
  FUNC_7(VAR_6, "could not attach PIC\n");
  return (VAR_0);
 }

 return (0);

error:
 FUNC_5(VAR_6, VAR_5, VAR_8,
     VAR_7->aintc_res);
 return (VAR_0);
}
