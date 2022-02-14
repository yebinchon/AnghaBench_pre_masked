
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxp_softc {int * ih; int * fxp_res; int dev; int ifp; int stat_ch; } ;
typedef int device_t ;


 int FUNC_0 (struct fxp_softc*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct fxp_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct fxp_softc*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;
 struct fxp_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct fxp_softc*) ;
 int FUNC_9 (struct fxp_softc*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3)
{
 struct fxp_softc *VAR_4 = FUNC_5(VAR_3);






 FUNC_1(VAR_4);



 FUNC_0(VAR_4, VAR_0, VAR_1);
 FUNC_9(VAR_4);
 FUNC_2(VAR_4);
 FUNC_4(&VAR_4->stat_ch);




 FUNC_6(VAR_4->ifp);





 FUNC_3(VAR_4->dev, VAR_4->fxp_res[1], VAR_4->ih);
 VAR_4->ih = ((void*)0);


 FUNC_8(VAR_4);
 return (0);
}
