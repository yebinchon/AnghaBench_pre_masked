
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_aintc_softc {int * aintc_res; int aintc_bsh; int aintc_bst; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ti_aintc_softc*,int ) ;
 int FUNC_1 (struct ti_aintc_softc*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 struct ti_aintc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct ti_aintc_softc*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6)
{
 struct ti_aintc_softc *VAR_7 = FUNC_3(VAR_6);
 uint32_t VAR_8;

 VAR_7->sc_dev = VAR_6;

 if (FUNC_2(VAR_6, VAR_5, VAR_7->aintc_res)) {
  FUNC_4(VAR_6, "could not allocate resources\n");
  return (VAR_0);
 }

 VAR_7->aintc_bst = FUNC_6(VAR_7->aintc_res[0]);
 VAR_7->aintc_bsh = FUNC_5(VAR_7->aintc_res[0]);

 VAR_8 = FUNC_0(VAR_7, VAR_1);
 FUNC_4(VAR_6, "Revision %u.%u\n",(VAR_8 >> 4) & 0xF, VAR_8 & 0xF);


 FUNC_1(VAR_7, VAR_2, 2);


 while(!(FUNC_0(VAR_7, VAR_3) & 1));


 FUNC_1(VAR_7, VAR_4, 0xFF);

 if (FUNC_7(VAR_7) != 0) {
  FUNC_4(VAR_6, "could not attach PIC\n");
  return (VAR_0);
 }
 return (0);
}
