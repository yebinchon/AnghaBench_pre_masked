
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx6_anatop_softc {int intr_setup_hook; int dev; int temp_intrhand; int ** res; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int *,int,int ,int *,struct imx6_anatop_softc*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(void *VAR_6)
{
 int VAR_7;
 struct imx6_anatop_softc *VAR_8;

 VAR_8 = VAR_6;
 VAR_7 = 0;
 VAR_8->res[VAR_2] = FUNC_0(VAR_8->dev, VAR_4, &VAR_7,
     VAR_3);
 if (VAR_8->res[VAR_2] != ((void*)0)) {
  FUNC_1(VAR_8->dev, VAR_8->res[VAR_2],
      VAR_1 | VAR_0, VAR_5, ((void*)0), VAR_8,
      &VAR_8->temp_intrhand);
 } else {
  FUNC_3(VAR_8->dev, "Cannot allocate IRQ resource\n");
 }
 FUNC_2(&VAR_8->intr_setup_hook);
}
