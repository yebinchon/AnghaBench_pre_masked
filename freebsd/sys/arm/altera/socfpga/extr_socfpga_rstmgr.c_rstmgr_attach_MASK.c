
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rstmgr_softc {int * res; int bsh; int bst; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 struct rstmgr_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rstmgr_softc*) ;
 struct rstmgr_softc* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct rstmgr_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->dev = VAR_3;

 if (FUNC_0(VAR_3, VAR_2, VAR_4->res)) {
  FUNC_2(VAR_3, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_4->bst = FUNC_4(VAR_4->res[0]);
 VAR_4->bsh = FUNC_3(VAR_4->res[0]);

 VAR_1 = VAR_4;
 FUNC_5(VAR_4);

 return (0);
}
