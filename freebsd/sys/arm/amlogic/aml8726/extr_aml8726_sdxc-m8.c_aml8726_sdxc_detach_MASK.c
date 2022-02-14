
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_sdxc_softc {int * res; int dmatag; int dmamap; int ih_cookie; int * cmd; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct aml8726_sdxc_softc*) ;
 int FUNC_1 (struct aml8726_sdxc_softc*) ;
 int FUNC_2 (struct aml8726_sdxc_softc*) ;
 int FUNC_3 (struct aml8726_sdxc_softc*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct aml8726_sdxc_softc*) ;
 int FUNC_5 (struct aml8726_sdxc_softc*) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int ,int ) ;
 struct aml8726_sdxc_softc* FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_3)
{
 struct aml8726_sdxc_softc *VAR_4 = FUNC_11(VAR_3);

 FUNC_0(VAR_4);

 if (VAR_4->cmd != ((void*)0)) {
  FUNC_2(VAR_4);
  return (VAR_1);
 }





 FUNC_4(VAR_4);
 FUNC_5(VAR_4);
 FUNC_3(VAR_4, VAR_0, 0);

 FUNC_2(VAR_4);

 FUNC_8(VAR_3);

 FUNC_10(VAR_3, VAR_4->res[1], VAR_4->ih_cookie);

 FUNC_7(VAR_4->dmatag, VAR_4->dmamap);

 FUNC_6(VAR_4->dmatag);

 FUNC_1(VAR_4);

 FUNC_9(VAR_3, VAR_2, VAR_4->res);

 return (0);
}
