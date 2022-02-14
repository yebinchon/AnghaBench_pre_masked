
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomuxc_softc {int * tmr_res; int bsh; int bst; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 struct iomuxc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct iomuxc_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct iomuxc_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 VAR_3->dev = VAR_2;

 if (FUNC_0(VAR_2, VAR_1, VAR_3->tmr_res)) {
  FUNC_2(VAR_2, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_3->bst = FUNC_5(VAR_3->tmr_res[0]);
 VAR_3->bsh = FUNC_4(VAR_3->tmr_res[0]);

 FUNC_3(VAR_3);

 return (0);
}
