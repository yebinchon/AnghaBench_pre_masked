
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_mmc_softc {int * res; int dmatag; int dmamap; int ih_cookie; int ch; int * cmd; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aml8726_mmc_softc*) ;
 int FUNC_1 (struct aml8726_mmc_softc*) ;
 int FUNC_2 (struct aml8726_mmc_softc*) ;
 int FUNC_3 (struct aml8726_mmc_softc*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct aml8726_mmc_softc*) ;
 int FUNC_5 (struct aml8726_mmc_softc*,int) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *) ;
 struct aml8726_mmc_softc* FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_4)
{
 struct aml8726_mmc_softc *VAR_5 = FUNC_12(VAR_4);

 FUNC_0(VAR_5);

 if (VAR_5->cmd != ((void*)0)) {
  FUNC_2(VAR_5);
  return (VAR_2);
 }





 (void)FUNC_4(VAR_5);
 FUNC_5(VAR_5, 0);
 FUNC_3(VAR_5, VAR_1, VAR_0);


 FUNC_11(&VAR_5->ch);

 FUNC_2(VAR_5);

 FUNC_8(VAR_4);

 FUNC_10(VAR_4, VAR_5->res[1], VAR_5->ih_cookie);

 FUNC_7(VAR_5->dmatag, VAR_5->dmamap);

 FUNC_6(VAR_5->dmatag);

 FUNC_1(VAR_5);

 FUNC_9(VAR_4, VAR_3, VAR_5->res);

 return (0);
}
